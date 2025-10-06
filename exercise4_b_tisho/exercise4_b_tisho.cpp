#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>

int main()
{
 /*Изчисляване на примера: y=sqrt(2a-b/a+b)-sqrt(a*a-b*b)*/
	double a, b;
	scanf_s("%lf%lf", &a, &b);
	printf("%lf", sqrt((2 * a - b) / (a + b)) - sqrt(a * a - b * b));
   
}


