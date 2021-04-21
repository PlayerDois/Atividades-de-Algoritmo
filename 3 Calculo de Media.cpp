#include<stdio.h>
int main(){
	double A, B, C, MEDIA;
	printf("Digite o valor de A:");
	scanf("%lf", &A);
	printf("Digite o valor de B:");
	scanf("%lf", &B);
	printf("Digite o valor de C:");
	scanf("%lf", &C);
	MEDIA = (A + B + C)/3;
	printf("Media: %.2lf\n", MEDIA);
	return 0;
}
