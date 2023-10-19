#include <stdio.h>
#include <math.h>

int main()
{
    float deposit, interest_rate, time, interest;
    printf("Define deposit size: ");
    scanf("%f", &deposit);
    printf("Define interest rate per year in percent: %%");
    scanf("%f", &interest_rate);
    printf("Define length of investment in years: ");
    scanf("%f", &time);
    interest_rate = interest_rate / 100;
    interest = (deposit * pow(1 + interest_rate, time)) - deposit;
    printf("Your profit is: %f", interest);
    getch();
    return 0;
}