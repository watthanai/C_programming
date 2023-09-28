#include <stdio.h>
void swap(int *a0, int *a1) /* swap *a0 and *a1 */
{
    int t = *a0;
    *a0 = *a1;
    *a1 = t;
}
void sort(int a[], int n) /* sort array a of size n */
{
    int i, j;
    for (i = 0; i < n; i = i + 1)
    {
        for (j = 1; j < n - i; j = j + 1)
        {
            if (a[j - 1] > a[j])
                swap(&a[j - 1], &a[j]);
        }
    }
}
void printAr(int a[],size_t a_size)
{    
    for (int i =0 ;i< a_size;i++)
    {
        printf("%2d",a[i]);
    }
    printf("\n");

}
void main()
{
    int a[10] = {10, 5, 2, 1, 7, 6, 3, 4, 9, 8};
    size_t len = (&a)[1] - a; // will return the size of array
    printAr(a,len);  //printArray(a);
    sort(a, 10);
    printAr(a,len);  //printArray(a);
}