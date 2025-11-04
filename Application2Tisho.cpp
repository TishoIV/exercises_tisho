#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
    int n;
    scanf_s("%d", &n);
	int num = 1;
	for (int i = 0;i<n;i++)
	{
		for (int y = 0; y<i ;y++) {
			scanf_s("%d", &num);
		}
		printf("\n");
	}
}