#include <stdio.h>

/*
    input: angka2 dipisah spasi, endingnya di -1 (123 456 228 -1)
    output: print array yg udh ke sort, descending order
*/
int main(){
	int array[80]; //ukuran liat dari soal, brp banyak maksimal angka yg bs dimasukin
	
	int i = 0; //i ini pada akhir akan menunjukkan banyak angka yg akan di sort
	int a;
	while(1){
		scanf("%d",&a);
		if(a != -1){
			array[i] = a;
			i++;
		}
		else break;
	}
	
	//BUBBLE SORT
	for(int j = 0; j<i; j++){
		for(int k = 0; k<i-1-j; k++){
			if(array[k]<array[k+1]){
				//swap
				int temp = array[k];
				array[k] = array[k+1];
				array[k+1] = temp;
			}
		}
	}
	
	for(int j = 0; j < i; j++) printf("%d ",array[j]);
}
