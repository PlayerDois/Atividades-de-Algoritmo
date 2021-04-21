#include <stdio.h>
int main(){
	int horas , minutos , segundos ;
	
	
	printf("Escreva a quantidade de horas desejada:");
	scanf("%d", &horas);

	minutos = horas*60 ;
	segundos = minutos*60 ;
	
	printf( "\n%d horas = %d minutos = %d segundos.\n" ,horas , minutos ,segundos);
	
	return 0;	
}
