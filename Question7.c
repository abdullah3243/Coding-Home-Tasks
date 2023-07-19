#include <stdio.h>
int main()
{
    int number;
    printf("Enter a Number :");

    scanf("%d", &number);
    if (number >= 1)
    {
        printf("Given Number is Natural Number");
    }
    else
    {
        printf("Given Number is not Natural Number");
    }
    return 0;
}