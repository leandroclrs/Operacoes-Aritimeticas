#include<stdio.h>

int main()
{	
	printf("Informe um numero -> A: ");
	float vA;
	scanf("%f", &vA);
	
	printf("Informe um numero -> B: ");
	float vB;
	scanf("%f", &vB);

	printf("\n Soma dos numeros: %-7.2f", (vA + vB));
	printf("\n Subtracao dos numeros: %-7.2f", (vA - vB));
	printf("\n Multiplicacao dos numeros: %-7.2f", (vA * vB));
	if (vA != 0 || vB != 0) {
		printf("\n Divisao dos numeros: %-7.2f" , (vA / vB));
	} else {
		printf("\n Divisao dos numeros: IMPOSSIVEL.");
	}
	
	return 0;
}