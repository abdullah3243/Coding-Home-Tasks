#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("First number is greater");
    }
    else
        printf("Second number is greater");
    return 0;
}