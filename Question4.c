#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Enter character : ");
    scanf("%c", &character);

    if (isdigit(character))
    {
        printf("Given character is a digit ");
    }
    else
        printf("Given character is not  a digit ");
}