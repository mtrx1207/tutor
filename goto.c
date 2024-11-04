#include <stdio.h>

//learn c goto
int main(){
	int i, j, sum=0;
	    for(i=1; i<=10; i=i+1){
	    	for(j=1;j<=3;j++){
				sum += j;
				if(j % 2 == 0) goto done;
			}
	    }
	done:
	printf("sum=%d\n",sum);
}
