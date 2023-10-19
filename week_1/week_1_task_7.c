#include <stdio.h>
#define maxiter 128

main()
{
    int i =  0, j;
    while (i <= maxiter)
    {
        i = ++i;
        printf("2X %d = %d\n", i, 2*i);
    }
    getchar();
}