#include<stdio.h>
/*
    QUIZ
    dikasih beberapa angka, dipisah sama spasi (-1 artinya input selesai)
    dari angka yg udh diinput, hitung jumlah angka yang habis dibagi 3 atau 5
    print jumlahnya ke console
*/

int main(){
	int a,sum=0;
	do{
		scanf("%d",&a);
		if(a%3==0 || a%5==0) sum++;
	}while(a != -1);
	
	printf("%d",sum);
	int a;
	do{
		scanf("%d",&a);
		printf("%d\n",a);
	}while(a!=-1);
}
