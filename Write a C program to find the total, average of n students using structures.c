#include <stdio.h> 
// Define a structure for student information 
struct Student { 
char name[50]; 
int rollNumber; 
float marks; 
}; 
 
int main() { 
    int n; 
 
    printf("Enter the number of students: "); 
    scanf("%d", &n); 
 
    // Declare an array of structures to store student information 
    struct Student students[n]; 
 
    // Input student information 
    for (int i = 0; i < n; i++) { 
        printf("Enter details for student %d:\n", i + 1); 
        printf("Name: "); 
        scanf("%s", students[i].name); 
        printf("Roll Number: "); 
        scanf("%d", &students[i].rollNumber); 
        printf("Marks: "); 
        scanf("%f", &students[i].marks); 
    } 
 
    // Calculate the total marks and average marks 
    float totalMarks = 0.0; 
    for (int i = 0; i < n; i++) { 
        totalMarks += students[i].marks; 
    } 
float averageMarks = totalMarks / n; 
printf("Total marks of all students: %.2f\n", totalMarks); 
printf("Average marks of all students: %.2f\n", averageMarks); 
return 0; 
}