#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define LEN 50 
#define N_STUD 2 
  
typedef struct stud{ 
  char name[LEN+1]; 
  unsigned int id; 
  float average; 
}stud_t; 
  
  
int main() { 
  FILE *fp; 
  stud_t student[N_STUD]; 
  int i; 
  char row[LEN+1]; 
  unsigned int n_stud; 
  
  strcpy(student[0].name, "Steven"); 
  student[0].id = 120000; 
  student[0].average = 25.5; 
  
  strcpy(student[1].name, "Julia"); 
  student[1].id = 120001; 
  student[1].average = 28.5; 
  
  fp = fopen("out.bin", "w"); /* Open the file for writing */ 
  if (fp == NULL){ 
    printf("Error: file out.bin cannot be opened\n"); 
    exit(1); 
  } 
  
  
  /* Write the file */ 
  /* NOTE 2: a binary file sometimes cannot be readable  
     correctly in a PC that it is not the one which generates it,  
     because, for instance, integer numbers can be coded with a 
     different number of bytes. 
  */ 
  
  /* Write in binary all the data contained in the structure */ 
  fwrite(student, sizeof(stud_t), N_STUD, fp);  
  
  /* DIMENSION OF THE GENERATED FILE 
     The dimension of the generated file will be: 
     n_stud*sizeof(stud_t) 
     in the case of the computer used to test the program: 
     2*60 = 120 byte 
   */ 
  
  fclose(fp); /* Close the file */ 
  
  
  
  fp = fopen("out.bin", "r"); /* Open the file for reading */ 
  fp = fopen("out.bin", "r"); /* Open the file for reading */ 
  if (fp == NULL){ 
    printf("Error: file out.bin cannot be opened\n"); 
    exit(1); 
  } 
  
  /* Read the file */ 
  n_stud = 0; 
  while( fread(&student[n_stud], sizeof(stud_t), 1, fp) == 1 ) { 
    n_stud++; 
  } 
  
  fclose(fp); /* Close the file */ 
  
  
  /* Print the read records */ 
  for (i=0; i<n_stud; i++) { 
    printf("%s %d %f\n", student[i].name, student[i].id, student[i].average); 
  } 
  return 0; 
} 