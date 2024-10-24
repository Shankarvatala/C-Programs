#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if(n == 0)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    int n;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Call recursive function and print the result
        printf("Factorial of %d = %llu\n", n, factorial(n));
    }

    return 0;
}
