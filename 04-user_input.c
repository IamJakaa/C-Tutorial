 #include <stdio.h>
 
 int main(){
    
   //Example 1: Reading and printing an integer

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("%d\n", age);

   //Example 2: Reading and printing a double and Character
   double number;
   char alphabet;

   printf("Enter a double value: ");   
   scanf("%lf", &number);

   printf("Enter a character: ");
   scanf("\n%c", &alphabet); 

   printf("You entered: %.2lf and %c\n", number, alphabet);

   
   return 0;

    
 }