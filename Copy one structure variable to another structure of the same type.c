#include <stdio.h> 
 
// Define a structure 
struct Student { 
    char name[50]; 
    int rollNumber; 
    float marks; 
}; 
 
int main() { 
    // Declare two structure variables of the same type 
    struct Student student1, student2; 
 
    // Initialize student1 
    printf("Enter details for student 1:\n"); 
    printf("Name: "); 
    scanf("%s", student1.name); 
    printf("Roll Number: "); 
    scanf("%d", &student1.rollNumber); 
    printf("Marks: "); 
    scanf("%f", &student1.marks); 
 
    // Copy student1 to student2 
    student2 = student1; 
 
    // Display the contents of student2 
    printf("\nStudent 2 (copied from Student 1):\n"); 
    printf("Name: %s\n", student2.name); 
    printf("Roll Number: %d\n", student2.rollNumber); 
    printf("Marks: %.2f\n", student2.marks); 
 
    return 0; 
}