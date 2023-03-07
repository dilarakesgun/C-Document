#include<stdio.h>
#include<math.h>

double circlearea(double radius);
double circcircum(double radius);
double volsphere(double radius);

int main(){
	double radius;
	double area;
	double circumference;
	double volume;
	int num;
	
	printf("enter nums for circle of 1:area,2:circumference or 3:for volume of sphere\n");
	scanf("%d",&num);
	if(num==1){
		printf("Enter a number for radius of circle:");
	    scanf("%lf",&radius);
	    area=circlearea(radius) ;
	    printf("the area of circle is %lf cm",area);
	    
	}
	else if(num==2){
		printf("Enter a number for radius of circle:");
		scanf("%lf",&radius);
		circumference=circcircum(radius);
		printf("the circumference of circle is %lf",circumference);
		
		
	}
	else{
		printf("Enter a number for radius of circle:");
	    scanf("%lf",&radius);
	    volume=volsphere(radius);
	    printf("the volume of the sphere is %lf ",volume);
	    	
	}
	
}

double circlearea(double radius){
	return M_PI *radius*radius;
	
}
double circcircum(double radius){
	return M_PI*2*radius;
}
double volsphere(double radius){
	return 4/3*M_PI*radius*radius*radius;
}
