#include <stdio.h>

#define BOARD_PER_PACK 5

int main() {
    int avgTimePerRun, numRuns;
    int numBoards;

    printf("Enter the average time for a run in seconds: ");
    scanf("%d", &avgTimePerRun);

    numRuns = 3600 / avgTimePerRun; 

    int inventory[numRuns];

    for(int i = 0; i < numRuns; i++) {
        numBoards = (i + 1) * BOARD_PER_PACK;
        inventory[i] = numBoards;
        printf("Run %d: %d boards stored in total.\n", i + 1, numBoards);
    }

    return 0;
}