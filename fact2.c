#include <stdio.h>

//learn about while loop

int main(){
    int i, n, x, sum=0;
    n = 1;

    while(n<=3){
        x=1;
        i=1;
        while(i<=n){
            x=x*i;
            i=i+1;
        }
        sum = sum + x;
        n = n + 1;
    }

    printf("%d",sum);
}