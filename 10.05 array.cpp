#include<stdio.h>
#define SIZE 10
int max(int array[],int size){
	int i;
	int max=array[0];
	if(array[1]>max) max=array[1];
	for(i=0;i<size;i++){
		if(array[i]>max) max=array[i];
	}
	return max;
}

int min(int array[],int last[]){
	int size=last-array; // a[sýze) dediðimizde sonuncu konumu adresi last'a gönderiyoruz. size= sonuncu adresten arrayin ilk adresini çýkardýðýmýzda 
	//arrayin eleman sayýsýný elde etmiþ oluruz. Bu da deðerlere göre 10 oluyor.
	int min=array[size-1];
	int i=size-2;
	for(;i>=0;i--){
		if(min>array[i]) min=array[i];
	}
    return min;
}



int main() {
    int a[SIZE] = {1, 2, -3333, -444, 5, 6, 7, 9, -99, 10};
    printf("%d\n",max(a,SIZE));
    printf("%d",min(a,&a[SIZE]));
    return 0;
}

