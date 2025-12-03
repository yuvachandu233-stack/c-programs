#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char *argv[]) { 
    if (argc != 3) { 
        printf("Usage: %s <Student Name> <Marks>\n", argv[0]); 
        return 1; 
    } 
 
    // Read student name and marks from command line arguments 
    char *name = argv[1]; 
    float marks = atof(argv[2]); 
 
    // Display student details 
    printf("Student Name: %s\n", name); 
    printf("Marks: %.2f\n", marks); 
 
    return 0; 
}