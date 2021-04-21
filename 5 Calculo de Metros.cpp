#include<stdio.h>

int main() {

	int metros, rolos, avulsos;

    printf("Digite a quantidade de metros de fio que voce precisa para a obra: ");
	scanf("%d", &metros);
	
	rolos = metros/50;
	avulsos = metros%50;

	printf("\nVoce vai precisar de %d rolos de fio ", rolos);
    printf("e mais %d metros avulsos\n", avulsos);



	return 0;

}
