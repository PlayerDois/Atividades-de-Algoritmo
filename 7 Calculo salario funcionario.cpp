#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
     setlocale(LC_ALL,"Portuguese");

	char nome[50], sexo[1];
	int matricula, horas; 
	double valor, salario;
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome);
	printf("Digite o sexo do funcionario (F ou M): ");
	scanf("%s", &sexo);
	printf("Digite a matricula do funcionario: ");
	scanf("%d", &matricula);
	printf("Digite o numero de horas trabalhadas pelo funcionario: ");
	scanf("%d", &horas);
	printf("Digite o valor que esse funcionario recebe por horas: ");
	scanf("%lf", &valor);
	
	salario = horas * valor;

	system("cls");
	
	printf("DADOS DO FUNCIONARIO\n");
	printf("\nNome: %s\n", nome);
	printf("Sexo (F/M): %s\n", sexo);
	printf("Matricula: %d\n", matricula);
	printf("Horas trabalhadas: %d\n", horas);
	printf("Valor/hora: R$%.2lf\n", valor);
	printf("Salario: R$%.2lf\n", salario);
	return 0;
}
