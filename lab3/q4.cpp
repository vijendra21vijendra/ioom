#include<bits/stdc++.h>
#include "q4.h"
using namespace std;

int main(){
	Counter x("I am here");
	Counter y;
	x.showValue();
	y.showValue();
	++x;
	--y;
	x--;
	y++;
	x.showValue();
	y.showValue();
	
	
	return 0;
}
