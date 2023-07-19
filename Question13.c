#include <stdio.h>
int square(int number);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = square(number);
    printf("The square of %d is %d", number, result);
    return 0;
}

int square(int number)
{
    int result = number * number;
    return result;
}