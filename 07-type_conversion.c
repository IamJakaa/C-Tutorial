#include <stdio.h>

int main(){
    double a = 5.67;
    int b = 9;

    int result = (int)a + b;
    printf("%d", result); // Implicit conversion from double to int

    return 0;
}