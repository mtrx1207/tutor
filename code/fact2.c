#include <stdio.h>

//learn about while loop

int main(){
    int i, n, N, x, sum=0;
    n = 1;
	scanf("%d",&N);
    while(n<=N){
        x=1;
        i=1;
        while(i<=n){ //ini part yg ngitung faktorial
            x=x*i;
            i=i+1;
        }
        sum = sum + x;
        n = n + 1;
    }

    printf("%d",sum);
}
//ngitung 1! + 2! + 3! + ..... + N!
