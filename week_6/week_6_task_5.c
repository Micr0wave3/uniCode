#include <stdio.h>

int factorial(int n);

int main() {
    int i;
    long sum = 0;
    
    for (i = 1; i <= 5; ++i) {
        sum += factorial(i);
    }
    
    printf("The sum of the series 1! + 2! + 3! + 4! + 5! is: %ld\n", sum);
    
    return 0;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1); 
}