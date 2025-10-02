#include <stdio.h>
#include <math.h> // Include math header file for mathematical functions
#include <ctype.h> // Include ctype header file for character handling functions


int main(){
    
    // Mathematical functions from math.h

    int number = 25;
    printf("Square root of %d is %.2f\n", number, sqrt(number)); // Using sqrt function from math.h

    int num = 27;
    printf("Cube root of %d is %.2f\n", num, cbrt(num)); // Using cbrt function from math.h


    int a = 5, b = 2;
    double result = pow(a, b); // Using pow function from math.h to calculate a^b
    printf("%d raised to the power of %d is %.2f\n", a, b, result);

    // Character handling functions from ctype.h
    char alpha = 'e';
    toupper(alpha); // Convert to uppercase
    printf("Uppercase of %c is %c\n", alpha, toupper(alpha));

    char beta = 'F';
    tolower(beta); // Convert to lowercase
    printf("Lowercase of %c is %c\n", beta, tolower(beta));

    return 0;
}