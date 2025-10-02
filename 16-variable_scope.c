#include <stdio.h>

// Variable Scope in C
void addNumbers(int a, int b){
    int sum = a + b; // 'sum' is a local variable to this function
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

// Global variable
int globalVar = 100; // 'globalVar' is a global variable

int main(){

    addNumbers(5, 10); // function call
    printf("Global variable value is %d\n", globalVar); // Accessing global variable


    return 0;
}