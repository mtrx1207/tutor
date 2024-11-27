#include <stdio.h>


int main(){
	char str[30]; //ukuran liat dari soal, brp banyak maksimal angka yg bs dimasukin
	
	int i = 0; //i ini pada akhir akan menunjukkan banyak angka yg akan di sort
	scanf("%s",str);
	
	while(str[i] != '\0') i++;
	
	//BUBBLE SORT
	for(int j = 0; j<i; j++){
		for(int k = 0; k<i-1-j; k++){
			
			//mreka bedua sm2 uppercase atau lowercase kah?
			if((str[k] >= 'A' && str[k] <= 'Z' && str[k+1] >= 'A' && str[k+1] <= 'Z') ||
			   (str[k] >= 'a' && str[k] <= 'z' && str[k+1] >= 'a' && str[k+1] <= 'z')
			){
				//baru tanya, mana yg lebi gede?
				if(str[k]>str[k+1]){
					//swap
					char temp;
					temp = str[k];
					str[k] = str[k+1];
					str[k+1] = temp;
				}
			}
			
			//salah satu lowercase, other uppercase
			else{
				//kalau str[k] nya uppercase
				if(str[k] >= 'A' && str[k] <= 'Z'){
					char c = str[k] + 32;
					if(c>str[k+1]){ //convert jadi kecil, baru compare
						//swap
						char temp;
						temp = str[k];
						str[k] = str[k+1];
						str[k+1] = temp;
					}
					//kalau misal c == str[k+1], 'A' 'a'-> gk prlu swap
				}
				else{
					char c = str[k+1] + 32;
					//case 'a' 'A' di swap jadi 'A' 'a'
					if(str[k]>=c){ //convert jadi kecil, baru compare
						//swap
						char temp;
						temp = str[k];
						str[k] = str[k+1];
						str[k+1] = temp;
					}
				} 
			}
			
		}
	}
	
	printf("%s",str);
}
