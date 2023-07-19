#include <stdio.h>
// This program is about to find the cube of a number 19-7-2023
int main()
{
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    int cube = (number * number) * number;

    printf("\nNumber of cube: %d\n", cube);
    return 0;
}