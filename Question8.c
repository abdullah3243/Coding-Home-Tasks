#include <stdio.h>

int main()
{
    char character = '*';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c", character);
        }
        printf("\n");
    }
}