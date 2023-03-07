#include<stdio.h>

int main(void){
	char letter;
	int aim;
	int lowl;
	int saim;
	int big;
	printf("please enter a letter\n");
	scanf("%c",&letter);
	if('A'<=letter && letter<='Z'){
		printf("it is a capital letter\n");
		aim=letter-'A';
		lowl='a'+aim;
		printf("your letter is %c in lowercase\n",lowl);
		
		
	}
	else{
		if('a'<=letter && letter<='z'){
			printf("your letter is a normal letter\n");
			saim=letter-'a';
			big=saim+'A';
			printf("your letter is %c in capital case\n",big);
		
		}
		else{
			if('0'<=letter && letter<='9'){
				printf("it is an digit");
			}
			else{
				printf("Nor a letter nor a digit\n ");
			}
		}
	}
}
