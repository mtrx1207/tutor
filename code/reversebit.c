#include <stdio.h>

//learn about do while, code interpretation
//fungsi codenya: ubah desimal jadi binary, tp binarynya terbalik

int main(){
	int x;
	scanf("%d", &x);
	do{
		printf("%d",x%2);
		x/=2;
	}while(x!=0);
}
