#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number = 5;
    
    
    if (number < 0) {
        printf("gia thua khong xac dinh cho so am.\n");
    } else {
        printf("giai thua cua %d la %lld\n", number, factorial(number));
    }
    
    return 0;
}

