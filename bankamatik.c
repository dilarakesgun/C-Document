#include<stdio.h>
int main(){
	int banking;
	int bakiye=3000;
	int amount;
	printf("Asagidaki islem seceneklerinden birini seciniz\n 1:para cekme\n 2:para yatirma\n 3:havale etme\n 4:mevcut bakiyeyi gorme\n");
	scanf("%d",&banking);
	switch(banking){
		case 1:
			printf("cekmek istediginiz tutarý giriniz:");
			scanf("%d",&amount);
			if (bakiye>=amount){
				bakiye-=amount;
				printf("isleminiz basariyla gerceklesti\n guncel bakiyeniz: %d 'dir.",bakiye);
				break;
			}
			else{
				printf("bakiyeniz yetmemektedir.");
				break;
			}
		case 2:
			printf("yatirmak istediginiz tutari giriniz:");
			scanf("%d",&amount);
			bakiye+=amount;
			printf("isleminiz basariyla gerceklesti\n guncel bakiyeniz: %d 'dir.",bakiye);
			break;
			
		case 3:
			printf("havale etmek istediginiz tutarý giriniz:");
			scanf("%d",&amount);
			bakiye-=amount;
			printf("isleminiz basariyla gerceklesti\n guncel bakiyeniz: %d 'dir.",bakiye);
			break;
		case 4:
			printf("mevcut bakiyeniz: %d",bakiye);
		
			
			
		
		
		
			
			
	}
	return 0;
	
}
