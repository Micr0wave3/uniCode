#include <stdio.h>

void checkAndDisplayNumbers(const int numbers[], int size);
void displayEvenOrOdd(int num);

int main() {
    int numbers[10];
    
    printf("Please enter 10 numbers: \n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    checkAndDisplayNumbers(numbers, 10);
    
    return 0;
}

void checkAndDisplayNumbers(const int numbers[], int size) {
    printf("Even numbers:\n");
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            displayEvenOrOdd(numbers[i]);
        }
    }
    
    printf("Odd numbers:\n");
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 != 0) {
            displayEvenOrOdd(numbers[i]);
        }
    }
}

void displayEvenOrOdd(int num) {
    printf("%d\n", num);
}