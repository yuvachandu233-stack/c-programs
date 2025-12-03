#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char *argv[]) { 
    if (argc != 4) { 
        printf("Usage: %s <InputFile1> <InputFile2> <OutputFile>\n", argv[0]); 
        return 1; 
    } 
 
    FILE *file1, *file2, *outputFile; 
    char *inputFileName1 = argv[1]; 
    char *inputFileName2 = argv[2]; 
    char *outputFileName = argv[3]; 
    char ch; 
 
    // Open the first input file for reading 
    file1 = fopen(inputFileName1, "r"); 
    if (file1 == NULL) { 
        printf("Unable to open the first input file.\n"); 
        return 1; 
    } 
 
    // Open the second input file for reading 
    file2 = fopen(inputFileName2, "r"); 
    if (file2 == NULL) { 
        printf("Unable to open the second input file.\n"); 
        fclose(file1); 
        return 1; 
    } 
 
    // Open the output file for writing 
    outputFile = fopen(outputFileName, "w"); 
    if (outputFile == NULL) { 
        printf("Unable to open the output file.\n"); 
        fclose(file1); 
        fclose(file2); 
        return 1; 
    } 
 
    // Copy the contents from the first input file to the output file 
    while ((ch = fgetc(file1)) != EOF) { 
        fputc(ch, outputFile); 
    } 
 
    // Copy the contents from the second input file to the output file 
    while ((ch = fgetc(file2)) != EOF) { 
        fputc(ch, outputFile); 
    } 
 
    printf("Files merged successfully.\n"); 
 
    // Close the files 
    fclose(file1); 
    fclose(file2); 
    fclose(outputFile); 
 
    return 0; 
}