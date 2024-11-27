#include <stdio.h>

//ngomongin string
//di c itu gaada string!
//di c itu cuman ada char, dan string adalah array dari char
int main(){
	char str[10];

//cara yg gk praktis:
//	char c;
//	int i = 0;
//	do{
//		scanf("%c",&c);
//		str[i] = c;
//		i++;
//	}while(c!='\n');
	
	//cara input yg praktis
	//delimiternya itu space dan enter (sama kyk pas kalian scanf %d)
	//diakhir stringnya ditambah karakter:'\0' (null character) -> penanda akhir dari string
	scanf("%s",str);


//	for(int j = 0; j < i; j++) printf("%c",str[j]);
	
	//cara output
	printf("STR: %s\n",str);
	
	
	char str1[5]={'H', 'e', 'l', 'l', 'o'}; //ini initalnya "hello", sisa 5 karakter diblkg smuanya '\0'
	printf("STR1: %s\n",str1);
	
	char str2[5]; //ini initialnya garbage value
	str2[0]='H';
	str2[1]='e';
	str2[2]='l';
	str2[3]='l';
	str2[4]='o';
	printf("STR2: %s\n",str2); //dia bakal ngeprint semua karakter yang ada didlm array, sampai ktemu '\0'
	
	getchar();
	//gets bakal ngeread satu line full (delimiternya enter)
	char str3[10];
	gets(str3);
	printf("PUTS: ");
	puts(str3); //puts sama kyk printf
	
	char str4[] = "Hello World!"; //ini juga by default bakal nambahin '\0'
	puts(str4);
	printf("%d",sizeof(str4));
	
	char x = 'a'; //ini 1 byte -> char
	char xx[] = "a"; //ini 2 bytes -> string
}

//jeSSlYN AleCIa
//JEssLyn aLEciA
