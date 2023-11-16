#include <stdio.h>

// function declaration //
double average(int *arr, int size);

int main() {
    // an int array with 7 elements
    int balance[] = {10, 20, 30, 17, 50, 200, 100}; // array
    int size = sizeof(balance) / sizeof(balance[0]); // Calculate the size of the array
    double avg;
    
    // pass pointer to the array as an argument
    avg = average(balance, size);
    
    // output the returned value //
    printf("Average value is: %.2lf\n", avg);
    getchar();
    
    return 0;
}

double average(int *array_pointer, int size) {
    int i, sum = 0;
    double avg;
    
    for (i = 0; i < size; ++i) {
        sum += array_pointer[i]; // Add each element to sum
    }
    
    avg = (double)sum / size; // Calculate the average as a double
    return avg;
}