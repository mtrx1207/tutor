#include <stdio.h>

int main() {
	double one_d[3] = {
		1.4,
		1.5,
		1.6
	};
	
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("2D array (matrix):\n");
    for (int i = 0; i < 3; i++) {
    	  printf("%p ",matrix[i]);
//        for (int j = 0; j < 3; j++) {
//            printf("%d ", matrix[i][j]);
//        }
        printf("\n");
    }

    return 0;
}
