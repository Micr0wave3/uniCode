#include <stdio.h>

int main()
{
    int array[] = { 100, 200, 300 };
    int *array_pointer;

    array_pointer = array;
    
    printf(" first element: %d (%p)\n", *array_pointer, (void *)array_pointer);
    array_pointer++; 
    
    printf("second element: %d (%p)\n", *array_pointer, (void *)array_pointer);
    
    array_pointer++; 
    printf(" third element: %d (%p)\n", *array_pointer, (void *)array_pointer);

    getchar();
    return 0;
}