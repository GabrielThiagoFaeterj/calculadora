#include <stdio.h>


void main(){

	float a, b, soma, subtracao, divisao;
	int opcao;
	printf("Digite o 1º numero: ");
	scanf("%f", &a);
    //oi

	printf("Digite o 2º numero: ");
	scanf("%f", &b);

	soma = a+b;
	subtracao = a-b;
	divisao = a/b;
	
	printf("Escolha a operacao desejada:\n 1 - Soma\n 2 - Subtracao\n 3 - Divisao\n\n");
	scanf("%d", &opcao);


    switch (opcao){

        case 1: soma;
            printf("\nO resultado da sua operacao e: %.2f\n\n", soma);
            break;
        case 2: subtracao;
            printf("\nO resultado da sua operacao e: %.2f\n\n", subtracao);
            break;
        case 3: divisao;
            printf("\nO resultado da sua operacao e: %.2f\n\n", divisao);
            break;
    }
}