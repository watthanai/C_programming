#include <stdio.h>

void primeFactor(unsigned int number)
{

    /* declaration */
    unsigned int initial, j;
    unsigned int *pointer;

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

void main()
{
    unsigned int number;
    printf("Enter the number  : ");
    scanf("%d", &number);
    printf("%d = ",number);
    primeFactor(number);
}