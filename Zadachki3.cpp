#include <stdio.h>
#include <iostream>


int main()
{
	int n, digit;
	printf("Vuvedi chislo: ");
	scanf_s("%d", &n);

	printf("Obraten red: ");
	while (n != 0) {
		digit = n % 10;
		printf("%d", digit);
		n = n / 10;
	}
	printf("\n");
	return 0;
}


