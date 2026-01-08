/*Да се създаде програма, която пресмята лицето на определен брой успоредници
и определя кой от тях е с най-голяма площ. Да се използва формулата описваща
успоредник чрез страни и ъгъл между страните, да се дефинира масив от
успоредници и масив от площите на тези успоредници. Търсенето на площ на
успоредник, както и на най-голяма стойност да се реализира с отделни
функции. Да се сортира масива по площ на фигурите. Данните да се изведат на
екрана в подходящ формат.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

struct usporednik {
	double strana_a;
	double strana_b;
	double ugl;
};
// Функция за намиране на лицето на успоредник
double lice_usporednik(usporednik A) {
	double ugl_radian = A.ugl * (PI / 180.0); // Обръшаме градусите в радиани
	return A.strana_a * A.strana_b * sin(ugl_radian); 
}
//Функция за намиране на най-голямо лице
double max_lice(double arr[], int n) {
	double max = arr[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
//Сортиране на масив по площ
void sort_lica(double arr[], int n) {
	int i, j;
	double g;
	for (i = 0; i < n - 1; i++) {
		
	}
	
}
	

int main()
{
	int n, i;
	struct usporednik А[100];	
	double lica[100];

	printf("Vuvedete broi usporednici: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Usporednik %d (a b ugul): ", i + 1);
		scanf_s("%lf", &А[i].strana_a);
		scanf_s("%lf", &А[i].strana_b);
		scanf_s("%lf", &А[i].ugl);

	}
}


