#include <stdio.h> 
// Function to swap two numbers using call by value 
void swapByValue(int a, int b) { 
    int temp = a; 
    a = b; 
    b = temp; 
} 
 
// Function to swap two numbers using call by reference 
void swapByReference(int *a, int *b) { 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
int main() { 
    int num1, num2; 
 
    printf("Enter two numbers: "); 
    scanf("%d %d", &num1, &num2); 
 
    // Swap by value 
    printf("Before swapping by value: num1 = %d, num2 = %d\n", num1, num2); 
    swapByValue(num1, num2); 
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2); 
 
    // Swap by reference using pointers 
    printf("Before swapping by reference: num1 = %d, num2 = %d\n", num1, 
num2); 
    swapByReference(&num1, &num2); 
printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, 
num2); 
return 0; 
} 