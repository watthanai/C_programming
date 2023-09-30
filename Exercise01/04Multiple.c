#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int dataset(int argc, char *argv[]) {

    int result = 1;

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        result = multiply(result, num);
    }

    return result;


}

int multiply(int a, int b) {
    int result = 0;
    bool isNegative = false;

    // Determine the sign of the result
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        isNegative = true;
    }

    // Make both numbers positive for the loop
    a = (a < 0) ? -a : a; //abs(a)
    b = (b < 0) ? -b : b; //abs(b)

    // Perform multiplication using repeated addition
    for (int i = 0; i < b; i++) {
        result += a;
    }

    // Apply sign to the result if needed
    if (isNegative) {
        result = -result;
    }

    return result;
}

int main(int argc, char *argv[]) {
    int product = dataset(argc, argv);
    printf("The product is: %d\n", product);
}
