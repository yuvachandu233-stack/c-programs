#include <stdio.h> 
#include <stdlib.h> 
 
int main() { 
    FILE *sourceFile, *destinationFile; 
    char sourceFileName[] = "source.txt"; 
	// Change to your source file name 
    char destinationFileName[] = "destination.txt"; 
	// Change to your destination file name 
    char ch; 
	// Open the source file for reading 
    sourceFile = fopen(sourceFileName, "r"); 
    if (sourceFile == NULL) { 
        printf("Unable to open the source file.\n"); 
        return 1; 
    } 
	// Open the destination file for writing 
    destinationFile = fopen(destinationFileName, "w"); 
    if (destinationFile == NULL) { 
        printf("Unable to open the destination file.\n"); 
        fclose(sourceFile); 
        return 1; 
    } 
 
    // Copy the contents from source to destination 
    while ((ch = fgetc(sourceFile)) != EOF) 
	{ 
        fputc(ch, destinationFile); 
    } 
	printf("File contents copied successfully.\n"); 
	// Close the files 
    fclose(sourceFile); 
    fclose(destinationFile); 
	return 0; 
} 