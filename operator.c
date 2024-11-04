#include <stdio.h>

int main(){
//1. BASIC ARITHMETIC OPERATOR

    //= itu assign operator
    int a = 5, b = 2;
    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b; //pembagian integer di c kalau gk habis dibulatkan kebawah
    int g = a%b;
    printf("add:%d sub:%d mul:%d div:%d rem:%d\n",c,d,e,f,g);

//2. UNARY OPERATOR
    int h = -a;
    printf("%d\n",h);

//3. MIX DOUBLE AND INT 
    int a1 = 13;
    int b1 = 7;
    int c1 = a1 / b1;
    double d1 = a1 / b1;
    printf("%d %lf\n",c1,d1);

//4. INT DIV INT, PUT ON DOUBLE 
    int a2 = 13, b2 = 6;
    double c2 = a2 / b2;
    printf("%lf\n", c2);

//5. DOUBLE DIV DOUBLE, PUT ON INT
    double a3 = 13.0, b3 = 6.0;
    int c3 = a3 / b3;
    printf("%d\n", c3);

//6. 3 vs 3.0
    double a4 = 10 / 3;
    double b4 = 10 / 3.0;
    printf("%lf %lf\n", a4, b4);

//7. BITWISE OPERATOR
    char a5 = 43;      //0010 1011
    char b5 = 102;     //0110 0110
    char c5 = a5 & b5; //0010 0010 (and operator)
    char d5 = a5 | b5; //0110 1111 (or operator)
    char e5 = a5 ^ b5; //0100 1101 (xor operator)
    char f5 = ~a5;     //1101 0100
    printf("%d %d %d %d\n", c5, d5, e5, f5);

//8. BITSHIFT OPERATOR
    // left shift: x2
    // right shift: /2
    char a6 = 15; //0000 1111
    char b6 = a6 << 1; //0011 1100
    char c6 = a6 >> 2; //0000 0011
    
    //unique case, most significant bit = 1 (for right shift only!!!)
    char d6 = -64;//1100 0000 
    char e6 = d6 >> 1; //1110 0000
    printf("%d %d %d\n", b6,c6,e6);

//9. PREINCREMENT vs POSTINCREMENT (+1). ini istilahnya syntatic sugar (syntaxnya dibikin lebih simple)
    //preincrement(++x): ditambah dulu baru lakuin yg lain
    //post increment(x++): lakuin yg lain dulu baru ditambah
    int x = 5;
    printf("%d ", x++);
    printf("%d ", ++x);
    printf("%d\n", x++);

//10. BOOLEAN
    //zero: false
    //nonzero: true
    int y = -5, z = 5;
    int _true = y == z;
    int _false = y != z; 
    printf("%d %d\n", _true, _false);

    y = 1, z = 0;
    _true = y || z;
    _false = y && z;
    printf("%d %d\n", _true, _false);

//11. ARITHMETIC ASSIGNMENT
    int p = 100;
    p += 5; //sama aja kyk p = p + 5 (syntatic sugar, biar ngetiknya gk panjang2 lol)
    printf("%d\n", p);

//12. TERNARY CONDITION OPERATOR (mirip if tapi one liner)
    int aa = 105, bb = 101;
    int xx = (aa > bb) ? aa : bb;
    printf("%d\n", xx);
}
