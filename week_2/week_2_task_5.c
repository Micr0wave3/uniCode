#include<stdio.h>
int main()
{
    int x = 10, a, b;
    a = x;
    printf("Variable a is now %d\n", a);
    b = ++a;
    printf("Variable b is now %d\n", b);
    getch();
    return 0;
}