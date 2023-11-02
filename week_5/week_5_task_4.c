#include <stdio.h>
#define MAX_LENGTH 1000 

int main() {
    char str[MAX_LENGTH]; 
    int count = 0; 
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
//fgets reads a line , stops when end of user input string is achieved

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\0' && str[i] != '\n')
            count++;
    }

    printf("The string has %d characters.\n", count);

    return 0;
}