#include <stdio.h>
// Declaring addition function
int addition(int a, int b){
    int sum = a + b;
    return sum;
}
// Declaring subtraction function
int subtract(int a, int b){
    int difference = a - b;
    return difference;
}
// Declaring multiplication function
int multiply(int a, int b){
    int multiply = a * b;
    return multiply;
}
// Declaring division function
float division(float a, float b){
    float divide = a / b;
    return divide;
}
// Declaring modulus function
float mod(int a, int b){
    int rem = a % b;
    return rem;
}
int main(){
    int num1, num2;
    
    // Asking for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Displaying output
    printf("Arithmetic operations on %d and %d: \n", num1, num2);
    printf("Addition: %d\n", addition(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    printf("Division: %f\n", division(num1, num2));
    printf("Modulus: %d\n", mod(num1, num2));
    return 0;
}