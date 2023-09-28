#include <stdio.h>
void print_float(float f) /* print binary format of float f */
{
    int i;
    int v = *(int *)(&f); //uint32_t i; memcpy(&i,&f,sizeof i);
    for (i = 31; i >= 0; i--)
    {
        if (v & (1 << i))
            printf("1");
        else
            printf("0");
        if (i == 31 || i == 23)
            printf(" ");
    }
    printf("\n");
}
void main()
{
    float f = 1.0;
    printf("%f = ", f);
    print_float(f);
    f = 1.5;
    printf("%f = ", f);
    print_float(f);
    f = 2.25;
    printf("%f = ", f);
    print_float(f);
}