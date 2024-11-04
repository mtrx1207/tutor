#include <stdio.h>

int main(){
	int x,cnt = 0;
	double sum = 0;
	int number[100];
	
	do{
		scanf("%d",&x);
		number[cnt] = x;
		sum += x;
		cnt++;
	}while(x != -1);
	
	if(cnt > 0){
		int i;
		double avg = sum / cnt;
		for(i=0;i<cnt;i++){
			if(number[i]>avg){
				printf("%d ",number[i]);
			}
		}
	}
	return 0;
}
