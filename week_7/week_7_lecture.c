#include <stdio.h>

int swap(int*, int*);


int main()
{
    int a, b;
    printf("Define integer a: ");
    scanf("%d", &a);
    printf("\nDefine integer b: ");
    scanf("%d", &b);

    printf("Initial: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("Final: a=%d, b=%d\n", a, b);

    return 0;
}

int swap(int* ptrX1, int* ptrX2)
{
    int temp = *ptrX1;
    *ptrX1 = *ptrX2;
    *ptrX2 = temp;
}
