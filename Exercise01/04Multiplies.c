#include <stdio.h>
int main(void)
{

    int x, y, i, mul = 0;
    printf("Enter x and y values : ");
    scanf("%d%d", &x, &y);
    if (x < 0 && y < 0)
    {
    }
    else if ((x < 0 && y > 0) || (x > 0 && y < 0))
    {
        
        for (i = 1; i <= y; i++)
        {
            mul = mul + x;
        }
        printf("Multiplication is : %d \n", mul);
    }
    else if (x > 0 && y > 0)
    {
        for (i = 1; i <= y; i++)
        {
            mul = mul + x;
        }
        printf("Multiplication is : %d \n", mul);
    }
    else if (x == 0 || y == 0)

}