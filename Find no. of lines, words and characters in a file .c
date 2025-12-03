#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    FILE *file; 
    char fileName[] = "sample.txt"; // Replace with the file name you want to analyze 
    char ch; 
    int lines = 0, words = 0, characters = 0; 
    int inWord = 0; // Flag to track whether currently in a word 
 
    // Open the file for reading 
    file = fopen(fileName, "r"); 
    if (file == NULL) { 
        printf("Unable to open the file for reading.\n"); 
        return 1; 
    } 
 
    while ((ch = fgetc(file)) != EOF) { 
        characters++; 
 
        // Count words and lines 
        if (ch == '\n') { 
            lines++; 
        } 
 
        if (ch == ' ' || ch == '\n' || ch == '\t') { 
            inWord = 0; 
        } else if (inWord == 0) { 
            inWord = 1; 
            words++; 
        } 
    } 
 
    // Close the file 
    fclose(file); 
 
    // Display the counts 
    printf("Number of lines: %d\n", lines); 
    printf("Number of words: %d\n", words); 
    printf("Number of characters: %d\n", characters); 
 
    return 0; 
}