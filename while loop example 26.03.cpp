#include<stdio.h>

void integers(int i,int j){
	while (i<=j){
		printf("%d",i);
		i++;
	}
	 
}
void lowercase(char x,char s){
	while (int(x)<=int(s)){
		printf("%c",x);
		x++;
	}
}
void uppercase(char y,char g){
	while(int(y)<=int(g)){
		printf("%c",y);
		y++;
	}
}





int main(){
	int i=0;
	int j=0;
	char x='a';
	char s='z';
	char y='A';
	char g='Z';
	printf("enter a beginner integer:");
	scanf("%d",&i);
	printf("enter your last integer:");
	scanf("%d",&j);
	printf("enter your first lowercase letter:");
	scanf(" %c",&x);

	printf("enter your last lowercase letter:");
	scanf(" %c",&s);
	printf("enter your first uppercase letter:");
	scanf(" %c",&y);
	printf("enter your last uppercase letter:");
	scanf(" %c",&g);
	integers(i,j);
	printf("\n\n");
	lowercase(x,s);
	printf("\n\n");
	uppercase(y,g);
}
