#include <stdio.h>

int main(){
    // for loop syntax
    /*
    for(initialization; condition; increment/decrement){
        // code to be executed
    }
    */
   //Example 1
   for(int i = 0; i < 10; i++){
        printf("Hello, World!\n");
   }


   //Example 2
    for(int count = 1; count < 5; count = count + 1){
        printf("For loop in C\n");
        printf("Count value: %d\n", count);
    }

    //example for loop Calculator
    int number;
    printf("\nEnter the number:\n ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }

   return 0;
}
