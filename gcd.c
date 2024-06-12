#include <stdio.h>

// Function to compute GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Asking user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the gcd function and displaying the result
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
