#include<stdio.h> 
int getMax(int a[],int n)
{
	int max =a[0],i;
	for (i=1;i,n;i++)
	{
		if(a[i]>max)
		max =a[i];
	}
    return max;
}
void radixsort(int a[],int n)
{
	int big,nod =0,steps,count[10];
	int i,j,k,bucket[10][n],pos,div=1;
	big =getMax(a,n);
	while (big>0)
	{
		nod++;
		big =big /10;
	}
	for (steps =1;steps <=nod; steps++)
	{
		for(j=0;j<10;j++)
		{
			count[j] = 0;
		}
		for (i=0;i<n;i++)
		{
			pos = (a[i]/div)%10;
			bucket[pos][count[pos]] =a[i];
			count[pos]++;
		}
		k=0;
		for (j=0;j<10;j++)
		{
			for (i=0;i<count[j];i++)
			{
				a[k] = bucket[j][i];
				k++;
			}
		}
		div = div*10;
	}
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	printf("Original array: ");
    printArray(a, n);
	radixsort(a, n);
	printf("Sorted array: ");
    printArray(a, n);
	return 0;
}









   
