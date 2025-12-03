#include<stdio.h>
int main()
{
	int i;
	int j;
	printf("Enter i value");
	scanf("%d",&i);
	j = (i++)+(++i);
	printf("value of j:%d",j);
	return 0;
}
