 /*
 int       (4 bytes)  | %d for printing
 double    (8 bytes)  | %lf for printing
 float     (4 bytes)  | %f for printing
 char      (1 byte)   | %c for printing
 */
 
 #include <stdio.h>

 int main(){

    // Integer data type
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    // Float data type
    float pi = 3.14;
    float radius = 5.0;
    float area = pi * radius * radius;
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);

    // Character data type
    char initial = 'C';
    printf("Initial: %c\n", initial);

    // Double data type
    double largeNum = 123456.789012;
    printf("Large Number: %.6f\n", largeNum);

    // Boolean data type (using int as C does not have a built-in boolean type)
    int isTrue = 1; // 1 for true, 0 for false
    if (isTrue) {
        printf("Boolean value is true\n");
    } else {
        printf("Boolean value is false\n");
    }

    return 0;
 }