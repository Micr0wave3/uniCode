#include <stdio.h>

int main()
{
    int hour, minute, second;

    printf("Input the hours: ");
    scanf("%d", &hour);
    printf("Input the minutes: ");
    scanf("%d", &minute);
    printf("Input the seconds: ");
    scanf("%d", &second);

    printf("Current time is: %d hours, %d minutes and %d seconds\n", hour, minute, second);
    
    getch();
    return 0;
}