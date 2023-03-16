#include<stdio.h>
#include<math.h>
double max2(double a,double b){
	return a>b ? a:b ;
}
double max3(double a,double b,double c,double d){
	return max2(max2(a,b),c);
}
double max4(double a,double b,double c,double d){
	return max2(max2(max2(a,b),c),d);
}
double min2(double a,double b){
	return a<b ? a:b;
}
double min3(double a,double b,double c){
	return min2(min2(a,b),c);
}
double min4(double a,double b,double c,double d){
	return(min2(min2(min2(a,b),c),d));
}

int main(){
	double a,b,c,d;
	printf("enter the numbers:\n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	printf("max value is: %lf\n",max4(a,b,c,d));
	printf("min value is:%lf\n",min4(a,b,c,d));
}
