#include <stdio.h> 
#include <math.h> 
 
int main() { 
    double number, squareRoot; 
 
    // Input the number 
    printf("Enter a number: "); 
    scanf("%lf", &number); 
 
    // Calculate the square root 
    if (number >= 0) { 
        squareRoot = sqrt(number); 
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot); 
    } else { 
        printf("Invalid input. Square root is not defined for negative numbers.\n"); 
    } 
 
    return 0; 
}