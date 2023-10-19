#include <stdio.h>

int main()
{
    char char_one, char_two, char_three;
    printf("Input first character: ");
    scanf(" %c", &char_one);
    printf("Input second character: ");
    scanf(" %c", &char_two);
    printf("Input third character: ");
    scanf(" %c", &char_three);

    printf("The output for whatever reason is: %c%c%c", char_three, char_two, char_one);

    getch();
    return 0;
}