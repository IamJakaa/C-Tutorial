#include <stdio.h>

int main(){

    // break statement
    /*
    break statement is used to exit from a loop or switch statement
    when break statement is encountered, the loop is terminated and the control is transferred to the statement immediately following the loop
    */

    for(int i = 1; i <= 10; i++){
        if(i == 5){
            break; // when i is 5, the loop will terminate
        }
        printf("%d\n", i);
    }

    // continue statement
    /*
    continue statement is used to skip the current iteration of a loop and move to the next iteration
    when continue statement is encountered, the remaining code in the loop for that iteration is skipped and the control is transferred to the next iteration of the loop
    */

    for(int j = 1; j <= 10; j++){
        if(j == 5){
            continue; // when j is 5, the current iteration will be skipped
        }
        printf("%d\n", j);
    }

   return 0;

}