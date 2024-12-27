#include <stdio.h>

int findmax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 

    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("so lon nhat la: %d\n", findmax(arr, n));

    return 0;
}

