#include<stdio.h>
void quicksort(int[],int,int);
void swap(int[],int,int);
int main()
{
	int i,n, a[25];
	printf("How many elements are you going to enter? ");
	scanf("%d",&n);
	printf("Before sorting enter %d elements: ",n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("The sorted elements are:\n");
	for (i = 0;i<n;i++)
	     printf("%d",a[i]);
	     return 0;
}
void quicksort(int a[],int low,int high)
{
	int i,j,pivot;
	if (low<high)
	{
		pivot=low;
		i = low;
		j = high;
		
		while (i<j)
		{
			while (a[i]<=a[pivot]&& i< high)
			    i++;
			while (a[j]>a[pivot])
			    j--;
			if (i<j)
			    swap(a,i,j); //swap the i and j values
		}
		//swap pivot with array[j] to place it in correct position
		swap(a,pivot,j);
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
void swap(int a[],int i,int j)
{
	int temp = a[i];
	a[i]= a[j];
	a[j]=temp;
}