#include <stdio.h>

double average(int *arr, int size);

int main() {
    int balance[] = {10, 20, 30, 17, 50, 200, 100}; 
    int size = sizeof(balance) / sizeof(balance[0]); 
    double avg;
    
    avg = average(balance, size);
    
    printf("Average value is: %.2lf\n", avg);
    getchar();
    
    return 0;
}

double average(int *array_pointer, int size) {
    int i, sum = 0;
    double avg;
    
    for (i = 0; i < size; ++i) {
        sum += array_pointer[i]; 
    }
    
    avg = (double)sum / size; 
    return avg;
}