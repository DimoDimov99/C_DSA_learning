#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void switch_first_last_elem(int arr[], int len)
{
    int *first = &arr[0];
    int *last = &arr[len] - 1;

    int tempt = *first;
    *first = *last;
    *last = tempt;
}

void swap(int *x, int *y)
{
    int tempt = *x;
    *x = *y;
    *y = tempt;
}

void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void display_arr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int factorial(int number)
{
    int factorial_result = 1;

    if (number < 0)
    {
        printf("Factorial does not work with negative numbers!\n");
        return EXIT_FAILURE;
    }

    if (number == 0)
    {
        return factorial_result;
    }

    for (int i = number; i >= 1; i--)
    {
        // 5 * 4 * 3 * 2 * 1;
        factorial_result = factorial_result * i;
    }
    return factorial_result;
}

void palindrome(char str[], int len)
{
    int i = 0;
    int j = len - 1;
    char rev_str[len];

    for (; j >= 0; j--, i++)
    {
        rev_str[i] = str[j];
    }

    rev_str[len++] = '\0';
    if ((strcmp(str, rev_str)) == 0)
    {
        printf("String %s is palindrome!\n", str);
    }
    else
    {
        printf("String %s is not palindrome!\n", str);
    }
}

void to_lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
}

int get_str_len(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        ++len;
        str++;
    }

    return len;
}

int main(int argc, char *argv[])
{
    /*
    int test[] = {6, 5, 7, 9, -7, -69, 10, -6, 0, 1};
    int len = sizeof(test) / sizeof(test[0]);
    printf("Before sort: ");
    display_arr(test, len);
    printf("\n");
    printf("After sort: ");
    bubble_sort(test, len);
    display_arr(test, len);
    printf("\n");
    */
    /*
    int result = factorial(6);
    printf("%d\n", result);
    */
    /*
    int arr_01[5] = {1, 2, 3, 4, 5};
    int *ptr = arr_01;
    int *ptr_last = &arr_01[4];
    for (; ptr <= ptr_last; ptr++)
    {
        printf("%d\n", *ptr);
    }
    */
    char test_str[] = "Test";
    int test_str_len = get_str_len(test_str);
    printf("%d\n", test_str_len);
}
