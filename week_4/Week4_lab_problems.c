/* FIXED CODE EXCERCISE 1
#include <stdio.h>

int main()
{
    int n, i;
    int total = 0;
    printf("Enter the natural number, N:\n");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        total = n + total;
    }
    printf("Sum of first %d natural number = %d\n",n,total);
    system("pause"); 

    getchar();
    return 0;
} 
*/

// /* exercise 2: 
//	Write a C code which will print Square, Cube and Square Root of all Numbers from 1 to N, N will be input by user.
/* WORKING CODE EXCERCISE 2
#include <stdio.h>
#include <math.h>

int main()
{
    float square, cube, root;
    int n, i;
    printf("give value to 'n':\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
       // printf("%d,", i);
        printf("Square of %d is %d\n", i, i*i);
        printf("Cube of %d is %d\n", i, i*i*i);
        printf("Square root of %d is %f\n", i, sqrt((i)));
    }
}
*/



 /* exercise 3: 
//	Write a C code which will Display A to Z and a to z on screen.
// Hint: literals are available in C, such that you can use the characters 'A' as initial value and 'Z' 
// as final values for a condition statement. 
// hint: for(i='A', i<='Z', i+)

// WORKING CODE EXCERCISE 3
#include <stdio.h>
 
int main()
{
    char i;
 
    printf("Upper case characters:\n");
    for(i='A'; i<='Z'; i++)
        printf("%c ",i);
 
    printf("\nLower case characters:\n");
    for(i='a'; i<='z'; i++)
        printf("%c ",i);
    getch(); 
    return 0;
}
//*/



/* exercise 4: 

// Using switch case statement to display weekday name:
//(Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)
// according to given weekday number weekday number (0-6). 
Hint: remember the format 

// solution CODE SOLVED!!! TASK 4 DONE
#include<stdio.h>
int main()
{
    int day;
    
    printf("Enter a number between 0 and 6 to get weekday: ");
    scanf("%d", &day);
    
    switch (day)
    {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("LOUD BUZZER SOUND!!! IT'S ONE THROUGH SIX NOT SOMETHING ELSE\n");
            break;
    }

    return 0;
}
*/


//*/



 /* Exercise 5

//Write a C program to print all numbers between 1 to 200 which divided by 5 and the remainder will be 4, also show how many these numbers are there.
// Solution SOLVED CODE PIECE?

#include <stdio.h>
int main() {
	int x=5, i, j=0;
	for(i = 1; i <= 200; i++)
	{
		if((i%x) == 4) {
			printf("%d\n", i);
			j++;
		}
	}
	printf("There are %d numbers \n", j);
	getch();
	return 0;
} // */



 /* Exercise 6
 // You can decide who to bet in the Tug of War tournament
 // Before each match, the names and weights of each player are presented alternating by teams
 // (team 1 player 1, team 2 player 1, team 1 player 2, team 2 player 2, and so on). 
 // both teams have the same number of players. You can record the weight of the players as they 
 // are presented
 // the program should read first the number of member in the int (INT), then read the players weight in kilograms
 // alternating by team. 
 // After calculating the total weight of each team, the program should display " Team x has an advantage"
 // x = number of the team (1 or 2) for the team with more weight. 
 
 // Example: 
 // we have 2 teams with 4 players. weights on Team 1 are: 110, 113, 112, and 117
 // weights on Team 2 are: 106, 102, 121, and 111. Total weight of team 1 = 452 kg, total weight team 2 =  440kg.
 // team 1 has an advantage
 
 // *******  input
 // 	4
 // 	110
 // 	106
 // 	113
 // 	102
 // 	112
 // 	121
 // 	117
 // 	111 
 
 //**********   output
 // Team 1 has an advantage 
 // Total weight for team 1: 452
 // Total weight for team 2: 440
//
*/
/*

#include<stdio.h>
int main()
{
    int players, i, weight1, weight2;
    int totalWeight1 = 0, totalWeight2 = 0;
    printf("How many players per team?:\n");
    scanf("%d",&players);
   
    for(i = 1; i <= players; i++)
    {
        scanf("%d",&weight1);
        scanf("%d",&weight2);
        totalWeight1 += weight1;
        totalWeight2 += weight2;
    }
   
    if (totalWeight1 > totalWeight2)
    {
        printf("Team 1 has an advantage\n");
    }
    else
    {
        printf("Team 2 has an advantage\n");
    }
   
    printf("Total weight for team 1: %d\n", totalWeight1);
    
    printf("Total weight for team 2: %d\n", totalWeight2);
   
    return 0;
} 
*/






 /* Exercise 7

// In a screw factory the screws are packed and send to the storage room in boxcars. You are responsible for a rail
// conveyor that consists of several boxcars. 
// You start the train and realise that some boxcars are overloaded and weigh too much on the rails, but others 
// are really light. You stop the train an no need to spread the weight more evenly so each boxcar has the same 
// weight but keeping the total weight constant. YOU need to write a program to help you with the 
// weight distribution
// The program has to read first the number of cars to be weighed followed by the weights of the cars. 
// then it will calculate and display how much weight need to be added or subtracted  from each car, such that 
// every car has the same weight without changing the total weight. The addition or subtractions  of weights 
//  will be displayed with one decimal place. 
// 
// 

//example: 
//	**********   input YOU CAN OMIT PRINTF STATEMENTS HERE 
//			5
//			40.0
//			12.0
//			20.0
//			5.0
//			33.0
//	*************  OUTPUT
//			-18.0
//			10.0
//			2.0
//			17.0
//			-11.0
//			
	

int main{






	getch();
    return 0;
} //   */
#include<stdio.h>

#define MAX_BOXES 100

int main() {
    int numBoxes, i;
    float totalWeight = 0, avgWeight, boxWeights[MAX_BOXES], weightDiff[MAX_BOXES];

    printf("Number of boxes: ");
    scanf("%d", &numBoxes);

    printf("\nBox weights: s");
    for(i=0; i<numBoxes; i++){
        scanf("%f", &boxWeights[i]);
        totalWeight += boxWeights[i];
    }

    avgWeight = totalWeight / numBoxes;

    printf("The average weight is: %.1f\n", avgWeight);

    for(i=0; i<numBoxes; i++){
        weightDiff[i] = avgWeight - boxWeights[i];
        printf("Box %d needs %.1f %s of weight\n", i+1, weightDiff[i]<0 ? -weightDiff[i] : weightDiff[i], weightDiff[i]<0 ? "removed" : "added");
    }

    return 0;
}