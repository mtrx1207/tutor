#include <stdio.h>

int main(){	
	char string[] = {'H', 'e','l','l','o','\0'};
	char string2[] = "Hello";
	
	//print with iteration
	printf("string: ");
	for(int i = 0; i < sizeof(string)/sizeof(char); i++){
		printf("%c",string[i]);
	}
	printf("\n");
	
	printf("string2: ");
	for(int i = 0; i < sizeof(string)/sizeof(char); i++){
			printf("%c",string2[i]);
	}
	printf("\n");
	
	//print with %s
	printf("string: %s, string2: %s\n",string,string2);
	
	//try this!
	char string_wrong[] = {'W', 'o','r','l','d'};
	printf("string_wrong: %s\n",string_wrong);
	
	//sizeof
	printf("sizeof string: %d, sizeof string2: %d, sizeof string_wrong: %d\n",sizeof(string),sizeof(string2),sizeof(string_wrong));
	
	//'A' vs "A"
	char a = 'A'; 
	char aa[] = "A";
	printf("sizeof a: %d, sizeof aa: %d\n",sizeof(a),sizeof(aa));
}
