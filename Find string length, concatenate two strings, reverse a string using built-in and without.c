#include<stdio.h> 
int main() 
{ 
    char arr[30],s1[10],s2[10],s3[10]; 
    int opt,i=0,j,len=0; 
    printf("Enter any option\n"); 
    printf("1: Find out length of the string\n"); 
    printf("2: Concatenate of the two string\n"); 
    printf("3: Reverse of the string\n"); 
    printf("4: Copy of the string\n"); 
    printf("Enter the choice\n"); 
    scanf("%d",&opt); 
    switch(opt) 
    { 
        case 1: 
        { 
            printf("Enter any string \n"); 
            scanf(" %[^\n]s",arr); 
            for(i=0;arr[i]!='\0';i++); 
                printf("The length of the string %d",i); 
            break; 
        } 
        case 2: 
        { 
            printf("String Concatenation \n"); 
            printf("\nEnter the First string:\n"); 
            scanf(" %[^\n]s", s1); 
            printf("\nEnter Second string:\n"); 
            scanf(" %[^\n]s",s2); 
            for(i=0;s1[i]!='\0';i++) 
            { 
                s3[i]=s1[i]; 
            } 
            s3[i]='\0'; 
            for(j=0;j<=i;j++) 
            { 
                s3[i+j]=s2[j]; 
            } 
            printf("The Concatenated string is %s",s3); 
            break; 
        } 
        case 3: 
        { 
            printf("Reverse the string "); 
            printf("\nEnter the string: "); 
            scanf(" %[^\n]s",s1); 
            while(s1[i]!='\0')
			{ 
                len=len+1; 
                i++ ; 
            } 
            for(i=len-1;i>=0;i--) 
            { 
                printf("%c",s1[i]); 
            } 
            break; 
        } 
        case 4: 
        { 
            printf("String copying\n"); 
            printf("Enter 1st string: "); 
            scanf(" %[^\n]s",s2); 
            while(s2[i]!='\0') 
            { 
                s1[i]=s2[i]; 
                i++; 
            } 
            s1[i]='\0'; 
            printf("%s",s1); 
            break; 
        } 
        default: 
        { 
            printf("Not is valid Option........"); 
        }  
    } 
}