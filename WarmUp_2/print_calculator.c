#include <stdio.h>
#include <stdlib.h>

int main() {
    int first, second, addition, subtract, multiply, divide;

    printf("Enter two integers\n");
    scanf("%d%d", &first, &second); 

    addition = first + second;
    subtract = first - second; 
    multiply = first * second; 

    divide = first / second;

    printf("Sum = %d\n", addition);
    printf("Difference = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);
    printf("Division = %d\n", divide);
    return 0; 
}