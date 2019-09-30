#include<bits/stdc++.h>
using namespace std;

class Complex{
	int re;
	int img;
	public:
		Complex(int a,int b){
			re = a;
			img = b;
		}
		Complex(){
			re = 0;
			img =0;
		}
		// now i have to write one evaluate function which take input as a string and then do
		//operator overloading of  << , >> , + , - , * , /
		void setComplex(int a, int b){
			re = a;
			img = b;
		}
		void display(){
			cout<<"("<<re<<" , "<<img<<"i)"<<endl;
		}
        Complex operator + (Complex b){
        	return Complex(re+b.re, img+b.img);
		}
		Complex operator - (Complex b){
			return Complex(re-b.re,img-b.img);
		}
		Complex operator * (Complex b){
        	return Complex(re*b.re - img*b.img , re*b.img+img*b.re);
		}
		Complex operator / (Complex b){
			int p = b.re * b.re + b.img * b.img;
			return Complex((re*b.re + img*b.img)/p , (img*b.re - b.img*re)/p);
		}
		   friend ostream & operator << (ostream &out, const Complex &c); 
           friend istream & operator >> (istream &in,  Complex &c); 
		   friend Complex evaluate();
		
};





ostream & operator << (ostream &out, const Complex &c) 
{ 
    out << c.re; 
    out << "+i" << c.img << endl; 
    return out; 
} 
  
istream & operator >> (istream &in,  Complex &c) 
{ 
    cout << "Enter Real Part "; 
    in >> c.re; 
    cout << "Enter Imagenory Part "; 
    in >> c.img; 
    return in; 
} 


stack<Complex> sct;

Complex evaluate(){
	Complex xc,yc,zc;
	int n=1;
	while(n){
		cout<<"1. for number \n 2. for + \n 3. for - \n 4. for * \n 5. for /\n";
		cin>>n;
		if(n==1){
			cin>>xc;
			sct.push(xc);
		}else{
			yc = sct.top();
			sct.pop();
			xc = sct.top();
			sct.pop();
			cout<<xc<<" "<<yc<<endl;
			if(n==2){
				zc = xc + yc;
				cout<<zc<<endl;
				sct.push(zc);
			}else if(n==3){
				zc = xc - yc;
				cout<<zc<<endl;
				sct.push(zc);
			}else if(n==4){
				zc = xc * yc;
				cout<<zc<<endl;
				sct.push(zc);
			}else if(n==5){
				zc = xc / yc;
				cout<<zc<<endl;
				sct.push(zc);
			}else{
				cout<<"an error occured\n";
				break;
			}
		}
		cout<<"to finish enter 0 else 1: ";
		cin>>n;
	}
	xc = sct.top();
	sct.pop();
	cout<<xc<<endl;
	cout<<sct.empty()<<endl;
	return xc;
}








