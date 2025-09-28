 #include <stdio.h>

 int main(){
    
        // Variable declaration and initialization
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);

    // Demonstrating variable reassignment
    age = 26;
    printf("Next year, Age: %d years\n", age);


    return 0;
 }