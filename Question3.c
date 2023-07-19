#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three Numbers \n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;
    float avg = sum / 3;

    printf("Average : %f\n", avg);
    return 0;
}