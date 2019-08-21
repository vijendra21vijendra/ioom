#include<stdio.h>
#include<stdlib.h>
#include "datatype.h" // to include structure from other file

int main(){
	int n;
	printf("enter the size of circle: ");
	scanf("%d",&n);
	data *arr = (data*)malloc(n*sizeof(data));
	int i,j;
	printf("enter petrol and distances: \n");
	for(i=0;i<n;i++){
		scanf("%d %d",&arr[i].petrol,&arr[i].distance);
     }
     
	i=0;
	while(i<n){
		int total = 0;
		if(arr[i].petrol>=arr[i].distance){
			total = arr[i].petrol - arr[i].distance;
			j = (i+1)%n;
	     	while(j != i){
			  if(total + arr[j].petrol - arr[j].distance>=0){
				total = total + arr[j].petrol - arr[j].distance;
				j = (j+1)%n;
			}else{
				i = j+1;
				break;
			}
		  }
		  if(i==j){
		  	printf("%d petrol remaining and completed and starting petrol \npump was %d",total,i+1);
		  	break;
		  }
		}else{
			i++;
		}
	}
	if(i==n){
		printf("Not a single point exist from where whole round can be completed\n");
	}
	free(arr);
	return 0;
}
