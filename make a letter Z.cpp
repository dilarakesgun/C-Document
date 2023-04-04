#include<stdio.h>

int main(){
	int n,space,j,count;
	printf("enter n: ");
	scanf("%d",&n);
	count=n;
	for(;count>0;count--){
		printf("*");
	}
	printf("\n");
	for(space=n-2;space>0;space--){
		j=0;
		for(;space>j;j++) printf(" ");
		printf("*");
		printf("\n");
	}
	for(;n>0;n--){
		printf("*");
	}
	
	
		
		
	}
	
	
		
	
	

