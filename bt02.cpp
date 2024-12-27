#include <stdio.h>

void array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myarray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myarray) / sizeof(myarray[0]);
    array(myarray, size);
    return 0;
}

