#include<stdio.h>

int max_min(int arr[],int size,int result[]){
	int i;
	if(arr[0]>arr[1]){
		result[0]=arr[0];
		result[1]=arr[1];
	}
	else{
		result[0]=arr[1];
		result[1]=arr[0];
		
	}
	for(i=0;i<size;i++){
		if(arr[i]>result[0]){
			result[0]=arr[i];
		}
		if(arr[i]<result[1]){
			result[1]=arr[i];
		}
	}
	printf("the max: %d and the min: %d",result[0],result[1]);
		
	}
	



int main(){
	int myarr[5];
	int i;
	int a[2];
	for(i=0;i<5;i++){
		scanf("%d",&myarr[i]);
		
	}
	max_min(myarr,5,a);
	

}
