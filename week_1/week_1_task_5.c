#include <stdio.h>

int main()
{
    int user_input, remainder_from_years, remainder_from_months, years, months, days;

    printf("Input days to convert to years, months and days:\n");
    scanf("%d", &user_input);

    years = user_input/365; //full years
    user_input = user_input % 365; //rewrite of user_input to remainder from year
    months = user_input/30; //full years
    user_input = user_input % 30; //rewrite of user_input to remainder from months
    days = user_input; //remaining days

    printf("years: %d\n", years);
    printf("months : %d\n", months);
    printf("days : %d\n", days);

    return 0;
}