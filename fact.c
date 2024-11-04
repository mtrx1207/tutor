#include <stdio.h>

// learn about function!!

/*

functions terdiri dari 3 elemen:
1. inputnya apa?
2. dia ngapain?
3. outputnya apa?
why function? for reusability

*/

int f(int i){ //ini fungsi buat ngitung faktorial
    int x=1;
    for(int j=1; j<=i; j=j+1){
        x = x * j;
    }
    return x;
}

int main(){
    int i, x, sum=0;
    for(i=1; i<=3; i=i+1){
        x = f(i); //kita panggil fungsinya
        sum = sum + x;
    }
    printf("sum=%d\n",sum);
}

//Notes: i yang ada di main beda dengan i yang ada di f ya!