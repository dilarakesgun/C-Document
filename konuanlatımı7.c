#include<stdio.h>
int main(){
//KO�ULLU �FADELERE G�R�� (�F-EL�F-ELSE)
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

/* MANTIKSAL OPERAT�RLER:
BOOL VER� T�P�:
Mant�ksal ifadeler e�er do�ru ise => True
e�er yanl�� ise => False
Ayn� zamanda b�t�n 0 olmayan say�lar True dep�erini ta��r. Sadece 0 rakam� False de�eri ta��r.

��ARET OPERAT�RLER�:
< k���kt�r a<b
< b�y�kt�r a>b
<= k���k veya e�ittir a<=b
>= b�y�k veya e�ittir a>=b
== e�ittir a==b
!= e�it de�ildir a!=b

MANTIKSAL BA�LA�LAR:

&& AND BA�LACI 
Mutlaka hepsi True olmal� sonucun True olmas� i�in.Bir tane bile false sonucu false yapar.

|| OR BA�LACI
En az bir tane ifadenin True olmas� sonucun true olmas� i�in yeterlidir.

! NOT BA�LACI
bu ba�la� true'yu false; false'u true yapar.

�ARTLI C�MLELER

b=a>c ? a:c

"?" burda "ise" anlam�na gelir.
e�er a, c'den b�y�k ise b a e�ittir b'ye.
de�il ise b e�ittir c'ye.
