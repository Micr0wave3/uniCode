/*
#include <stdio.h>

int main()
{
    unsigned int sum = 0;

    for(unsigned int number = 2; number <= 100; number += 2)
    {
        sum += number;
    }
    printf("sum is %u \n", sum);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int x[100];         //reserves 100 for intege array x
    double y[100];      //same thing but for double array y
    int array[3];
    array[0] = 18;
    array[1] = 27;
    array[2] = 8;
    printf("First element is %d, second is %d, third is %d", array[0], array[1], array[2]);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int array[10] = {23, 04, 5, 2, 10, 1, 3, 42, 0, 1};
    int a = 2;
    int b = 5;
    printf("array[a] = %d\n", array[a]);
    printf("array[a+b] = %d", array[a+b]);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int n[] = {21, 34, 54, 6, 97, 32, 4, 5, 5, 67};
    int length = sizeof(n)/sizeof(n[0]);

    printf("%s %13s\n", "Element", "Value");
    unsigned int i;
    for(i=0; i<length; ++i)
    {
        printf("%3u%13d \n", i, n[i]);
    }
    return 0;
}
*/
/*
#include<stdio.h>f
int main()
{
    int ages[10], i;

    for(i=0;i<10;i++)
    {
        printf("Enter Age: ");
        scanf("%d",&ages[i]);
    }
    int maxAge = 0;
    
    for(i=0;i<10;i++)
    {
        if (ages[i]>maxAge)
            maxAge = ages[i];
    }
    printf("The maximum age is %d\n", maxAge);
    printf("age differences with eldest person:\n");
    for (i=0;i<10;i++)
    {
        printf("%d:%d\n",ages[i],maxAge-ages[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    char word[4];
    printf("enter a word with 3 letters: \t");
    scanf("%s", word);
    printf("The word read is: %s\n", word);
    getch();
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    char word[30];
    printf("Enter a word: ");
    scanf("%s", word);

    int i = 0;
    while (word[i] != '\0' && i<30)
    {
        i++;
    }
    printf("%s has word length %d.\n", word, i);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int row, col, row_no = 5, col_no = 2;
    int array[5][2] = {{1, 12}, {2, 22}, {3, 32}, {4, 42}, {5, 52}};

    for(row = 0; row < row_no; row++)
    {
        for(col = 0; col < col_no; col++)
        {
            printf("array[%d][%d] = %d\n", row, col, array[row][col]);
        }
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    b = a++;
    a = ++b;
    printf("result is %d", a++);
    return 0;
}