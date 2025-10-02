#include <stdio.h>

void greet(){
    printf("Good Morning\n");
}

//Function parameters and arguments

void calculateSquare(int num){
    int square = num * num;
    printf("Square of %d is %d\n", num, square);
}

void addNumbers(int a, int b){
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

//Function Return Type
int add(int x, int y){
    int sum = x + y;
    return sum;
    printf("executed after return statement\n"); // This line will not be executed
}

int main(){

    greet(); // function call
    printf("print after function call\n");

    calculateSquare(5); // function call with argument

    addNumbers(3, 7); // function call with arguments

    int result = add(10, 20); // function call with return value
    printf("Returned sum is %d\n", result);

    return 0;
}