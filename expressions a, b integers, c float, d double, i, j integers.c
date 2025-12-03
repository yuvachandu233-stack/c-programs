#include<stdio.h>
int main()
{
	int a,b,c,d;
	int result;
	printf("Enter a value");
	scanf("%d",&a);
	printf("Enter b value");
	scanf("%d",&b);
	printf("Enter c value");
	scanf("%d",&c);
	printf("Enter d value");
	scanf("%d",&d);
	result = a/b*c-d+a*d/3;
	printf("result=%d",&result);
	return 0;
}
