#include <stdio.h>

int main()
{
    int array[] = { 100, 200, 300 };
    int *array_pointer; // Changed to a pointer to int, because we want to point to the elements in the array.

    array_pointer = array; // Initialize the pointer to the start of the array.
    
    // Print the first element of the array using the pointer.
    printf(" first element: %d (%p)\n", *array_pointer, (void *)array_pointer);
    // Increment the pointer to point to the next element.
    array_pointer++; 
    
    // Print the second element of the array using the pointer.
    printf("second element: %d (%p)\n", *array_pointer, (void *)array_pointer);
    // Increment the pointer again to point to the next element (no extra line needed).
    
    array_pointer++; // Increment the pointer again to point to the third element.
    // Print the third element of the array using the pointer.
    printf(" third element: %d (%p)\n", *array_pointer, (void *)array_pointer);

    getchar(); // Wait for user input before closing the program.
    return 0;
}