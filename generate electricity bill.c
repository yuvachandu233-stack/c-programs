#include<stdio.h>
int main()
{
	int units;
	float amt,charge,total_amt;
	printf("Enter the units consumed:");
	scanf("%d",&units);
	if(units<=50)
	{
		amt=units*2.50;
	}
	else if(units<=100)
	{
		amt=units*3.00;
	}
	else if(units<=200)
	{
		amt=units*3.50;
	}
	else if(units<=300)
	{
		amt=units*4.00;
	}
	else 
	{
		amt=units*5.00;
	}
	printf("Bill=%.2f",amt);
	return 0;
}