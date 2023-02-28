#include<stdio.h>
int main(){
//Bir önceki konuyla ilgili bir örnek:
	int a=4;
	int b=6;
	int c=8;
	printf("a:%d\nb:%d\nc:%d\n",--a,++b,c++);
	printf("a:%d\nb:%d\nc:%d\n",a,b,c);
/*TÜR DÖNÜÞÜMLERÝ:
Ýki çeþidi vardýr manuel ve otomatik dönüþümler olmak üzere.
Otomatik dönüþümler kendiliðinden yapýlýr örneðin 5.4/3 iþleminde sistem kendiliðinden 3'ü de floata 3.0 a çevirip iþlemi yapar.
OTOMATÝK DÖNÜÞÜM ÇÝZELGESÝ:
char=short>int>float>double>long double
örneðin int ve double beraberse hepsi double'a çevrilir.
Manuel dönüþümler ise kendimizin türünü belirlemesidir.
öreneðin (int)5.4 diyerek 5 sayýsýný sonuç olarak alabiliriz.

STANDART GÝRÝÞ ÇIKIÞ FONKSÝYONLARI:
Daha önce çýktý oluþturmak için printf kullandýðýmýzý görmüþtük.
Þimdi de kullanýcadan input almak için scanf kullanacaðýz. */

float x;
scanf("x= %f",&x);
//"&" iþareti x'e kullanýcýdan aldýðýmýz deðeri atadýðýmýzý gösterir.

return 0;


}

