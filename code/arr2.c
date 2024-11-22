#include <stdio.h>

int main() {
    // Declare an array of integers with a fixed size of 5
    int my_array[5] = {1, 2, 3, 4, 5};
    printf("Initial array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    // Arrays can also be partially initialized; remaining elements default to 0
    int partial_array[5] = {1, 2};
    printf("Partially initialized array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", partial_array[i]);
    }
    printf("\n");
    
    
    
    int my_array2[5] = {10, 20, 30, 40, 50};
	
    // Access elements using indices
    printf("Element at index 0: %d\n", my_array2[0]);
    printf("Element at index 4: %d\n", my_array2[4]);
    
    //Index out of bound:
    printf("Element at index -1: %d\n", my_array2[-1]);
    printf("Element at index 5: %d\n", my_array2[5]);

    // Modify elements by assigning new values
    my_array2[2] = 100;
    printf("After modifying index 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", my_array2[i]);
    }
    printf("\n");
    
    //sizeof: hitung ukuran dari suatu variable dengan satuan byte(s)
    int length = sizeof(my_array2) / sizeof(int);
	printf("Length of my_array: %d\n", sizeof(my_array2));
	
	for(int i = 0; i < sizeof(my_array)/sizeof(int); i++){
		printf("%d ", my_array[i]);
	}

    return 0;
}
