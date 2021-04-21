#include<stdio.h>
int main(){

	int a, b ,resto , quociente;
	printf("Sabendo que 'A' vai ser dividido por 'B'\n");
    printf("Escreva o valor de A :");
    scanf("%d", &a);
    printf("Escreva o valor de B :");
    scanf("%d", &b);
    
    resto = a % b;
    quociente = a / b;
    
    printf("\nQuociente:%d\nResto:%d", quociente, resto);

    
    return 0;
}
