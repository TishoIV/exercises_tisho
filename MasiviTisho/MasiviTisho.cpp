#include <iostream>
#include <stdio.h>

int main()
{
	int value; // дефинираме стойност value в целочислен тип
	int arr[10]; // дефинираме едномерен масив с 10 елемента
	for (int i = 0; i < 10; i++) 
	{
		scanf_s("%d", &value); 
		arr[i] = value; 
	}
	printf("\n");
	for (int i = 0; i < 10; i++) 
	{
		printf("arr[%d]=%d\n", i, arr[i]); // принтираме i arr[i]
	}
	for (int i = 10 - 1; i > 0; i--)
	{
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}


