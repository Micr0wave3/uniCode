/*
//takes integer value as parameter and calculates the triple of tha value
#include <stdio.h>

int triple(int value)
{
    int return_value = value * 3;
    return return_value;
}

int main() 
{
    int var;
    printf("Enter value: ");
    scanf("%d", &var);
    int tri = triple(var);
    printf("Value = %d, Triple = %d", var, tri);
}
*/
/*
#include <stdio.h>

double power(double base, int exponent)
{
    int i;
    double result = 1;
    for(i=0; i<exponent; ++i) //multiplying base by itself until i reaches input exponent value
    {
        result *= base;
    }
    return result;
}

int main()
{
    double base;
    int exponent;

    printf("Enter base^exponent: ");
    scanf("%lf^%d", &base, &exponent);

    double result = power(base, exponent);
    printf("Result = %lf", result);

    return 0;
}
*/
/*
#include <stdio.h>
int max(int, int);

int main()
{
    int a, b;
    printf("Input 2 values: ");
    scanf("%d %d", &a, &b);
    int max_val = max(a, b);
    printf("a=%d, b=%d, maximum is %d\n", a, b, max_val);
}

int max(int a, int b)
{
    if (a>b) //only need this one "if" for this to work properly
    {
        return a;
    }
    return b;
}
*/
/*
#include <stdio.h>
double calc_bmi(double h, double w);
void print_bmi(double, double);

int main()
{
    double weight, height;
    printf("Enter height in m: ");
    scanf("%lf", &height);

    printf("Enter weight in kg: ");
    scanf("%lf", &weight);

    print_bmi(height, weight);
    return 0;
}

void print_bmi(double h, double w)
{
    double bmi = calc_bmi(h, w);
    printf("Height = %.2lfm Weight = %.2lfkg BMI = %.2lf\n", h, w, bmi);
}

double calc_bmi(double h, double w)
{
    return w/h/h;
}
*/
/*
#include <stdio.h>

unsigned int factorial(unsigned int x)
{
    unsigned int i, prod;
    for(i=x, prod=1; i>1; --i)
    {
        prod *= i;
    }
}

int main()
{
    unsigned int num = 0;
    printf("Insert value: ");
    scanf("%u", &num);
    printf("Factorian of %u is equal to: %u", num, factorial(num));
}
*/

#include <stdio.h>

float average(int arr[], int arr_length);

int main()
{
    int length, i;
    printf("Enter number of ages: ");
    scanf("%d", &length);

    int age[length];
    for(i=0; i<length; ++i)
    {
        printf("Enter age: ");
        scanf("%d", &age[i]);
    }

    printf("Length of the array age is %d.", length);
    float avg = average(age, length);
    printf("Average age is %0.2f", avg);
    getchar();
    return 0;
}

float average(int arr[], int arr_length)
{
    int i, sum;
    float avg;
    for (i=0, sum=0; i<arr_length; ++i)
    {
        sum += arr[i];
    }
    avg = ((float)sum / arr_length);
    return avg;
}