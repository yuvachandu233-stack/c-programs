#include <stdio.h> 
#include <ctype.h> 
void convertToLowercase(char str[])  
{ 
for (int i = 0; str[i] != '\0'; i++)  
{ 
        str[i] = tolower(str[i]); 
    } 
} 
void convertToUppercase(char str[])  
{ 
for (int i = 0; str[i] != '\0'; i++)  
{ 
        str[i] = toupper(str[i]); 
    } 
} 
void toggleCase(char str[]) { 
    for (int i = 0; str[i] != '\0'; i++) { 
        if (islower(str[i])) { 
            str[i] = toupper(str[i]); 
        } else if (isupper(str[i])) { 
            str[i] = tolower(str[i]); 
        } 
    } 
} 
void sentenceCase(char str[])  
{ 
    int i = 0; 
 
while (str[i] != '\0')  
{ 
        // Convert the first character to uppercase 
        if (i == 0 || (i > 0 && (str[i - 1] == '.' || str[i - 1] == '?' || str[i - 1] == '!'))) { 
            str[i] = toupper(str[i]); 
        } else { 
            str[i] = tolower(str[i]); 
        } 
 
        i++; 
    } 
} 
int main()  
{ 
    char sentence[] = "This is a Sample Sentence. It contains Multiple Sentences!"; 
 
    printf("Original Sentence: %s\n", sentence); 
	convertToLowercase(sentence); 
    printf("Lowercase: %s\n", sentence);    convertToUppercase(sentence); 
    printf("Uppercase: %s\n", sentence); 
 
    toggleCase(sentence); 
    printf("Toggle Case: %s\n", sentence); 
 
    sentenceCase(sentence); 
    printf("Sentence Case: %s\n", sentence); 
	return 0; 
}