#include<stdio.h>

int main(){
	int grade;
	char letter;
	printf("Enter your grade:\n");
	scanf("%d",&grade);
	if(grade>=85) letter='A';
	else if(grade<85 && grade>=70) letter='B';
	else if(grade<70 && grade>=55) letter='C';
	else if(grade<55 && grade>=40) letter='D';
	else{
	letter='F';
	printf("you failed the exam\n");
}
	    
	printf("your grade is %c",letter);
	
	
}
