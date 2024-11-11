#include <stdio.h>

/*
    SEBELUM BELAJAR INI, BETTER PAHAMIN BINARY DIGIT DULU!!!
*/
int main(){

    //CHAR: 1 byte [-128,127], 2^8 - 1 = 255

    //contoh bener
//    char a = 'a'; //ASCII code
//    unsigned char b = 128;
//    char c = 65;
//    int aa = 97;
//    printf("CHAR DEMO: %d %d %d %c\n", a,aa,b,c);

//    contoh salah
//     char d = "a";
//     unsigned char e = 256;
//     printf("%c %d\n", c,d);




    //SHORT: 2 bytes [-32768, 32767] , 2^16 - 1 = 65,535 
//    short a1 = 32767;
//    short int b1 = -32768;
//    printf("SHORT DEMO: %d %d\n", a1, b1);
//
//    //contoh salah
//     short c1 = 321;
//     short d1 = 32768;
//     printf("%c\n", c1);
//
//
//
//
    //INT: 4 bytes [-2147483648, 2147483647 ], 2^32 - 1 = 4,294,967,295
//    int a2 = 97;
//    long int b2 = 1000000000;
//    printf("INT DEMO: %5d %c %i\n", a2, a2, b2);
//
//    
//
//    //LONG LONG INT: 8 bytes [-2^63, 2^63 - 1], 2^128 = 18,446,744,073,709,551,615
//    long long int a3= 9000000000000000000;
//    printf("LONG LONG DEMO: %lld\n", a3);
//
//
//
//
//    //FLOAT: 4 bytes (6 angka belakang koma)
//    float a4 = 17.8888888;
//    printf("FLOAT DEMO: %f %.6f %8.6f\n", a4, a4, a4);
//
//    //contoh salah:
//     float b4 = 17.88888855;
//     printf("wrong float: %.8f", b4);
//
//
//
//
//    //DOUBLE: 8 bytes (15 angka belakang koma)
//    double a5 = 17.88888888888888;
//    double b5 = 17.888888888888888;
//    printf("%.14lf %.15lf\n", a5, b5);
//
//
//
//
//    //OTHERS:
//     int n = 65;
//     printf("%c %d %o %x\n", n, n, n, n, n);
////
////    //unsigned
//     char m = -65;
//     printf("%u\n", m);
////
////    //treats int as double
//     int n1 = 65;
//     printf("%lf\n", n1);
////
////    //treats double as int
//     double n2 = 65.51;
//     printf("%d", n2);
    return 0;
}
