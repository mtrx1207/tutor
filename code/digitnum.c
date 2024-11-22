#include <stdio.h>
main(){
    int x;
    int array[10];
    scanf("%d", &x);
    for ( int i = 0; i<10; i++ ){
        array[i] = 0;
    }
    int temp;
    for ( int i = 0; i < x; i++ ){
        scanf("%d", &temp);
        while (temp != 0){
            int lastdigit;
            lastdigit = temp % 10;
            temp = temp / 10;
            array[lastdigit]++;
        }
    }
    int maxnum = array[0];
    for ( int i = 1; i < 10; i++ ){
        if ( array[i] > maxnum ){
            maxnum = array[i];
        }
    }
    printf("%d:", maxnum);
    for ( int i = 0; i<10; i++ ){
        if ( maxnum == array[i] ){
            printf(" %d", i);
        }
    }
}
