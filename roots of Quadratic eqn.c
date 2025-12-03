#include<stdio.h>
int main()
{
	double a,b,c,r1,r2,real,img,d;
	printf("Enter the coefficents of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("r1=%.2f & r2=%.2f",r1,r2);
	}
	else if(d==0)
	{
		r1=r2=-b/2*a;
		printf("r1 = r2 = %.2f",r1);	
	}
	else
	{
		real=-b/2*a;
		img=sqrt(-d/2*a);
		printf("r1=%.2f and r2=%.2fi",real,img);
	}
	return 0;
}