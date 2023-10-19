#include <stdio.h>

int main()
{
    int first_number, second_number, sum_suka, product_suka;

    printf("Give two numbers: \n");
    scanf("%d %d", &first_number, &second_number);

    sum_suka = first_number + second_number;
    product_suka = first_number * second_number;

    printf("The sum is: %d\n", sum_suka);
    printf("The product is: %d\n", product_suka);

    getch();
    return 0;

}