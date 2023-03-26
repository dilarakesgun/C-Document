#include<stdio.h>

void integers(int i){
	while (i<10) printf("%d",i++);
}
void lowercase(char x){
	while (x<='z') printf("%c",x++);
}
void uppercase(char y){
	while(y<='Z') printf("%c",y++);
}





int main(){
	int i=0;
	char x='a';
	char y='A';
	integers(i);
	printf("\n\n");
	lowercase(x);
	printf("\n\n");
	uppercase(y);
}
