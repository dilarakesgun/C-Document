#include<stdio.h>
void firstline(int n){
	for(;n>0;n--){
		printf("*");
	}
}
void medium(int space){
	int i=0;
	for(;space>i;i++){
		printf(" ");
	}
	
}



int main(){
	int n,space;
	printf("enter n:");
	scanf("%d",&n);
	space=n-2;
	firstline(n);
	printf("\n");
	for(;space>0;space--){
		medium(space);
		printf("*");
		printf("\n");
		
	}
	firstline(n);
	
}
