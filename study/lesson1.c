#include <stdio.h>


double average( double number1, double number2);

int main () {
	double number1=4.0, number2=5.0;
	printf("%f\n", average(number1, number2));
	return 0;
}

double average( double number1, double number2) // header
{
	double result;
	result = (number1 + number2)/2.0;
	return result;
}
