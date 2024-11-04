#include <stdio.h>

//learn c getchar, putchar, ascii for letter
int main(){
    char c;
    do{
        c = getchar();
        if(c>='A' && c<='Z'){
            c += 32;
        }
        putchar(c);
    } while(c!='a');
}
