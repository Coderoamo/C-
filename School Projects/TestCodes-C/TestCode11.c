#include <stdio.h>

int modArray(int arr[5], int size);

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Before calling Function array:\n");

    for(int i = 0; i < size; i++) {
        printf("At array %d the value is: %d\n", i, arr[i]);
    }

    printf("\nAfter calling Function array:\n");

    modArray(arr, size);

}
int modArray(int arr[5], int size) {

    arr[0] = 100;
    arr[1] = 200;

    printf("\nArray inside the function:\n\n");

    for(int i = 0; i < size; i++) {
        printf("Array is: %d\n", arr[i]);
    }
}