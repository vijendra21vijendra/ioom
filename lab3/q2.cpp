#include<bits/stdc++.h>
#include "q2.h"
using namespace std;

int main(){

    Distance a(7,5.5),b(3,9.2);
    Distance x,y;
    a.display();
    b.display();
//    x = a + b;
//    x.display();
//    cout<<"right upto here\n";
//    y = a-b;
//    y.display();
    a += b;
    a.display();
    a -= b;
    a.display();
   cout<<(x==y)<<endl;
   cout<<a<<" and "<<b;
   cin>>a;
   a = a+b;
   cout<<a<<endl;
	return 0;
}

