#include<stdio.h>

//harf notu bulma switch case yöntemi ile
// divisiongrade="dg"

int main(){
	int grade,dg;
	char letter;
	printf("enter your grade:\n");
	scanf("%d",&grade);
	dg=grade/10;
	switch(dg){
		case 10:
	    case 9: letter='A';
	         break;
	    case 8:
	    case 7: letter='B';
	         break;
	    case 6:
	    case 5: letter='C';
	          break;
	    case 4:
	    case 3: letter='D';
	          break;
	    default: letter='F';
	   
	}
	printf("your grade is %c",letter);
}
