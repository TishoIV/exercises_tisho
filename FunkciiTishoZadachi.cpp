#include <iostream>
#include <stdio.h>
#include <math.h>
const int size = 5;
int sum(int a, int b) {
    int c = a + b;
    return c;
}
int sum2(int a, int b) {
	int d = a * b;
	return d;
}
int sum3(int a, int b) {
	int e = a / b;
	return e;
}
int sum4(int a) {
	int z = pow(a, 3);
	return z;
}
int sum5(int arr1[], int size) {
	printf("Vuvedi 5 realni chisla: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr1[i]);
	}
	return 0;
}
int sum6(int arr1[], int size) {
	for (int i = 0; i < 5; i++) {
		printf("arr[%d]=%d\n", i, arr1[i]);
	}
	return 0;

}
int sum7(int arr1[], int size) {
	for (int i = 5 - 1; i > 0; i--)
	{
		printf("arr[%d]=%d\n", i, arr1[i]);
	}
	return 0;
}
int main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("Rezultat ot subirane: %d\n", sum(a, b));
	printf("Rezultat ot umnojenie: %d\n", sum2(a, b));
	printf("Rezultat ot delenie: %d\n", sum3(a, b));
	printf("Rezultat ot povdigane na 3 stepen: %d\n", sum4(a));

	int arr[5];
	printf("%d\n", sum5(arr, size));
	printf("%d\n", sum6(arr, size));
	printf("%d", sum7(arr, size));


}


