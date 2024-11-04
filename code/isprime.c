#include <stdio.h>
#include <math.h>

//learn c function, for loop, boolean, break
//coba debug guys!

int isprime(int x){
	int i;
	for(i=2;i<=x-1;i++){
		if(x%i==0) break;
	}	
	if(i==x) return 1; //return (i == x)
	else return 0;
}

int isprime_math(int x){
	int i;
	for(i=2;i<=sqrt(x);i++){
		if(!(x%i)) break;
	}
	if(i>sqrt(x)) return 1;
	else return 0;
}

int isnotprime(int x){ //works for x < 2
	int i, flag=0;
	for(i=2;i<=x-1;i++){
		if(x%i==0) {
			flag=1;
			break;	
		}
	}	
	return flag;
}

int main(){
	//print all prime numbers between 1 - 500
	int x;
	for(x=1;x<=500;x++){ 
		if(isprime(x)){
			continue;
		}
		printf("%d ",x);
	}
	return 0;
}

/*

Q1: apa bedanya declare x di line 5 sama di dalam for loop?


Q2: apa bedanya '!' dan '~'?
~ untuk flip bit
! untuk ubah zero jadi 1, nonzero jadi 1

Q3: kenapa ada sqrt?


Q4: kenapa tiba2 ada flag?



*/
