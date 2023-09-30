#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Devide(int b, int a) {
    int result = 0;
    int count=0;
    bool isNegative = false;

    // Determine the sign of the result
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        isNegative = true;
    }

    if (a==0 || b==0){
        printf("Error!! Divisible by 0");
        exit(-1);
    }

    // Make both numbers positive for the loop
    a = (a < 0) ? -a : a; //abs(a)
    b = (b < 0) ? -b : b; //abs(b)

    // Perform multiplication using repeated addition
    while (b>=a)

    {
       b-=a ;
       count++;
       
    }
    result =count;

    // Apply sign to the result if needed
    if (isNegative) {
        result = -result;
    }

    return result;
    
}

int main(int argc, char *argv[]) {


     int result = Devide(atoi(argv[1]), atoi(argv[2]));
     printf("The product is: %d\n", result);
}
