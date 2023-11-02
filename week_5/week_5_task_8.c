#include <stdio.h>

int main() 
{
    int array[5][3] = {{25, 13, 0}, {29, 8, 0}, {78, 15, 0}, {23, 78, 0}, {53, 10, 0}};

    for(int i = 0; i < 5; i++) {
        array[i][2] = array[i][1] * 3;
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}