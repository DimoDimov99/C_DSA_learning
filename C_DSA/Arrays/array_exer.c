#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int *create_arr(int elems_number)
{
    int elem = 0;
    int *p = (int *)malloc(elems_number * sizeof(int));
    for (int i = 0; i < elems_number; i++)
    {
        printf("Enter elem %d: ", i + 1);
        scanf("%d", &elem);
        p[i] = elem;
    }

    return p;
}

int main()
{
    /*
    // scalar variable
    int x = 5;
    // vector variable
    int A[5];
    // declaration of array
    int B[5];   // if no initialized, array will contain garbage values.
    int C[5] = {1, 2, 3, 4, 5};
    int D[5] = {1, 2};   // [1|2|0|0|0]
    int E[5] = {0};      // [0|0|0|0|0]
    int F[] = {1, 2, 3, 4, 5};
    int len = 5;
    int *p = create_arr(len);
    print_arr(p, len);
    free(p);
    */

    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};
    int *B[3];
    int **C;   // row | colums

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
