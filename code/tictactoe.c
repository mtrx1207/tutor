#include <stdio.h>

void print(int arr[3][3]){
	int first = 1;
	for(int i = 0; i < 3; i++){
		if(!first) {
			printf("-------+-------+-------\n");	
		}
		printf("       |       |\n");
		int flag = 1;
		for(int j = 0; j < 3; j++){
			if(!flag) printf("|");	
			printf("   %c   ",arr[i][j] < 0 ? ' ':'O' + 9*arr[i][j]);
			flag = 0;
		}
		printf("\n       |       |\n");
		first = 0;
	}
}

int iswin(int arr[3][3]){
	//check row
	for(int i = 0; i < 3; i++){
		if(arr[i][0] < 0) continue;
		int check = arr[i][0];
		int win = 1;
		for(int j = 1; j < 3; j++){
			if(arr[i][j] != check){
				win = 0;
				break;
			}
		}
		if (win) return 1;
	}
	
	//check column
	for(int j = 0; j < 3; j++){
		if(arr[0][j] < 0) continue;
		int check = arr[0][j];
		int win = 1;
		for(int i = 1; i < 3; i++){
			if(arr[i][j] != check){
				win = 0;
				break;
			}
		}
		if (win) return 1;
	}
	
	//check diagonal
	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] >= 0) return 1;
	if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] >= 0) return 1;
	
	return 0;
}

int main(){
	int arr[3][3] = {
		{-1,-1,-1},
		{-1,-1,-1},
		{-1,-1,-1}
	};
	
	int player = 0, i = 0, win = 0;
	
	printf("Welcome to Tic Tac Toe!\n");
	do{
		int x,y;
		print(arr);
		printf("Player %c please insert coordinate: ", player == 0? 'O' : 'X');
		scanf("%d %d",&x,&y);
		arr[x][y] = player;
		if(iswin(arr)){
			print(arr);
			printf("Player %c wins!", player == 0? 'O' : 'X');
			win = 1;
			break;
		}
		player = !player; 
		i++;
	}while(i < 9);
	
	if(!win){
		printf("Tie!");
	}
}
