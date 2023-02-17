#include<stdio.h>
int main(){
/* 
sizeof(char)
sizeof(int) gibi yazarsak ne kadar bit yer kaplayabileceklerini görebiliriz.
1 byte
4 byte yer kaplarlar 

DÖRT ÝÞLEM:
x + y
x - y
x * y
x / y
x % y => x'in y ile bölümünden kalaný verir.
+x => x'i artý ile çarpar.
-x => x'i eksi ile çarpar.

"%.1f" => floatýn noktadan sonraki ilk hanesini göster. 
 */

int x=5;
int y=-7;

printf("%d \n",x+y);
printf("%d \n",12+9);
printf("%.3f \n",24.3+45.8);

/* ÝÞLEM ÖNCELÝÐÝ:
1.ÖNCELÝK:
+ , - , (+X,-X) kendi aralarýnda saðdan sola

2. ÝÞLEM ÖNCELÝÐÝ:
* , / , % kendi aralarýnda soldan saða

3. ÝÞLEM ÖNCELÝÐÝ:
+,- kendi aralarýnda soldan saða

NOT:Parantez içindeki iþlemler her zaman ilk yapýlýr. */

printf("%d \n",2+3%4);
 // önce 3 bölü 4 ten kalan 3'tür. 2+3 ten 5 cevabýný vericek.
 
printf("%d \n",1/4*5);
// önce 1 bölü 4 ten 0 gelicek. 0 çarpý 5ten cevap sýfýr olur.

/* ATAMALAR:
 variable=expression */
 
int a=8;
int b=5;
a=b; // ynin deðeri xe atanýyor. x=5 ve y=5

b=a+2; // ynin deðeri 5+2'den y=7 , x=5

a+=3; // x= 5+3 ten x=8

printf("%d\n%d\n",a,b);

/* ARTMA-AZALMA:

a=a+1 
ile
a+=1 ayný iþlemi görür.
bunun bir ilerisi sýkça kullanýlan:
eðer 1 sayý arttýrmak istiyorsak deðeri
 a++
 bu þekilde a sayýsýnýn arttýrýlmadan önceki deðerini kullanýyor ve bir sonraki satýrda 1 arttýrýyor.
 
 ++a 
 bu þekilde kullanýrsak a sayýsýnýn artmýþ deðerini kullanýr ve bir sonraki satýrda yine 1 arttýrarak devam eder.
 
 ayný þekilde sayýyý bir azaltmak için de 
 
 a-- ya da --a kullanabiliriz.
 
 yine ayný þekilde
 a%=5
 a*=a+2
 gibi kullanýmlar da vardýr.
 
 
 a=b=c=0;
 
 önce c'ye 0 atar , sonra b'ye ve en son da 'ya 0 atar.
 yani
 a=0;
 b=0;
 c=0;
 ile ayný olur. */
 
 int j=8;
 int k=3;
 int m=9;
 j=k;
 k=j+m-4;
 printf("%d\n%d\n%d",j,k,m);
 
 return 0 ;
 
 
 
 






}
