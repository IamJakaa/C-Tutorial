#include <stdio.h>

//test_condition ? expression1 : expression2;

int main(){
    
    //storing a value in a variable
    int age = 15;

    //assignment using ternary operator
    char operator = '+';
    int num1 = 8;
    int num2 = 7;

    (age >= 18) ? printf("You can vote.\n") : printf("You cannot vote.\n");

    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("Result: %d\n", result);

    return 0;
}