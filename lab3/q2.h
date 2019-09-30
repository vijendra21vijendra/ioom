#include<bits/stdc++.h>
using namespace std;

class Distance{
	int feet;
	float inches;
	// 12 inches is equal to 1 feet
	public:
		Distance(int a=0,float b=0){
			feet =a;
			inches = b;
		}
		// now i have to overload + , - ,  += , -= , == , << , >> these are for cin and cout
		Distance operator + (Distance x){
			float p = inches + x.inches;
			int a = (int)p/12;
			return Distance(feet + x.feet + a,p - a*12);
		}
		Distance operator - (Distance x){
			if(feet*12 + inches < (x.feet)*12 + x.inches){
				cout<< " distances can not be negative";
				return Distance(0,0);
			}
			float p = inches - x.inches;
			int feets = feet - x.feet;
			if(p<0){
				feets -=1;
				p += 12;
			}
			return Distance(feets,p);
		}
			Distance operator += (Distance x){
			float p = inches + x.inches;
			int a = (int)p/12;
			feet = feet + x.feet + a;
			inches = p - a*12;
			return Distance(feet,inches);
		}
		Distance operator -= (Distance x){
			if(feet*12 + inches < (x.feet)*12 + x.inches){
				cout<< " distances can not be negative";
				feet =0;
				inches =0;
				return Distance(0,0);
			}
			float p = inches - x.inches;
			int feets = feet - x.feet;
			if(p<0){
				feets -=1;
				p += 12;
			}
			feet = feets;
			inches = p;
			return Distance(feets,p);
		}
				bool operator == (Distance x){
					if(feet == x.feet && abs(inches-x.inches)<=.01){
						return true;
					}else{
						return false;
					}
		}
		
	void display(){
		cout<<feet<<" feets , "<<inches<<endl;
	}
//  friend ostream operator <<(ostream out,Distance d);
//	 friend istream operator >>(istream in , Distance d);
  		   friend ostream & operator << (ostream &out, const Distance &c); 
           friend istream & operator >> (istream &in,  Distance &c); 
};

//ostream operator << (ostream out,Distance d){
//     	cout<<d.feet<<" feets , "<<d.inches<<endl;
//	 }
	 
//
//istream operator >> (istream in , Distance d){
//	int a;
//	float b;
//	cout<<"enter feets: ";
//	cin>>a;
//	cout<<"enter inches: ";
//	cin>>b;
//    d.feet = a;
//    d.inches = b;
//}


ostream & operator << (ostream &out, const Distance &c) 
{ 
    out << c.feet<<" feet"; 
    out << " , " << c.inches << endl; 
    return out; 
} 
  
istream & operator >> (istream &in, Distance &c) 
{ 
    cout << "Enter feet "; 
    in >> c.feet; 
    cout << "Enter Inches "; 
    in >> c.inches;
    return in; 
} 















