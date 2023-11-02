#include <stdio.h>

int main() {
    int array[5][3] = {{22, 15, 2}, {23, 10, 3}, {56, 42, 4}, {23, 33, 5}, {23, 5, 6}}; 

    for(int i = 0; i < 5; i++) 
    { 
        for(int j = 0; j < 3; j++) 
        { 
            printf("%d ",array[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}