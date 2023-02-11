#include <stdio.h>
#include <stdlib.h>

void print_english_alphabet()
{
    for (int i = 65; i <= 90; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
}

int main()
{
    print_english_alphabet();
    return 0;
}
