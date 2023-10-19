#include<stdio.h>
int main()
{
    int x = 10, c, d;
    c = x;
    printf("Variable c is now %d\n", c);
    d = --c;
    printf("Variable d is now %d\n", d);
    getch();
    return 0;
}