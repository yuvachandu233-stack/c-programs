#include <stdio.h>
int main()
{ 
   char op;
   double first,second;
   printf("Enter an operator(+,-,*,/):");
   scanf("%c",&op);
   printf("Enter two operands: ");
   scanf("%lf %lf", & first, &second);
   switch (op) 
   {
    case '+':
	printf("%.11f+%.11=%.11f", first, second, first+second);
	break;
	case '-':
	printf("%. Ilf-%.11f=%.11f", first, second, first - second);
	break;
	case '*':
	printf("%.1lf*%.11f%=%.11f", first, second, first*second);
	break;
	case '/':
	printf("%.11f/%.11f=%.11f", first, second, first/second);																																
	break;
	// operator doesn't match any case constant
	default:
	printf("Error! operator is not correct");
}
	return 0;
}