// LIBRARIES AND CONSTANTS
#include <stdio.h>
#include <math.h>
#include <complex.h>
#define pi 3.1415
#define DATAFILE "data.txt"
/*===========================================================================================================================================================================*/
int main()
{

// DEFINING ALL VARIABLES WITH APPROPRIATE DATA TYPES
    double s0, s1, s2, s3, s4, s5, s6, s7, s8, vector_c, vector_d, vector_r, theta, alpha, intermediate_vector_variable, discriminant, root_intermediate_variable;
    double complex quadratic_root_1, quadratic_root_2;
    int cand_no_debug, option_choice, option;
/*===========================================================================================================================================================================*/
// WRITING THE CANDIDATE NUMBER AS INDIVIDUAL DIGITS FOR FURTHER CALCULATIONS (COULD BE DONE THROUGH MODULO)
    printf("Input your six-digit Candidate Number: ");
    scanf("%d", &cand_no_debug);

    s0 = cand_no_debug / 100000;
    s1 = (cand_no_debug / 10000) - (s0 * 10);
    s2 = (cand_no_debug / 1000) - (s0 * 100) - (s1 * 10);
    s3 = (cand_no_debug / 100) - (s0 * 1000) - (s1 * 100) - (s2 * 10);
    s4 = (cand_no_debug / 10) - (s0 * 10000) - (s1 * 1000) - (s2 * 100) - (s3 * 10);
    s5 = (cand_no_debug / 1) - (s0 * 100000) - (s1 * 10000) - (s2 * 1000) - (s3 * 100) - (s4 * 10);
/*===========================================================================================================================================================================*/
// INTERACTIVE MENU FOR OPTIONS TEXT
  do {
        printf("\nInteractive Menu:\n");
        printf("1. Additional variable calculation\n");
        printf("2. Vector calculation\n");
        printf("3. Quadratic root calculation\n");
        printf("4. Matrix calculation\n");
        printf("5. File read analyze\n");
        printf("9. Exit\n");
        printf("OptionNo: ");
        scanf("%d", &option);
/*===========================================================================================================================================================================*/
// INTERACTIVE MENU OPTIONS CASES
        switch(option) {
// OPTION 1 - DETERMINING S6, S7 AND S8 VARIABLES
            case 1:
                option_1_calculation(s0, s1, s2, s3, s4, s5, &s6, &s7, &s8);
                break;
// OPTION 2 - VECTOR AND ANGLE OPERATIONS
            case 2:
                option_2_calculation(s0, s1, s2, s3, s4, s5, s6, s7, s8, vector_c, vector_d, vector_r, theta, alpha, intermediate_vector_variable);
                break;
// OPTION 3 - QUADRATIC FUNCTION ROOT CALCULATION
            case 3:
                option_3_calculation(s0, s1, s2, s3, s4, s5, s6, s7, s8, discriminant, root_intermediate_variable, &quadratic_root_1, &quadratic_root_2);
                    printf("\nRoot 1: %.2f%+.2fi\n", creal(quadratic_root_1), cimag(quadratic_root_1)); //PRINT GOES OUTSIDE THE FUNCTION DUE TO CLASHES WITH DEFINING THE USED VARIABLES W/ POINTERS
                    printf("Root 2: %.2f%+.2fi\n", creal(quadratic_root_2), cimag(quadratic_root_2)); //PRINT GOES OUTSIDE THE FUNCTION DUE TO CLASHES WITH DEFINING THE USED VARIABLES W/ POINTERS
                    printf("-------------------------------");
                break;
// OPTION 4 - MATRIX CELL SUBSTITUTION
            case 4:
                option_4_calculation(s0, s1, s2, s3, s4, s5, s6, s7, s8);
                break;
// FILE READ AND ANALYSIS, DONE AS A FUNCTION TO MAKE THE CONSOLE CLEANER
            case 5:
                file_read_analysis(s0, s1, s2, s3, s4, s5, s6, s7, s8);
                break;
// EXIT OPTION - CLOSES THE PROGRAM
            case 9:
                printf("Exiting the program.\n");
                break;
// OPTION IN CASE INPUT DOES NOT EQUAL ONE OF THE OPTIONS
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while(option != 9);
    return 0;
}

/*===========================================================================================================================================================================*/
// FUNCTION FOR OPTION 1
int option_1_calculation(double s0, double s1, double s2, double s3, double s4, double s5, double* s6, double* s7, double* s8)
{
    *s6 = (s0 + s1) / 3; // SIMPLE ALGEBRA
    *s7 = (s0 + s1 + s2 + s3 + s4 + s5) / 6; // AVERAGE
    *s8 = pow(s5, 1.25); // MATH.H POWER FUNCTION
    printf("\ns6 = %lf \ns7 = %lf \ns8 = %lf\n", *s6, *s7, *s8);
    printf("-------------------------------");
    return 0;
}

/*===========================================================================================================================================================================*/
// FUNCTION FOR OPTION 2
int option_2_calculation(double s0, double s1, double s2, double s3, double s4, double s5, double s6, double s7, double s8, double vector_c, double vector_d, double vector_r, double theta, double alpha, double intermediate_vector_variable)
{
    vector_c = s0;
    vector_d = s1;
    theta = (8 * s0 * s1);
    theta = theta * (pi/180); // CONVERSION TO RADIANS
    if(theta > 2*pi)          // IN CASE ANGLE IS ABOVE 2PI (360 DEGREES)  
    {
        theta = theta - (2*pi); // NEW THETA IF ANGLE IS TOO HIGH
    }
    intermediate_vector_variable = pow(vector_c, 2) + pow(vector_d, 2) - (2 * vector_c * vector_d * cos(theta));
    vector_r = sqrt(intermediate_vector_variable);
    printf("\nMagnitude of R = %lf", vector_r);

    alpha = asin((sin(theta) * vector_d) / vector_r); // DETERMINING ALPHA (ANGLE BETWEEN R AND C)
    alpha = (alpha * 180) / pi;
    printf("\nalpha = %lf\n", alpha);
    printf("-------------------------------");
    return 0;
}

/*===========================================================================================================================================================================*/
// FUNCTION FOR OPTION 3
int option_3_calculation(double s0, double s1, double s2, double s3, double s4, double s5, double s6, double s7, double s8, double discriminant, double root_intermediate_variable, double complex *quadratic_root_1, double complex *quadratic_root_2)
// UTILIZING THE COMPLEX.H LIBRARY IN ORDER TO OBTAIN ROOTS OF THE QUADRATIC EQUATION EVEN IF THE DISCRIMINANT IS NEGATIVE WHICH RESULTS IN A SQUARE ROOT OF A NEGATIVE NUMBER REQUIRING
{
    discriminant = s1 * s1- 4 * s0 * s2;
    if(discriminant >= 0) // REAL ROOTS
    {
        *quadratic_root_1 = (-s1 + sqrt(discriminant)) / (2 * s0);
        *quadratic_root_2 = (-s1 - sqrt(discriminant)) / (2 * s0);      
    }
    else // OTHER KINDS OF ROOTS (UNREAL/ SINGLE ROOT)
    {
        double realPart = -s1 / (2*s0);
        double imagPart = sqrt(-discriminant) / (2*s0);
        *quadratic_root_1 = realPart + imagPart * I;
        *quadratic_root_2 = realPart - imagPart * I;
    }
    return 0;
}

/*===========================================================================================================================================================================*/
// FUNCTION FOR OPTION 4
int option_4_calculation(double s0, double s1, double s2, double s3, double s4, double s5, double s6, double s7, double s8)
{
// VARIABLE DEFINITION
    int user_row, user_column;
    double new_userdef_variable;
    double arr[3][3] = {{s0, s1, s2}, {s3, s4, s5}, {s6, s7, s8}};
// CONVERTING ARRAY INTO A 3X3 MATRIX
    printf("-------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");

// PROMPTING USER TO CHANGE COLUMN AND ROW AND 
    printf("What column would you like to change? ");
    scanf("%d", &user_column);
    printf("\nWhat row would you like to change? ");
    scanf("%d", &user_row);
    printf("\nWhat would you like to change it to? ");
    scanf("%lf", &new_userdef_variable);
    printf("-------------------------------\n");

// Check that the user's specified indices are within the bounds of the 3x3 matrix.
    if (user_row < 3 && user_row >= 0 && user_column < 3 && user_column >= 0) {
        double *ptr = &arr[0][0];         //  OBTAIN POINTER TO FIRST ELEMENT IN MATRIX ARRAY
        *(ptr + user_column * 3 + user_row) = new_userdef_variable;        //  UPDATE THE CHOSEN ELEMENT USING POINTER ARITHMETIC
    } 
    else 
    {
        printf("Invalid indices provided, nothing changed.\n");
    }
// PRINT OUT THE UPDATED MATRIX
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------");

    return 0;
}

/*===========================================================================================================================================================================*/
// FUNCTION FOR FILE READ AND FURTHER ANALYSIS
int file_read_analysis(double s0, double s1, double s2, double s3, double s4, double s5, double s6, double s7, double s8)
{
// OPENING AND WRITING DATA.TXT FILE LIKE IN THE SLIDES SHOWN IN LECTURE
    FILE *stream;
    int count = 0, arr[21], sum = 0, pos_nums = 0, odd_nums = 0, negative_sum = 0, negative_sum_cubed = 0;

    stream = fopen(DATAFILE, "r");
    do
    {
        fscanf(stream, "%d", &arr[count]);
        sum = sum + arr[count];
        printf("%d\n", arr[count]);
        count++;
    } 
    while ((fgetc(stream) != EOF) && (count < (sizeof(arr)/sizeof(arr[0]))));
    fclose(stream);

    int max = arr[0]; // ASSUME FIRST ELEMENT TO BE THE MAXIMUM
// THE SORTING ALGORITHM USED HERE ASSUMES THAT THE FIRST NUMBER IS THE LARGEST, SCANNING EVERY VALUE IN THE LIST, LOOKING FOR A NUMBER LARGER THAN THE ONE RECORDED AS THE MAX

// FIRST ELEMENT ALREADY DEFINED THEREFORE START FROM THE SECOND ELEMENT (NOT NECESSARY BUT NICE TO HAVE)
    for (int i = 1; i < 21; ++i) 
    {
        if (arr[i] > max) 
        {
            max = arr[i]; // Update max when a larger value is found
        }
    }
    if (DATAFILE == NULL) {
        printf("Error opening file");
        return 1;
    }

// LOOP FOR THE IF STATEMENTS TO SCAN ALL THE VALUES IN THE .TXT FILE
    for (int i = 0; i < 21; ++i) {
        if (arr[i] > 0) {
            pos_nums++; // Increment when value is positive
        }
        if (arr[i] % 2 != 0) {
            odd_nums++; // Increment when value is odd
        }
        if (arr[i] < 0) 
        {
            negative_sum += arr[i]; // Add the value to sum of negative numbers
        }
    }
    negative_sum_cubed = pow(negative_sum, 3);

// PRINT OUT ALL THE NECASSARY INFORMATION
    printf("\nThe maximum value in the array is: %d\n", max);
    printf("The array contains %d positive values.\n", pos_nums);
    printf("The array contains %d odd values.\n", odd_nums);
    printf("Negative sum: %d\n", negative_sum);
    printf("Negative sum cubed: %d\n", negative_sum_cubed);
    printf("-------------------------------");
    
    return 0;
}