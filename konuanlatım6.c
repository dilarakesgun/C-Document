#include<stdio.h>
#define PI 3.14

int main(){
//Bir tane �rnek yapal�m,silindirin hacmini bulal�m: �nce pi say�s�n� 3.14 olarak belirleyelim.

int yaricap;
int yukseklik;
float hacim;
printf("Silindirin yaricapini giriniz:");
scanf("%d",&yaricap);
printf("Silindirin yuksekligini giriniz:");
scanf("%d",&yukseklik);
hacim=yaricap*yaricap*yukseklik*PI;
printf("Silindirin hacmi %f 'dir.",hacim);

return 0 ;

}
