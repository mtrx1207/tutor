#include <stdio.h>

//learn about basic array

int main(){
//ARRAY DECLARATION AND INITIALIZATION

    //1. specify the size and list all members
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i < 10; i++) printf("%d ",a[i]);
    printf("\n");

    //2. just list all members
    int b[] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(b)/sizeof(int); i++) printf("%d ", b[i]);
    printf("\n");

    //3. declare empty array
    int c[3];
    for(int i = 0; i < 3; i++) printf("%d ", c[i]); //will print garbage value
    printf("\n");

//ACCESSING AND CHANGING DATA
    //penting: angka pertama itu indexnya 0, bukan 1!
    int d[5] = {1,2,3,4,5};
    printf("%d %d\n",d[0],d[1]);

    //gimana kalau kita coba akses index yang diluar size arraynya?
    printf("%d %d\n",d[5], d[-1]); //bakal keluar angka random (garbage value juga)
    //notes: walaupun kliatan fine2 aja, di kondisi tertentu bisa bikin error juga: segmentation fault
}
