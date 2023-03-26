#include<stdio.h>

void nums(int a,int b,int diff){
	int i=a;
	if(diff>0){
	
		while(i<=b){
			printf("%d ",i);
			i+=diff;
		}
}
	else{
		while(i>=b){
			printf("%d ",i);
			i+=diff;
		}
	}
		
	
}






int main(){
	int a;
	int b;
	int diff;
	printf("enter your first number:\n");
	scanf("%d",&a);
	printf("enter your second number:\n");
	scanf("%d",&b);
	printf("enter your number of decreasing or increasing: ");
	scanf("%d",&diff);
	nums(a,b,diff);
	
	
}
