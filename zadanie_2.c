// задание 2 лаба 2 
#include <stdio.h>
#include <math.h>

int main() 
{	
	float a, b, c;																// указываем тип 
	printf_s("Enter a\n");
	scanf_s("%f", &a);															// считываем а
	printf_s("Enter b\n");														// считываем b 
	scanf_s("%f", &b);																
	printf_s("Enter c\n");														// считываем c
	scanf_s("%f", &c);
	if (a >= b && a >= c && b >= c)												// вводим само условие 
	{
		a = 2 * a;
		b = 2 * b;
		c = 2 * c;
		printf_s("a = %.1f , b = %.1f , c = %.1f", a, b, c);
	}
	else																		// если не выполняется первое условие 
	{
		a = labs(a);
		b = labs(b);
		c = labs(c);
		printf_s("a = %.1f,b = %.1f, c = %.1f", a, b, c);
	}
	return 0;
}