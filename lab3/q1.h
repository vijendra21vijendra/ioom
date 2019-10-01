//#include<bits/stdc++.h>
//using namespace std;
//
//class Complex{
//	int re;
//	int img;
//	public:
//		Complex(int a,int b){
//			re = a;
//			img = b;
//		}
//		Complex(){
//			re = 0;
//			img =0;
//		}
//		// now i have to write one evaluate function which take input as a string and then do
//		//operator overloading of  << , >> , + , - , * , /
//		void setComplex(int a, int b){
//			re = a;
//			img = b;
//		}
//		void display(){
//			cout<<"("<<re<<" , "<<img<<"i)"<<endl;
//		}
//        Complex operator + (Complex b){
//        	return Complex(re+b.re, img+b.img);
//		}
//		Complex operator - (Complex b){
//			return Complex(re-b.re,img-b.img);
//		}
//		Complex operator * (Complex b){
//        	return Complex(re*b.re - img*b.img , re*b.img+img*b.re);
//		}
//		Complex operator / (Complex b){
//			int p = b.re * b.re + b.img * b.img;
//			return Complex((re*b.re + img*b.img)/p , (img*b.re - b.img*re)/p);
//		}
//		   friend ostream & operator << (ostream &out, const Complex &c); 
//           friend istream & operator >> (istream &in,  Complex &c); 
//		   friend Complex evaluate();
//		
//};
//
//
//
//
//
//ostream & operator << (ostream &out, const Complex &c) 
//{ 
//    out << c.re; 
//    out << "+i" << c.img << endl; 
//    return out; 
//} 
//  
//istream & operator >> (istream &in,  Complex &c) 
//{ 
//    cout << "Enter Real Part "; 
//    in >> c.re; 
//    cout << "Enter Imagenory Part "; 
//    in >> c.img; 
//    return in; 
//} 
//
//
//class fstc{
//	public:
//	int r,c,num;
//};
//
//stack<Complex> sct;
//stack<fstc> sfstore;
//
//Complex evaluate(){
//	Complex xc,yc,zc;
//	int n=1;
//	while(n){
//		cout<<"1. for number \n 2. for + \n 3. for - \n 4. for * \n 5. for /\n";
//		cin>>n;
//		if(n==1){
//			cin>>xc;
//			sct.push(xc);
//		}else{
//			yc = sct.top();
//			sct.pop();
//			xc = sct.top();
//			sct.pop();
//			cout<<xc<<" "<<yc<<endl;
//			if(n==2){
//				zc = xc + yc;
//				cout<<zc<<endl;
//				sct.push(zc);
//			}else if(n==3){
//				zc = xc - yc;
//				cout<<zc<<endl;
//				sct.push(zc);
//			}else if(n==4){
//				zc = xc * yc;
//				cout<<zc<<endl;
//				sct.push(zc);
//			}else if(n==5){
//				zc = xc / yc;
//				cout<<zc<<endl;
//				sct.push(zc);
//			}else{
//				cout<<"an error occured\n";
//				break;
//			}
//		}
//		cout<<"to finish enter 0 else 1: ";
//		cin>>n;
//	}
//	
//	
//	xc = sct.top();
//	sct.pop();
//	cout<<xc<<endl;
//	cout<<sct.empty()<<endl;
//	return xc;
//}
//














// what i have used here is this

//
//#include<bits/stdc++.h>
//using namespace std;
//
//class Complex{
//	int re;
//	int img;
//	public:
//		Complex(int a,int b){
//			re = a;
//			img = b;
//		}
//		Complex(){
//			re = 0;
//			img =0;
//		}
//		// now i have to write one evaluate function which take input as a string and then do
//		//operator overloading of  << , >> , + , - , * , /
//		void setComplex(int a, int b){
//			re = a;
//			img = b;
//		}
//		void display(){
//			cout<<"("<<re<<" , "<<img<<"i)"<<endl;
//		}
//        Complex operator + (Complex b){
//        	return Complex(re+b.re, img+b.img);
//		}
//		Complex operator - (Complex b){
//			return Complex(re-b.re,img-b.img);
//		}
//		Complex operator * (Complex b){
//        	return Complex(re*b.re - img*b.img , re*b.img+img*b.re);
//		}
//		Complex operator / (Complex b){
//			int p = b.re * b.re + b.img * b.img;
//			return Complex((re*b.re + img*b.img)/p , (img*b.re - b.img*re)/p);
//		}
//		   friend ostream & operator << (ostream &out, const Complex &c); 
//           friend istream & operator >> (istream &in,  Complex &c); 
//		   friend Complex evaluate();
//		
//};
//
//
//
//
//
//ostream & operator << (ostream &out, const Complex &c) 
//{ 
//    out << c.re; 
//    out << "+(" << c.img <<")" <<endl; 
//    return out; 
//} 
//  
//istream & operator >> (istream &in,  Complex &c) 
//{ 
//    cout << "Enter Real Part "; 
//    in >> c.re; 
//    cout << "Enter Imagenory Part "; 
//    in >> c.img; 
//    return in; 
//} 
//
//
//class fstc{
//	public:
//	int r,c,num;
//};
//
//stack<Complex> sct;
//stack<fstc> sfstore;
//
//Complex evaluate(){
//	fstc tocheck;
//	int n=1;
//	while(n){
//		cout<<"1. for number  2. for +  3. for -  4. for *  5. for / : ";
//		cin>>n;
//		if(n==1){
//			cout<<"enter real part: ";
//			cin>>tocheck.r;
//			cout<<"enter img part: ";
//			cin>>tocheck.c;
//			tocheck.num = 1;
//			
//		}else{
//		    tocheck.num = n;
//		}
//		sfstore.push(tocheck);
//		cout<<"to finish enter 0 else 1: ";
//		cin>>n;
//	}
//	Complex c,d,xc;
//	while(!sfstore.empty()){
//		tocheck = sfstore.top();
//		if(tocheck.num==1){
//			c.setComplex(tocheck.r,tocheck.c);
//			sct.push(c);
//		}else{
//			 d = sct.top();
//			 sct.pop();
//			 c = sct.top();
//			 sct.pop();
//			if(tocheck.num==2){
//				xc = d+c;
//				cout<<xc<<endl;
//				sct.push(d+c);
//			}else if(tocheck.num==3){
//				xc = d-c;
//				cout<<xc<<endl;
//				sct.push(d-c);
//			}else if(tocheck.num==4){
//				xc = d*c;
//				cout<<xc<<endl;
//				sct.push(d*c);
//			}else if(tocheck.num==5){
//				xc = d/c;
//				cout<<xc<<endl;
//				sct.push(d/c);
//			}else{
//				cout<<"error";
//				break;
//			}
//		}
//		sfstore.pop();
//	}
//	
//	xc = sct.top();
//	sct.pop();
//	cout<<xc<<endl;
//	cout<<sct.empty()<<endl;
//	return xc;
//}



// third implemention





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
    out << "+(" << c.img <<")" <<endl; 
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


//class fstc{
//	public:
//	int r,c,num;
//};

stack<Complex> sct;
//stack<fstc> sfstore;

//Complex evaluate(){
//	fstc tocheck;
//	int n=1;
//	while(n){
//		cout<<"1. for number  2. for +  3. for -  4. for *  5. for / : ";
//		cin>>n;
//		if(n==1){
//			cout<<"enter real part: ";
//			cin>>tocheck.r;
//			cout<<"enter img part: ";
//			cin>>tocheck.c;
//			tocheck.num = 1;
//			
//		}else{
//		    tocheck.num = n;
//		}
//		sfstore.push(tocheck);
//		cout<<"to finish enter 0 else 1: ";
//		cin>>n;
//	}
//	Complex c,d,xc;
//	while(!sfstore.empty()){
//		tocheck = sfstore.top();
//		if(tocheck.num==1){
//			c.setComplex(tocheck.r,tocheck.c);
//			sct.push(c);
//		}else{
//			 d = sct.top();
//			 sct.pop();
//			 c = sct.top();
//			 sct.pop();
//			if(tocheck.num==2){
//				xc = d+c;
//				cout<<xc<<endl;
//				sct.push(d+c);
//			}else if(tocheck.num==3){
//				xc = d-c;
//				cout<<xc<<endl;
//				sct.push(d-c);
//			}else if(tocheck.num==4){
//				xc = d*c;
//				cout<<xc<<endl;
//				sct.push(d*c);
//			}else if(tocheck.num==5){
//				xc = d/c;
//				cout<<xc<<endl;
//				sct.push(d/c);
//			}else{
//				cout<<"error";
//				break;
//			}
//		}
//		sfstore.pop();
//	}
//	
//	xc = sct.top();
//	sct.pop();
//	cout<<xc<<endl;
//	cout<<sct.empty()<<endl;
//	return xc;
//}


Complex eval(string s){
  // i want to evaluate this string 
  cout<<"i got "<<s<<endl;
  int i,l;
  l = s.length();
  int a,b;
  i = l-1;
  cout<<s[i]<<" is first char "<<endl;
  while(i>=0){
  	if(s[i]==')'){
  		cout<<"entered in the if block"<<endl;
  		i--;
  		cout<<s[i]<<" is char"<<endl;
  		int mul=1;
  		a=0;
  		while(s[i]!=' ' && s[i]!= '-'){
  			a += mul * (s[i]-'0');
  			i--;
  			mul = 10*mul;
  			cout<<"fuck1"<<endl;
		  }
		  if(s[i]=='-'){
		  	a = -a;
		  	i--;
		  }
		  cout<<a<<endl;
		  i--;
		  // img part = a;
		  
		  
		    b =0;
		    mul =1;
		    while(s[i]!='(' && s[i]!= '-'){
  			b += mul * (s[i]-'0');
  			i--;
  			mul = 10*mul;
  			cout<<"fuck1"<<endl;
		  }
		  if(s[i]=='-'){
		  	b = -b;
		  	i--;
		  }
		  cout<<b<<endl;
		  i--;
		  // b is real part
		  Complex ab(b,a);
		  sct.push(ab);
		  cout<<"num is "<<b<<" + "<<a<<" i \n";
	  }else{
	  	cout<<"in else loop"<<endl;
	  	Complex ax,ay,az;
	  	if (s[i]=='+'){
	  		ax = sct.top();
	  		sct.pop();
	  		ay = sct.top();
	  		sct.pop();
	  		az = ax + ay;
	  		sct.push(az);
	  		cout<<"pop two and then add"<<endl;
		  }else if(s[i]=='-'){
		  	cout<<"pop two and minus"<<endl;
		  		  		ax = sct.top();
	  		sct.pop();
	  		ay = sct.top();
	  		sct.pop();
	  		az = ax - ay;
	  		sct.push(az);
		  }
		  	  	else if (s[i]=='*'){
	  		cout<<"pop two and then mul"<<endl;
	  		ax = sct.top();
	  		sct.pop();
	  		ay = sct.top();
	  		sct.pop();
	  		az = ax * ay;
	  		sct.push(az);
		  }else if(s[i]=='/'){
		  	cout<<"pop two and divide"<<endl;
		  	ax = sct.top();
	  		sct.pop();
	  		ay = sct.top();
	  		sct.pop();
	  		az = ax / ay;
	  		sct.push(az);
		  }
		  i--;
	  }
  }
  Complex retVal = sct.top();
  sct.pop();
  return retVal;
}





























