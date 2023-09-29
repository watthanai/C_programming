#include <stdio.h>

void main()
{
    /* declaration */
    unsigned int number, initial, j;

    /* initialization */
    initial = 2; // prime number should more than 1

    printf("Enter the number  : ");
    scanf("%d", &number);
    while (initial <= number)
    {
        for (j=2 ; j <= initial; j++) // prime number checking
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
}