#include<stdio.h>
int main(){
//Bir �nceki konuyla ilgili bir �rnek:
	int a=4;
	int b=6;
	int c=8;
	printf("a:%d\nb:%d\nc:%d\n",--a,++b,c++);
	printf("a:%d\nb:%d\nc:%d\n",a,b,c);
/*T�R D�N���MLER�:
�ki �e�idi vard�r manuel ve otomatik d�n���mler olmak �zere.
Otomatik d�n���mler kendili�inden yap�l�r �rne�in 5.4/3 i�leminde sistem kendili�inden 3'� de floata 3.0 a �evirip i�lemi yapar.
OTOMAT�K D�N���M ��ZELGES�:
char=short>int>float>double>long double
�rne�in int ve double beraberse hepsi double'a �evrilir.
Manuel d�n���mler ise kendimizin t�r�n� belirlemesidir.
�rene�in (int)5.4 diyerek 5 say�s�n� sonu� olarak alabiliriz.

STANDART G�R�� �IKI� FONKS�YONLARI:
Daha �nce ��kt� olu�turmak i�in printf kulland���m�z� g�rm��t�k.
�imdi de kullan�cadan input almak i�in scanf kullanaca��z. */

float x;
scanf("x= %f",&x);
//"&" i�areti x'e kullan�c�dan ald���m�z de�eri atad���m�z� g�sterir.

return 0;


}

