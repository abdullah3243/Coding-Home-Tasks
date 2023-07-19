#include <stdio.h>

int sum(int num1, int num2);

int main()
{
    int number1, number2;

    printf("Enter two numbers \n ");
    scanf("%d", &number1);
    scanf("%d", &number2);

    int result = sum(number1, number2);

    printf("Result = %d", result);
    return 0;
}

int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}