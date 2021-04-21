#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	double A, B, MEDIA;
	
	printf("Calculo apenas com notas de 0-10");
	printf("\n\nDigite a primeira nota: ");
	scanf("%lf", &A);

	if (A > 10 or A < 0) return 0;
	else
	printf("Digite a segunda nota: ");
	scanf("%lf", &B);
	
	if (B > 10 or B < 0) return 0;
	else;

	MEDIA = (A*3.5 + B*7.5)/11;
	
	printf("\nMedia = %.2lf\n ", MEDIA);
	}
