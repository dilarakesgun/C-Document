#include<stdio.h>
#include<math.h>

double toplama(double sum,double num3);
double cikarma(double sum,double num3);
double carpma(double sum,double num3);
double bolme(double sum,double num3);

int main(){
	double num1;
	double num2;
	int operate;
	double sum=0;
	double num3;
	printf("islemini yapmak istediginiz iki sayiyi giriniz:\n");
	scanf("%lf\n%lf",&num1,&num2);
	printf("toplama:1,cikarma:2,carpma:3,bolme:4,cikis:5\n");
	scanf("%d",&operate);
	if(operate==1){
		sum+=num1+num2;
		
	}
	else if(operate==2){
		sum=num1-num2;
	}
	else if(operate==3){
		sum=num1*num2;
	}
	else{
		sum=num1/num2;
	}
	printf("%lf\n",sum);
	
	for(operate=0;operate<=5;){
		printf("yeni bir islem seciniz ya da cikis icin 5'e tiklayiniz:");
		scanf("%d",&operate);
		if(operate==1){
			printf("isleme devam etmek istediginiz sayiyi giriniz:");
			scanf("%lf",&num3);
			sum=toplama(sum,num3);
		}
		else if(operate==2){
			printf("isleme devam etmek istediginiz sayiyi giriniz:");
			scanf("%lf",&num3);
			sum=cikarma(sum,num3);
		}
		else if(operate==3){
			printf("isleme devam etmek istediginiz sayiyi giriniz:");
			scanf("%lf",&num3);
			sum=carpma(sum,num3);
		}
		else if(operate==4){
			printf("isleme devam etmek istediginiz sayiyi giriniz:");
			scanf("%lf",&num3);
			sum=bolme(sum,num3);
		}
		else{
			break;
		}
	
	}
	printf("sonuc:%lf",sum);
	
	
}

double toplama(double sum,double num3){
	return sum+num3;
}
double cikarma(double sum,double num3){
	return sum-num3;
}
double carpma(double sum,double num3){
	return sum*num3;
}
double bolme(double sum,double num3){
	return sum/num3;
}

