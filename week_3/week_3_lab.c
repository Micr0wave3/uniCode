/* EXERCISE 1

#include <stdio.h>
int main(void) {
    int sunny = 0; // remember here can be true or false, o or 1. 
    int holidays = 0;
    int sunORholidays = sunny || holidays; // remember || = OR  
    if(sunORholidays){
        printf("It is great: it is sunny OR I am on holidays OR both!\n");
    }else{
        printf("I Need some distraction: it is NEITHER sunny NOR am I on vacation!\n");
    }
	getch();
    return 0;
}
*/
//=====================================================================================
/* EXERCISE 2

#include<stdio.h>
int main(){
	int mark; //initialise
	printf("What is your grade?: \n");
	scanf("%d", &mark);
	if(mark >= 40){
		printf("You passed!");
	}
	else{
		printf("You didn't pass.");
	}
	getch();
	return 0;
}
*/
//=====================================================================================
/* EXERCISE 3

#include<stdio.h>
int main(){
	int mark ; // initialize the variable
	printf("What is your grade?: \n");
	scanf("%d", &mark);
	if (mark >= 70){
		printf("1st class\n");
    	printf("Well done!\n");
	}
	else if(mark >=60 && mark < 70){
		printf("2:1\n");
    	printf("Well done!\n");
	}
	else if(mark >= 50 && mark < 60){
		printf("2:2\n");
    	printf("Well done!\n");
	}
	else if(mark >= 40 && mark < 50){
		printf("3rd class\n");
    	printf("Well done!\n");
	}
	else{
		printf("fail");
	}
	getch();
	return 0;
}
*/
//=====================================================================================
/* EXERCISE 4

#include <stdio.h>
int main()
{
   int mark;

   printf("Enter the mark ");
   scanf("%d",&mark);

   printf("The mark is %d, ",mark);
   
   if (mark > 100 || mark < 0)
   {
   printf("It is a wrong mark");
   }
   else if (mark >= 70){
		printf("1st class\n");
    	printf("Well done!\n");
	}
	else if(mark >=60 && mark < 70){
		printf("2:1\n");
    	printf("Well done!\n");
	}
	else if(mark >= 50 && mark < 60){
		printf("2:2\n");
    	printf("Well done!\n");
	}
	else if(mark >= 40 && mark < 50){
		printf("3rd class\n");
    	printf("Well done!\n");
	}
	else{
		printf("fail");
	}
    getch();
    return(0);
}
*/

//=====================================================================================
/* EXERCISE 4

int main() {
	int age;
	printf("Input an age: \n"); 
	scanf("%d", &age);
	if(age >=18 && age <= 24) 
	{
		printf("Range [18, 24]\n");
	} 
	else if(age >=25 && age <= 34) 
	{
		printf("Range [25, 34]\n");
	} 
	else if(age >=35 && age <= 44) 
	{
		printf("Range [35, 44]\n");
	} 
	else if(age >=45 && age <= 54) {
		
		printf("Range [45,54]\n");
	} 
	else if(age >=55 && age <= 64) {
		
		printf("Range[55,64]\n");
	} 
    else if(age < 18) {
		
		printf("Range [<18]\n");
	} 
    else 
	{
	printf(" Range > 65\n");
	}	
	getch();
	return 0;
}
*/

//=====================================================================================
/* EXERCISE 6

#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, d;

	printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);

	c = pow(a, b); 
	d = atan(c);

	printf("Value %g^%g  = %g\n", a, b, c);  // remember %g represents decimal of the smalles length  
	printf("Value atan(%g^%g)  = %g\n", a,b,d);
	getch();
	return 0;
}
*/	

//=====================================================================================
/* EXERCISE 7

#include <stdio.h>
#include <math.h>

int main() 
{
	int year;

	printf("Enter a year\n");
	scanf("%d",&year);

	if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)) // complete the logic and relationa operators 
	{
		printf("This year is a leap year\n");
	} 
	else
	{ 
		printf("This year is not a leap year");
	}
	getch();
	return 0;
}
*/

/* Exercise 8 COMMENT THIS LINE !!!!!

		// 	Ask user to enter two angles x and y in radians, then show the z value 
		//				z=ln^x+log_10^y, when x>y>0 (log base 10 of y)
 		// 				z=sin(x)+cos(y), when x<y
//=====================================================================================
/* EXERCISE 8
#include <stdio.h>
#include <math.h>

int main()
{
   	float x, y;
	double z;
	
	printf("Input the first angle of x in radians: \n");
    scanf("%f", &x);

    printf("Input the second angle of y in radians: \n");
    scanf("%f", &y);

	printf("Your chosen variables are x = %f, and y = %f\n", x, y);

    if (x > y && y > 0) 		// you can use two logic operator here
    {
		printf("x is greater than y\n");
		z = log10(x) + log10(y); 
		printf("z=log10(%g)+log10(%g)=%g\n",x,y,z);
    }
    else if (x < y)
    {
	z = sin(x) + cos(y);
	printf("x is less than or equals y\n");
    printf("z=sin(%g)+cos(%g)=%g\n",x,y,z);}
    else
    {
	printf("x is greater than y, but at least one of values <=0 ");
    }
    getch();
    return 0;
}
*/