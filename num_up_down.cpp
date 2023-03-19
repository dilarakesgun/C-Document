#include<stdio.h>
void num_up_down(int a,int b,int c){
	int i;
	if (c>0){
		for(i=a;i<b;){
		printf("%d\n",i);
		i+=c;
	}
	
  }
    else{
    	for(i=a;i>b;){
    		printf("%d\n",i);
    		i+=c;
    		
		}
	}

	
}

int main(){
	int a,b,c;
	printf("beginning number:\n");
	scanf("%d",&a);
	printf("end number:\n");
	scanf("%d",&b);
	printf("number of increments:\n");
	scanf("%d",&c);
	num_up_down( a, b, c);
	
	
}
