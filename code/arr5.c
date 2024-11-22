#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    printf("Array passed to function: ");
    print_array(my_array, 4);

    return 0;
}
