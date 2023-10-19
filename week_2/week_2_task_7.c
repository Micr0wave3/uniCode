#include <stdio.h>

int main()
{
    int hundred = 100;
    char c;
    float blyat = 100.101;

    printf("Storage size for one hundred is: %d\n", sizeof(hundred));
    printf("Storage size for C is: %d\n", sizeof(c));
    printf("Storage size for 100.101 is: %d\n", sizeof(blyat));
    
    getch();
    return 0;
}