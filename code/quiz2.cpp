#include<stdio.h>
#include<string.h>

void f(char a[]);
int main(){
	char a[100];
	scanf("%s",&a[0]);
	f(a);
	printf("%s",a);
}

void f(char a[]){
	int i = 0;
	while(a[i] != '\0') i++;
	for(int x = 0; x < i; x++){
		a[2*i-x-1] = a[x];
	}
	a[2*i] = '\0';
}
