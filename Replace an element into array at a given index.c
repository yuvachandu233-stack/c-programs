#include <stdio.h> 
int main()  
{ 
    // Declare an array 
    int arr[]= {1,2,3,4,5}; 
	// Display the original array 
    printf("Original Array:"); 
    for (int i=0;i<5;i++) 
	{ 
        printf("%d",arr[i]); 
    } 
    // Specify the index to replace 
    int index_to_replace =2; 
    // Specify the new value 
    int new_value=10; 
    // Replace the element at the specified index 
    arr[index_to_replace]=new_value; 
    // Display the modified array 
    printf("\nModified Array:"); 
    for (int i=0;i<5;i++)  
    { 
        printf("%d",arr[i]); 
    } 
    return 0; 
}