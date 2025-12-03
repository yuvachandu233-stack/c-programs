#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10],i,j;
 //reading Matrix A
 printf("Enter the  elements of A matrix:");
 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&a[i][j]);
 	 }
 }
 //reading matrix B
  printf("Enter the  elements of B matrix:");
 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&b[i][j]);
 	 }
 }
 //printing Matrix A
 printf("\n The elements of matrix A:\n");
 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",a[i][j]);
 	 }
 	 printf("\n");
 }
 //printing Matrix B
 printf("\n The elements of matrix B:\n");
 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",b[i][j]);
 	 }
 	 printf("\n");
 }
 //logic of sum of Matrix A,Matrix B
 printf("The Logic of Matrix A,Matrix B sum matrix is C:\n");
 for(i=0;i<2;i++)
 {
 	for(j=0;j<2;j++)
 	{
 		c[i][j]=a[i][j]+b[i][j];
	 }
 }
 //print Matrix C
 printf("\n print the  matrix is C:\n");
 for(i=0;i<2;i++)
 {
 	for(j=0;j<2;j++)
 	{
 		printf("%d\t",c[i][j]);
	 }
	 printf("\n");
 }
 
}
