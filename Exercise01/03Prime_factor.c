#include <stdio.h>
#include <stdlib.h>

void primeFactor(unsigned int number)
{

    /* declaration */
    unsigned int initial, j;
    /* initialization */
    initial = 2; // prime number should more than 1

    while (1 < number)
    {
        for (j = 2; j <= number; j++) // prime number checking
        {
            if (number % j == 0)
            {
                number=number/j;
                printf("%d ", j);
                break;
            }
            
        }
        if(number != 1)
        printf("* ");
        
    }
}

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]); 

    if (N <= 1)
    {
        printf("There is not prime numbers up to %d.\n", N);
        return 0;
    }
    printf("%d = " ,N);
    primeFactor(N);
}