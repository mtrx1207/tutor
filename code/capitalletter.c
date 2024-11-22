#include<stdio.h>
int main(){
    char c;
    int array[80];
/*for(int i=0;i<80;i++){
    scanf("%c",&c);
    if(c=='\n'){
        break;
    }
    else{
        array[i]=n;
    }
} */
    int count=0;
    do{
        scanf("%c",&c);
        if(c>='A' && c<='Z'){
             int found=0;
            for(int i=0;i<count;i++){
                if(c==array[i]){
                    break;
                    found=1;
                }
            }
            if(found==0){
            printf("%c",c);
            array[count]=c;
            count++;
            }
        }
    }while(c!='\n');
    return 0;
}
