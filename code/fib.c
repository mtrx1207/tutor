#include<stdio.h>

// 1/1 + 2/1 + 3/2 + 5/3 + 8/5 + 13/8

double fib(double n){
	double a = 1, b = 1, temp;
	for(int i = 3; i <=n; i++){
		temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main(){
	int m,n,first=1;
	double sum = 0.0;
	scanf("%d %d",&m,&n);
	for(int i = m; i <= n; i++){
		if(first){
			printf("%.1lf/%.1lf",fib(i+1),fib(i));
			first=0;
		}
		else printf(" + %.1lf/%.1lf",fib(i+1),fib(i));
		sum += fib(i+1)/fib(i);
	}
	printf(" = %lf",sum);
}
