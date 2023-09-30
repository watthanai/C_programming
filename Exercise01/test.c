#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to divide two signed integers without using /
int divide(int dividend, int divisor) {
    // Check for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero.\n");
        exit(1);
    }

    // Determine the sign of the result
    bool isNegative = false;
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        isNegative = true;
    }

    // Make both numbers positive for the division
    long long lldividend = llabs((long long)dividend);
    long long lldivisor = llabs((long long)divisor);

    // Perform division using repeated subtraction
    long long quotient = 0;
    while (lldividend >= lldivisor) {
        lldividend -= lldivisor;
        quotient++;
    }

    // Apply sign to the quotient
    if (isNegative) {
        quotient = -quotient;
    }

    // Check for overflow
    if (quotient < INT_MIN || quotient > INT_MAX) {
        printf("Error: Division result out of range.\n");
        exit(1);
    }

    return (int)quotient;
}

int main() {
    int dividend, divisor;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    int quotient = divide(dividend, divisor);

    printf("The quotient is: %d\n", quotient);

    return 0;
}
