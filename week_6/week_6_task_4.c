#include <stdio.h>

#define SIZE 10

int sumOfArray(const int arr[], int size);

int main() {
    int numbers[SIZE]; 
    int sum; 
    
    printf("Please enter 10 numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    sum = sumOfArray(numbers, SIZE);

    printf("The sum of the integers is: %d\n", sum);

    return 0;
}

int sumOfArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}