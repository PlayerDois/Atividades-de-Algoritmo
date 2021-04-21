#include <stdio.h>
int main(){
	double raio, area;
	printf("Digite o valor do raio:");
	scanf("%lf", &raio);
	
	area = 3.14 *(raio*raio);
	printf("Este valor de raio: %.2lf\nCorresponde a uma area de: %.3lf",raio ,area);
	
	return 0;	
}
