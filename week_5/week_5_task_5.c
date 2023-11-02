#include <stdio.h>
#define MAX_LENGTH 10 

int main() {
    char password[MAX_LENGTH + 1];
    int positions[4]; 

    printf("Enter your password (max length 10): ");
    scanf("%10s", password);

    printf("Enter 4 positions of characters you want to display: ");
    for(int i = 0; i < 4; i++){
        scanf("%d", &positions[i]);
    }

    printf("The characters at your chosen positions are: ");
    for(int i = 0; i < 4; i++){
        if (positions[i] > 0 && positions[i] <= 10) // Make sure positions are within range
            printf("%c ", password[positions[i] - 1]); // array is 0-indexed
        else
            printf("X\n"); 
        }

    return 0;
}