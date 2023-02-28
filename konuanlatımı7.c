#include<stdio.h>
int main(){
//KOÞULLU ÝFADELERE GÝRÝÞ (ÝF-ELÝF-ELSE)
int puan;
printf("Sinav notunuzu giriniz:");
scanf("%d",&puan);
if (puan>=50){
	printf("Dersten gectiniz");
}
else{
	int eksik;
	eksik=50-puan;
	printf("Dersten gecebilmek icin min %d ihtiyaciniz var.",eksik);

}
return 0 ;
}

/* MANTIKSAL OPERATÖRLER:
BOOL VERÝ TÝPÝ:
Mantýksal ifadeler eðer doðru ise => True
eðer yanlýþ ise => False
Ayný zamanda bütün 0 olmayan sayýlar True depðerini taþýr. Sadece 0 rakamý False deðeri taþýr.

ÝÞARET OPERATÖRLERÝ:
< küçüktür a<b
< büyüktür a>b
<= küçük veya eþittir a<=b
>= büyük veya eþittir a>=b
== eþittir a==b
!= eþit deðildir a!=b

MANTIKSAL BAÐLAÇLAR:

&& AND BAÐLACI 
Mutlaka hepsi True olmalý sonucun True olmasý için.Bir tane bile false sonucu false yapar.

|| OR BAÐLACI
En az bir tane ifadenin True olmasý sonucun true olmasý için yeterlidir.

! NOT BAÐLACI
bu baðlaç true'yu false; false'u true yapar.

ÞARTLI CÜMLELER

b=a>c ? a:c

"?" burda "ise" anlamýna gelir.
eðer a, c'den büyük ise b a eþittir b'ye.
deðil ise b eþittir c'ye.
