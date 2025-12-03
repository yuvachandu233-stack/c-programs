#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    int n; 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
 
    // Dynamically allocate memory for the array 
    int *arr = (int *)malloc(n * sizeof(int)); 
 
    if (arr == NULL) { 
        printf("Memory allocation failed. Exiting...\n"); 
        return 1; // Exit the program with an error code 
    } 
 
    // Input elements into the array 
    printf("Enter the elements of the array:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    // Calculate the sum of elements 
    int sum = 0; 
    for (int i = 0; i < n; i++) { 
        sum += arr[i]; 
    } 
 
    printf("Sum of the elements in the array: %d\n", sum); 
// Free the dynamically allocated memory 
free(arr); 
return 0; 
}