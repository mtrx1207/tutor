/*
 128 345 226 -1
 345 226 128
*/

#include <stdio.h>

int main(){
	int array[10];
	int n,count=0;
	for(int i=0; i<10;i++){
		scanf("%d",&n);
		if(n==-1) break;
		array[i] = n;
		count++;
	}
	
	//sort
	for(int i=0;i<count-1;i++){
		int max=array[i];
		int maxindex=i;
		for(int j=i+1;j<count;j++){
			if(max<array[j]){
				max = array[j];
				maxindex = j;
			}
		}
		int tmp = array[i];
		array[i] = max;
		array[maxindex] = tmp;
	}
	
	for(int i = 0;i<count;i++)printf("%d ",array[i]);
}
