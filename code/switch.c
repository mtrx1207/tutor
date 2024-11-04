#include<stdio.h>

//learn about switch case
//JANGAN LUPA PAKAI BREAK!!!

int main(){
	int c = 10;
	switch(c){
		case 5: //if c == 5
			printf("helo\n");
			break;
		case 10: // if c == 10
			printf("world\n");
		default: //else
			printf("default\n");
			break;
	}
}
