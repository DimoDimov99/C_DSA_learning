#include <stdio.h>
#include <stdlib.h>

void exaple_recursion_01(int number)
{
    if (number > 0)
    {
        printf("%d\n", number);
        exaple_recursion_01(number - 1);
    }
}

void exaple_recursion_02(int number)
{
    if (number > 0)
    {
        exaple_recursion_02(number - 1);
        printf("%d\n", number);
    }
}

int factorial_recursion(int number)
{
    if (number < 0)
    {
        return -1;
    }
    else if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial_recursion(number - 1);
    }
}

int number_squared(int number)
{
    static int times = 0;
    if (number > 0)
    {
        times++;
        return number_squared(number - 1) + times;
    }
    return 0;
}

int sum_of_first_n_numbers(int n)
{
    int result = 0;
    if (n > 0)
    {
        // sum_of_first_n_numbers(n) = 1 + 2 +3 +4 + .... (n - 1) + n
        result = n + sum_of_first_n_numbers(n - 1);
    }

    return result;
}

int sum_of_first_n_numbers_02(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum_of_first_n_numbers_02(n - 1) + n;
    }
}

int gauss_sum(int number)
{
    if (number == 0)
    {
        return 0;
    }

    else
    {
        return (number * (number + 1) / 2);
    }
}

int power(int base, int exponent)
// 2^5 = [2 * 2 * 2 * 2] exponent - 1 * 2 (base)
{
    if (exponent == 0)
    {
        return 1;
    }

    return power(base, exponent - 1) * base;
}

int power_02(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    else if (exponent % 2 == 0)
    {
        return power_02(base * base, exponent / 2);
    }

    else
    {
        return base * power_02(base * base, (exponent - 1) / 2);
    }
}

double e(int x, int n)
{
    static double power = 1, factorial = 1;
    double result = 0;
    if (n == 0)
    {
        return 1;
    }
    result = e(x, n - 1);
    power = power * x;
    factorial = factorial * n;

    return result + power / factorial;
}

double e_shorter(double x, double n)
{
    static double sum = 1;
    if (n == 0)
    {
        return sum;
    }
    sum = 1 + x / n * sum;
    return e_shorter(x, n - 1);
}

int fibonacci_recursion(int number)
{
    if (number < 0)
    {
        number = number * -1;
    }

    if (number == 0 || number == 1)
    {
        return number;
    }

    return fibonacci_recursion(number - 1) + fibonacci_recursion(number - 2);
}

int fibonacci_iterative(int number)
{
    if (number < 0)
    {
        number = number * -1;
    }

    if (number == 0 || number == 1)
    {
        return number;
    }

    int first = 0;
    int second = 1;
    int sum = 0;

    for (int i = 2; i <= number; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }

    return sum;
}

int factorial_iteration(int number)
{
    long int sum = 1;
    if (number == 0)
    {
        return 1;
    }

    for (int i = 1; i <= number; i++)
    {
        sum *= i;
    }
    return sum;
}

int combination_ordered(int number, int r)
{
    int numerator = factorial_iteration(number);
    int denominator = factorial_iteration((number - r));
    return numerator / denominator;
}

int combination_unordered(int number, int r)
{
    int numerator = factorial_iteration(number);
    int denominator = factorial_iteration(number - r) * factorial_iteration(r);
    return numerator / denominator;
}

void tower_of_hanoi(int number, int A, int B, int C)
{
    if (number > 0)
    {
        tower_of_hanoi(number - 1, A, C, B);
        printf("From %d to %d\n", A, C);
        tower_of_hanoi(number - 1, B, A, C);
    }
}

int main()
{
    return 0;
}
