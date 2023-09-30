#include <stdio.h>
#include <stdlib.h>

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
        printf(" %d ",a[i]);
    }
    printf("\n");

}


int main(int argc, char *argv[]) {
    int i;
    int *array = NULL;
    int size = 0;
    int MAX_LENGTH=12;

    for (i = 1; i < argc; i++) {
        if (size == MAX_LENGTH) {
            printf("Exceeded the maximum length of the array (%d).\n", MAX_LENGTH);
            break;
        }

        size++; // Increment the size before reallocating
        array = (int *)realloc(array, size * sizeof(int));
        array[size - 1] = atoi(argv[i]);


    }
    printAr(array,size);
    sort(array, size);
    printAr(array,size);

    // Free allocated memory
    free(array);

    return 0;
}
