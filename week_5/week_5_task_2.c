#include <stdio.h>

int main() {
    int elements, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &elements);

    float array[elements]; 

    for (i = 0; i < elements; i++) {
        printf("Enter value for element %d of the array: ", i);
        scanf("%f", &array[i]);
    }

    for (i = 0; i < elements; i++) {
        sum += array[i];
    }

    average = sum / elements;

    printf("Sum of the array elements: %f\n", sum);
    printf("Average of the array elements: %f\n", average);

    return 0;
}