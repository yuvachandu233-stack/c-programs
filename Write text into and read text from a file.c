#include <stdio.h> 
#include <string.h> 
int main() { 
FILE *file; 
char fileName[] = "sample.txt"; // File name 
    // Write text into the file 
    file = fopen(fileName, "w"); 
    if (file == NULL) { 
        printf("Unable to open the file for writing.\n"); 
        return 1; 
    } 
 
    char textToWrite[] = "This is a sample text that we're writing to a file."; 
    fputs(textToWrite, file); 
    fclose(file); 
 
    printf("Text written to the file.\n"); 
 
    // Read text from the file 
    file = fopen(fileName, "r"); 
    if (file == NULL) { 
        printf("Unable to open the file for reading.\n"); 
        return 1; 
    } 
 
    char textFromFile[1000]; // Assuming a maximum of 1000 characters 
    fgets(textFromFile, sizeof(textFromFile), file); 
    fclose(file); 
 
    printf("Text read from the file:\n%s\n", textFromFile); 
 
    return 0; 
}