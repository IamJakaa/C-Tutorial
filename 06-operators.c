#include <stdio.h>

int main(){
    // Arithmetic Operators
    int a = 10, b = 5;
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Relational Operators
    printf("%d > %d: %d\n", a, b, a > b);
    printf("%d < %d: %d\n", a, b, a < b);
    printf("%d >= %d: %d\n", a, b, a >= b);
    printf("%d <= %d: %d\n", a, b, a <= b);
    printf("%d == %d: %d\n", a, b, a == b);
    printf("%d != %d: %d\n", a, b, a != b);

    // Logical Operators
    int x = 1, y = 0;
    printf("%d && %d: %d\n", x, y, x && y);
    printf("%d || %d: %d\n", x, y, x || y);
    printf("!%d: %d\n", x, !x);

    // Assignment Operators
    int c = 20;
    c += 5; // c = c + 5
    printf("c after += 5: %d\n", c);
    c -= 3; // c = c - 3
    printf("c after -= 3: %d\n", c);
    c *= 2; // c = c * 2
    printf("c after *= 2: %d\n", c);
    c /= 4; // c = c / 4
    printf("c after /= 4: %d\n", c);
    c %= 3; // c = c % 3
    printf("c after %%= 3: %d\n", c);

    return 0;
}