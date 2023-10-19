#include <stdio.h>

int main()
{
    float pi, perimeter, area, radius;
    pi = 3.14158;

    printf("input radius of a circle to get perimeter and area:\n");
    scanf("%f", &radius);
    perimeter = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Perimeter of the circle is: %f\n", perimeter);
    printf("Area of the circle is: %f\n", area);

    getch();
    return 0;
}