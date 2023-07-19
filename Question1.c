#include <stdio.h>

// This program is about to find the primeter of rectangle 19-7-2023
int main()
{
    float length, width, primeter;

    printf("Enter length:");
    scanf("%f", &length);

    printf("Enter width:");
    scanf("%f", &width);
// sum of all side of recangle as both sides are equal 2 is multiple
    primeter = 2 * (length + width);  

    printf("The Primeter of Rectangle : %f", primeter);

    return 0;
}