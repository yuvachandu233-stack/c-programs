#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k;
 //read matrix A
 printf("Enter the  elements of A matrix:");
  for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&a[i][j]);
 	 }
 }
 //print the Matrix A
 printf("\n The elements of matrix A:\n");
  for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",a[i][j]);
 	 }
 	 printf("\n");
 }
 //read matrix B
 printf("Enter the  elements of B matrix:");
  for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&b[i][j]);
 	 }
 }
 //print the Matrix B
 printf("\n The elements of matrix B:\n");
  for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",b[i][j]);
 	 }
 	 printf("\n");
 }
 //Logic of multiplication
 printf("Logic of multiplication of two matrix:");
 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
  	{
  		c[i][j]=0;
  		for(k=0;k<2;k++)
   		{
		   c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
   	} 
	printf("\n");
 }
 //print the Matrix C
 printf("\n The elements of matrix C:\n");
  for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",c[i][j]);
 	 }
 	 printf("\n");
 }
}
