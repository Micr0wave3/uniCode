#include <stdio.h>

int sumTwoNum(int, int); 
int prodTwoNum(int, int); 

int main()
{
    int number1, number2;
    int sum;
    int product; 

    printf("Enter the first integer number: ");
    scanf("%d", &number1);
    printf("Enter the second integer number: ");
    scanf("%d", &number2);

    sum = sumTwoNum(number1, number2);
    product = prodTwoNum(number1, number2);

    printf("Number1: %d, Number2: %d\n", number1, number2);
    printf("Sum: %d, product: %d\n", sum, product);

    return 0;
}

int sumTwoNum(int x, int y)
{
    return x + y;
}

int prodTwoNum(int x, int y)
{
    return x * y;
}