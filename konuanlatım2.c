#include<stdio.h>

int main(){
/*  CONSTANTS
Deðerin deðiþmesini engeller. Eðer Type'ýn önüne "const" koyarsak deðerin deðiþmesini engellemiþ oluruz.

Örneðin:
const int haftanýngünleri=7;

Ýki çeþit casting types vardýr:
Ýmplicit: "DANGEROUS"

Örneðin:
int a;
double b=3.0;
a=b;


Explicit:
a=(int)b

CHAR (Karakter Dizileri):

int hedef;
char kaynakChar='a';
hedef=(int)kaynakChar;

Sonuç bize "a" nýn sayýsal deðeri olan "97" sayýsýný verir.

Tam tersi þekilde yaparsak:

int source=65;
char target;
target=(char)source;

Burda da cevap bize "65" sayýsýnýn harfsel deðeri olan "A" yý verir.
*/

int hedef;
char kaynakChar='a';
hedef=(int)kaynakChar;
printf("%d \n",hedef);

int source=65;
char target;
target=(char)source;
printf("%c",target);


}
