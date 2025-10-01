#include <stdio.h>

int main(){
    // while loop syntax
    /*
    while(condition){
        // code to be executed as long as condition is true
    }
    */

    int count = 1;

    while(count < 5){
        printf("While loop in C\n");
        printf("Count value: %d\n", count);
        count = count + 1;
        //break; // to avoid infinite loop
    }

    //example while loop Calculator
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);

    int i = 1;

    while(i <= 10){
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }



    //do while loop syntax
    /*
    do{
        // code to be executed
    }while(condition);
    */

    int num, j = 1;

    do{
        printf("%d x %d = %d\n", number, j, number * j);
        j++;
    }while(j <= 10);

   return 0;
}