#include<stdio.h>

//learn about scope, for loop

int main(){

	//DEMO 1: for loop without curly bracket -> dia cuman bakal run satu line code kalian!
	for(int i = 0; i < 10; i++)
		printf("Hello "); //ini diulang 10 kali
		printf("World\n"); //ini jalan setelah for loop yang atas selesai
	
	//ABOUT SCOPE
	/*
		scope itu daerah yang dibatasin sama 2 curly brackets {}
		suatu variabel yg dideclare di dalam sebuah scope, dia gbs diakses oleh kode yang ada diluar scope itu
		contoh dibawah ini: si i dideclare di dalam scope nya main()
		brarti dia bisa dipake sama kode yang ada di dalam main, tp gk yang diluar main
	*/

	int i; //VARIABLE DECLARATION
	i = 10; //VARIABLE INITIALIZATION


	{
		int i = 0; //i dan j yg dideclare di scope kecil ini gbs dipakai di luar scope kecil ini. i ini beda dengan i yang di atas!
		int j = 100; 
		printf("%d %d\n",i,j); //dia bakal prioritasin buat print variabel yang dideclare didlm scope ini. kalau gk, dia baru cari variabel yg ada di luar scope ini
	}

	printf("%d",i); //dia bakal print i = 10 (meskipun didlm scope kecil itu kt blg i = 0), bukti kalau mreka bedua adalah i yang berbeda
	//printf("%d",j); //ini bakal errror, krena didlm main scope gk ada variabel j


	//compare:
	for(int x=0;x<10;x++){ //x cuman berlaku untuk scope didlm for
		printf("%d",x);
	}
	
	int i; //i bisa dipake semuanya
	for(i=0;i<10;i++){
			printf("%d",i);
	}
}
