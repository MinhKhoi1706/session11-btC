#include <stdio.h>

int sum(int a, int b ) {
    return a + b;
}

int main() {
    int num1 = 6, num2 = 2, result;
    
    
    result = sum(num1, num2);
    
    printf("%d + %d = %d\n", num1, num2, result);
    
    return 0;
}

