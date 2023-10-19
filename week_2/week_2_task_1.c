#include<stdio.h>

int main(void)
{
    float dig_1, dig_2, sum, avg;
    printf("Insert first digit: ");
    scanf("%f", &dig_1);
    printf("Insert the second digit: ");
    scanf("%f", &dig_2);
    sum = dig_1 + dig_2;
    avg = (sum) / 2;
    printf("Sum = %f, Average = %f", sum, avg);
    getch();
    return 0;
}