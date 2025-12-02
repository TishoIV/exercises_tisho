#include <stdio.h>
#include <iostream>

int sum(int a, int b) {
	int s = a + b;
	return s;
}
int sum2(int a, int b) {
	int d = a-b;
	return d;
}
int sum3(int a, int b) {
	int z = a*b;
	return z;
}
int main()
{
	//Subirane
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("Rezultat ot subirane: %d\n", sum(a, b));

	// Izvajdane
	int c, d;
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	printf("Rezultat ot izvajdane: %d", sum2(c, d));

	
 
	
}

