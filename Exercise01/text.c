#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

    int N = atoi(argv[1]);

    if (N <= 1)
    {
        printf("There is not prime numbers up to %d.\n", N);
        return 0;
    }

    printf("Prime numbers up to %d are:\n", N);
    unsigned int initial,j;
    initial = 2;
    while (initial <= N)
    {
        for (j = 2; j <= initial; j++) // prime number checking
        {
            if (initial % j == 0)
            {
                break;
            }
        }
        if (initial == j)
        {
            printf("%d ", initial);
        }
        initial++;
    }
    return 0;
}
