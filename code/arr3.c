#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int my_array[N];
	for(int i = 0; i < N; i++){
		scanf("%d",&my_array[i]);
	}
	printf("Array elements: ");
	    for (int i = 0; i < N; i++) {
	        printf("%d ", my_array[i]);
	    }
	printf("\n");


}
