#include<stdio.h>

int main(void){
	double num;
	double plain;
	int rounding;
	
	
	printf("Enter a float number:");
	scanf("%lf",&num);
	plain=num-(int)num;
	rounding=(int)num;
	if (plain>0.5){
		rounding+=1;
		printf("%d",rounding);
		
		
	}
	else if (plain==0.5){
		printf("%.2lf",num);
		
	}
	else{
		
		printf("%d",rounding);
	}
	
	return 0;
}
