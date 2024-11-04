#include <stdio.h>

int main(){
    int i, letter=0, digit=0, blank=0, other=0;
    char c;
    int N;
    scanf("%d",&N);
    getchar(); //untuk nangkep kelebihan enter dari scanf yang diatas
    /*
        getchar adalah fungsi yang bakal nerima karakter apapun dr keyboard
        dia baru jalan ketika kita mencet 'Enter'
        setelah jalan, getchar bakal lihat karakter yg udh dimasukin SATU PER SATU
        getchar() dan scanf("%c") adalah 2 hal yang sama
    */
    
    for(i=0; i<N; i++){ //misal N = 10, dia hanya akan melihat 10 karakter yang user masukin
        c = getchar();
		
        if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            letter++;
        else if(c >= '0' && c <= '9')
            digit++;
        else if(c == ' ' || c == '\n' || c == '\t')
            blank++;
        else
            other++;
    }
    
    printf("letter:%d dight:%d blank:%d other:%d", letter, digit, blank, other);
    return 0;
}
//Q: if itu perlu pake bracket atau ngak? 
//A: tergantung didlm if nya ada brp line code lu, kalo cuman 1 bisa pke bisa ngak
