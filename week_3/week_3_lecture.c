#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int main()
{
/*	
	int a = 5, b = 6;
	printf("%d == %d result %d \n", a, b, a == b);
	printf("%d > %d result %d \n", a, b, a > b);
	printf("%d < %d result %d \n", a, b, a < b);
	printf("%d != %d result %d \n", a, b, a != b);
	printf("%d >= %d result %d \n", a, b, a >= b);
	printf("%d <= %d result %d \n", a, b, a <= b);
==========================================================
	int a = 5, b = 5, c = 10, result;
	
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	result = (a == b) && (c < b);
	
	printf("(a == b) && (c > b) equals tp %d\n", result);
	result = (a == b) || (c < b);
	
	printf("(a == b) || (c < b) equals to %d \n", result);
	result = !(a == b);
	
	printf("!(a == b) equals to %d \n", result);
==========================================================
	int rest_heart_rate;
	printf("Enter your heart rate: ");
	scanf("%d", &rest_heart_rate);
	if(rest_heart_rate > 56){
		printf("Keep up your exercise program!\n");
	}
	else{
		printf("Your heart is in excellent health! \n");
	}
==========================================================
	float x, y;
	printf("two numbers, x and y\n");
	scanf("%f%f", &x, &y);
	if (x==y){
		printf("%1f and %1f are equal", x, y);
	}
	else{
		printf("%1f and %1f are not equal", x, y);
	}
==========================================================
	int noiz;
	printf("input the decibel level: \n");
	scanf("%d", &noiz);
	
	if(noiz <= 50){
		printf("It is quiet\n");
	}
	else if(noiz > 50 && noiz < 71){
		printf("It is intrusive\n");
	}
	else if(noiz > 71 && noiz < 91){
		printf("It is annoying\n");
	}
	else if(noiz > 91 && noiz < 111){
		printf("It is very annoying\n");
	}
	else{
		printf("It is uncomfortably loud");
	}
=========================================================	
	float x, res, rad2deg;
	printf("Enter value x (-1 =< x <= 1)\t");
	scanf("%f", &x);
	rad2deg = 180 / pi;
	res = acos(x) * rad2deg;
	printf("The arc cosine of %.2f is %.2f degrees", x, res);
========================================================
	float x, res;
	printf("Enter value x: ");
	scanf("%f", &x);
	res = exp(x);
	printf("The exponential value of %.3f is %.3f", x, res);
========================================================
*/
	float x, y;
	printf("Raising x to the power y, enter values x and y: \n");
	scanf("%f%f", &x, &y);
	printf("%f to the power of %f is %f\n", x, y, pow(x, y));

	getch();
	return 0;
}










