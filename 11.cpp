#include<iostream>
#include<stdlib.h>
#include "class.hpp"
using namespace std;

int main(){
    int n;
	cout<<"enter the size : ";
	cin>>n;
	PetrolPump *arr = new PetrolPump[n];
	int i,j;
	cout<<"enter petrol and distances : ";
	int temp1,temp2;
	for(i=0;i<n;i++){
		cin>>temp1>>temp2;
		arr[i].setData(temp1,temp2);
     }
	i=0;
	while(i<n){
		int total = 0;
		if(arr[i].getPetrol()>=arr[i].getDistance()){
			total = arr[i].getPetrol() - arr[i].getDistance();
			j = (i+1)%n;
	     	while(j != i){
			  if(total + arr[j].getPetrol() - arr[j].getDistance()>=0){
				total = total + arr[j].getPetrol() - arr[j].getDistance();
				j = (j+1)%n;
			}else{
				i = j+1;
				break;
			}
		  }
		  if(i==j){
			cout<<total<<" petrol remaining and starting petrolPump was "<<i+1<<endl;
		  	break;
		  }
		}else{
			i++;
		}
	}
	if(i==n){
		cout<<"Not a single point exist from where whole round can be completed\n";
	}
	return 0;
}
