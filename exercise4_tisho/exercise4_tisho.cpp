/*Да се напише програма която да пресмята лицата на фигурите*/

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
#define PI 3.14


int main()
{
	{
		/*Обем на кълбо*/
		double r;
		scanf_s("%lf", &r);
		printf("%lf", (4 / 3) * PI * pow(r, 3));
		
	}
}


