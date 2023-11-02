#include <stdio.h>

int main() 
{
    int vector[20];

    for (int i = 0; i < 20; i++) 
    {
        printf("Enter value for element %d of the array: ", i);
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < 20; i++) 
    {
        printf("Element number: %d, Value: %d\n", i, vector[i]);
    }

    return 0;
}