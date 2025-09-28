/*
if (test_condition) {
    // block of code to be executed if the condition is true
} else {
    // block of code to be executed if the condition is false
}
*/
#include <stdio.h>
int main(){

    int age = 128;
   
    if(age > 120 || age < 0){
        printf("Invalid age\n");
    }
    else if(age >= 18){
        printf("You are an adult.\n");
    }
    else if(age >= 13){
        printf("You are a teenager.\n");
    }
    else{
        printf("You are a child.\n");
    }

    return 0;
}