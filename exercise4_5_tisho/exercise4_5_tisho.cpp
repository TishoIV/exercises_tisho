#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>

int main()
{
	/*Лице на трапец*/
	double a;
	scanf_s("%lf", &a);
	double b;
	scanf_s("%lf", &b);
	double h;
	scanf_s("%lf", &h);
	printf("%.2lf", ((a + b) / 2) * h);
}
