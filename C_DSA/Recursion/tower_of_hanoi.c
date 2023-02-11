#include <stdio.h>
#include <stdlib.h>

void tower_of_hanor(int number, int A, int B, int C)
{
    if (number > 0)
    {
        tower_of_hanor(number - 1, A, C, B);
        printf("From %d to %d\n", A, C);
        tower_of_hanor(number - 1, B, A, C);
    }
}

int main()
{
    tower_of_hanor(3, 1, 2, 3);
    return 0;
}
