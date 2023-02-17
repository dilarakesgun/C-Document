#include<stdio.h>
int main(){
/* 
sizeof(char)
sizeof(int) gibi yazarsak ne kadar bit yer kaplayabileceklerini g�rebiliriz.
1 byte
4 byte yer kaplarlar 

D�RT ��LEM:
x + y
x - y
x * y
x / y
x % y => x'in y ile b�l�m�nden kalan� verir.
+x => x'i art� ile �arpar.
-x => x'i eksi ile �arpar.

"%.1f" => float�n noktadan sonraki ilk hanesini g�ster. 
 */

int x=5;
int y=-7;

printf("%d \n",x+y);
printf("%d \n",12+9);
printf("%.3f \n",24.3+45.8);

/* ��LEM �NCEL���:
1.�NCEL�K:
+ , - , (+X,-X) kendi aralar�nda sa�dan sola

2. ��LEM �NCEL���:
* , / , % kendi aralar�nda soldan sa�a

3. ��LEM �NCEL���:
+,- kendi aralar�nda soldan sa�a

NOT:Parantez i�indeki i�lemler her zaman ilk yap�l�r. */

printf("%d \n",2+3%4);
 // �nce 3 b�l� 4 ten kalan 3't�r. 2+3 ten 5 cevab�n� vericek.
 
printf("%d \n",1/4*5);
// �nce 1 b�l� 4 ten 0 gelicek. 0 �arp� 5ten cevap s�f�r olur.

/* ATAMALAR:
 variable=expression */
 
int a=8;
int b=5;
a=b; // ynin de�eri xe atan�yor. x=5 ve y=5

b=a+2; // ynin de�eri 5+2'den y=7 , x=5

a+=3; // x= 5+3 ten x=8

printf("%d\n%d\n",a,b);

/* ARTMA-AZALMA:

a=a+1 
ile
a+=1 ayn� i�lemi g�r�r.
bunun bir ilerisi s�k�a kullan�lan:
e�er 1 say� artt�rmak istiyorsak de�eri
 a++
 bu �ekilde a say�s�n�n artt�r�lmadan �nceki de�erini kullan�yor ve bir sonraki sat�rda 1 artt�r�yor.
 
 ++a 
 bu �ekilde kullan�rsak a say�s�n�n artm�� de�erini kullan�r ve bir sonraki sat�rda yine 1 artt�rarak devam eder.
 
 ayn� �ekilde say�y� bir azaltmak i�in de 
 
 a-- ya da --a kullanabiliriz.
 
 yine ayn� �ekilde
 a%=5
 a*=a+2
 gibi kullan�mlar da vard�r.
 
 
 a=b=c=0;
 
 �nce c'ye 0 atar , sonra b'ye ve en son da 'ya 0 atar.
 yani
 a=0;
 b=0;
 c=0;
 ile ayn� olur. */
 
 int j=8;
 int k=3;
 int m=9;
 j=k;
 k=j+m-4;
 printf("%d\n%d\n%d",j,k,m);
 
 return 0 ;
 
 
 
 






}
