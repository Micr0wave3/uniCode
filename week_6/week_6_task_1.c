#include <stdio.h>

#define MAX_STRING_SIZE 20

void printStringAndSize(char c[], size_t size);

int main() {
    char c[MAX_STRING_SIZE] = {0};
    size_t size;

    printf("Enter a string (max 19 characters): ");
    scanf("%19s", c); 

    size = strlen(c);

    printStringAndSize(c, size);

    return 0;    
}

void printStringAndSize(char c[], size_t size) {
    printf("String: %s\n", c);
    printf("Size of string: %d\n", size);
}