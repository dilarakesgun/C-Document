#include<stdio.h>
int main(){
	printf("Merhaba Yazilimci \n");
	printf("C Programlamaya Hos geldiniz \n");
/*  
\n => newline yeni sat�ra iner.
\t => tab yani bo�luk b�rak�r.

COMMENT SENTENCES (YORUM SATIRLARI):

// => Tek sat�rl�k yorumlar i�in kullan�labilir.

/* => Uzun ve sonsuza kadar giden yorumlar i�in kullan�l�r.

DE���KENLER:

BASE DE���KENLER: char,int,float,double,short,long

DE���KEN ATAMA :

"VER�T�P�" " DE���KEN�N ADI" ;

temel kal�p yukar�daki gibidir.

int => %d

float ve double i�in => %f

char i�in => %c

char i�in birden fazla karakter i�in �zellikle => %s

A�a��da s�ras�yla �rnekler verilmi�tir. 
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
