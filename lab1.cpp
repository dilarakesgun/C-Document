#include<stdio.h>

 
int func1(int x){
	return (((x*x*x -2*(x+1)*(x+1)+4*(x-1))%10)+1);
}

int func2(int z,int d){
	int calc= func1(d) / z;
	if(z==3){
		if (calc == 0){
			printf("-\n-\n-\n");
		}
		else if(calc == 1){
			printf("*\n");
			printf("+\n");
			printf("*\n");
		}
		else if (calc == 2) printf("**\n++\n**\n");
		else if(calc == 3) printf("***\n+++\n***\n");
	}
	else if (z==4){
		if(calc == 0){
			printf("-\n-\n-\n-\n");
		}
		else if (calc == 1) printf("*\n+\n*\n+\n");
		else if (calc == 2) printf("**\n++\n**\n++\n");
		else if (calc == 3) printf("***\n+++\n***\n+++\n");
	}
	
	else if(z==5){
		if(calc == 0)	printf("-\n-\n-\n-\n-\n");
		
		else if (calc == 1) printf("*\n+\n*\n+\n*");
		else if (calc == 2) printf("**\n++\n**\n++\n**\n");
		else if(calc == 3) printf("***\n+++\n***\n+++\n***\n");
	}
	return calc;
}





int main(){
	int x;
	int a;
	int b;
	printf("x:");
	scanf("%d",&x);
	int result1=func1(x);
	printf("%d\n",result1);
	
	printf("a :\n");
	scanf("%d",&a);
	printf("b:\n");
	scanf("%d",&b);
	int result2=func2(a, b);
	printf("function1(b)/a is %d",result2);
	
	
	return 0;
}
