#include<stdio.h>
/* 
5x5 matrix
1 2 3 4 5
6 7 8 9 10
11 12 ..
16....
21..25  */
int main(){
	int array[5][5];
	int i,j,sum=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&array[i][j]);
		}
		
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			sum+=array[i][j];
		
		}
		printf("%d\n",sum);
	   	sum=0;
	}
	
 return 0;	
}
