#include<stdio.h>

int main(){
/*  CONSTANTS
De�erin de�i�mesini engeller. E�er Type'�n �n�ne "const" koyarsak de�erin de�i�mesini engellemi� oluruz.

�rne�in:
const int haftan�ng�nleri=7;

�ki �e�it casting types vard�r:
�mplicit: "DANGEROUS"

�rne�in:
int a;
double b=3.0;
a=b;


Explicit:
a=(int)b

CHAR (Karakter Dizileri):

int hedef;
char kaynakChar='a';
hedef=(int)kaynakChar;

Sonu� bize "a" n�n say�sal de�eri olan "97" say�s�n� verir.

Tam tersi �ekilde yaparsak:

int source=65;
char target;
target=(char)source;

Burda da cevap bize "65" say�s�n�n harfsel de�eri olan "A" y� verir.
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
