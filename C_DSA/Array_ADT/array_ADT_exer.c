#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

struct Array_static
{
    int A[10];
    int size;
    int length;
};

void display_arr(struct Array arr)
{
    printf("Elements of the array:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void display_arr_static(struct Array_static arr)
{
    printf("Elements of the array:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void append(struct Array_static *arr, int elem)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = elem;
    }
}

void insert(struct Array_static *arr, int index, int elem)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = elem;
        arr->length++;
    }
}

int main()
{
    /*
    struct Array arr;
    int arr_elems = 0;
    printf("Enter size of array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Enter how many elements: ");
    scanf("%d", &arr_elems);
    printf("Enter all elements\n");
    for (int i = 0; i < arr_elems; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = arr_elems;
    display_arr(arr);
    */

    struct Array_static arr02 = {{2, 3, 4, 5, 6}, 10, 5};
    append(&arr02, 10);
    display_arr_static(arr02);
    insert(&arr02, 0, 6);
    display_arr_static(arr02);
    return 0;
}
