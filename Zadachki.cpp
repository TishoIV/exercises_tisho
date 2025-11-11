#include <stdio.h> 
#include <iostream>
#include <math.h>

int main()
{
	int num;
	int count = 0;
	int sum = 0;
	do
	{
		printf("Vuvedi chislo: ");
		scanf_s("%d", &num);
			
	} while (num!=0);
	if (count > 0) {
		printf("Sredno aritmetichno na chislata e: ", count/num);
	}
	else
		printf("Krai");

}


