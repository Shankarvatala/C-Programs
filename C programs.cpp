#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    // Input numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate sum
    sum = num1 + num2;
    
    // Output result
    printf("Sum: %d\n", sum);
    
    return 0;
}
