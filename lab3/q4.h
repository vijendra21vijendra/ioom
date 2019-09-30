#include<bits/stdc++.h>
using namespace std;

class Count{
	protected:
	string c;
	public:
		Count(){
			c = "vijendra";
		}
		Count(string x){
			c = x;
		}
		string retmethod(){
			return c;
		}
		void operator ++(){
			// here i can do anything with c and let i am adding one loaded to it.
			c = c + " loaded";
		}
		void operator ++(int dummy){
			c = c+" loaded";
		}
		// one method with operator overloading for ++
};

class Counter:public Count{
	public:
		Counter(string x):Count(x){
			cout<<"done"<<endl;
		}
		Counter():Count(){
			
		}
		void showValue(){
			cout<<retmethod()<<endl;
		}
		void operator --(){
			// here what we can do is let add backloaded
			 c = c + " backloaded";
		}
		void operator --(int dummy){
			c = c+" backloaded";
		}
		// one method with -- operator overloading
};
