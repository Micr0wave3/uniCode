#include<stdio.h>
#define TEMPC 80.0

int main()
{
    float tempF,tempC;
    
    printf("Enter the temperature in Farenheit: ");
    scanf("%f", &tempF);

    tempC = (tempF - 32) * (5/9);
    printf("%.2f Farenheit is equal to %.2f Celsius", tempF, tempC);
    
    getch();
    return 0;
}