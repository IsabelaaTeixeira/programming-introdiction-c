#include<stdio.h>

int main () {
	float F, C, P, mm;

	scanf("%f%f", &F, &mm);

	C = 5*(F-32)/9;
	P = 25.4*mm;

	printf("O VALOR EM CELSIUS = %0.2f \n", C);
	printf("A QUANTIDADE DE CHUVA E = %0.2f \n", P);

	return 0;
}
