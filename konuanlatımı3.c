#include<stdio.h>
int main(){
	printf("Merhaba Yazilimci \n");
	printf("C Programlamaya Hos geldiniz \n");
/*  
\n => newline yeni satýra iner.
\t => tab yani boþluk býrakýr.

COMMENT SENTENCES (YORUM SATIRLARI):

// => Tek satýrlýk yorumlar için kullanýlabilir.

/* => Uzun ve sonsuza kadar giden yorumlar için kullanýlýr.

DEÐÝÞKENLER:

BASE DEÐÝÞKENLER: char,int,float,double,short,long

DEÐÝÞKEN ATAMA :

"VERÝTÝPÝ" " DEÐÝÞKENÝN ADI" ;

temel kalýp yukarýdaki gibidir.

int => %d

float ve double için => %f

char için => %c

char için birden fazla karakter için özellikle => %s

Aþaðýda sýrasýyla örnekler verilmiþtir. 
*/

int x=6;
printf("%d \n",x);

float f=2.5;
double d=5.567;
printf("%f \t %f \n",f,d);

char k='g';
printf("%c \n",k);
printf("%d \n",k);

printf("%s \n","C Program");

int a=8;
char b='K';
char c=78;
float g=9.5;
double e=42.456;
printf("%d %d %c %f %f %s",a,b,c,g,e,"Degiskenler");
	
	return 0 ;
}
