
3#include<stdio.h >
#define PI 3.14
int main()
{
	int r,a,l,w,h,b;
	float circle,square,rectangle,triangle;
	printf("Enter r value:");
	scanf("%d",&r);
	circle=PI*r*r;
	printf("area of circle:%.2f",circle);
	printf("\nEnter side a of the square:");
	scanf("%d",&a);
	square=a*a;
	printf("area of the square:%f",square);
	printf("\nEnter the values of length & Bredth:");
	scanf("%d%d",&l,&w);
	rectangle=l*w;
	printf("Area of the rectangle:%.2f",rectangle);
	printf("\nEnter the values of height and base of the triangle:");
	scanf("%d%d",&h,&b);
	triangle=h*b/2;
	printf("area of triangle:%.0f",triangle);
	return 0;
}
