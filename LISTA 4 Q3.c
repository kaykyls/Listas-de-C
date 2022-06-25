/* Faça um programa que, dados um vetor de números inteiros e um valor, ambos fornecidos pelo
usuário, informe a posição de todas as ocorrências desse valor no vetor. Caso o valor informado
não esteja no vetor, o computador deve informar uma mensagem "Valor não encontrado".
Primeiramente o programa deve perguntar todos os números ao usuário, para somente então
procurar pelo valor desejado. */

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, posicao = 0, quant, valor;
	printf("Insira a quantidade de valores do vetor: ");
	scanf("%i", &quant);
	int vetor[quant];
	for(i = 1; i <= quant; i++){
		printf("Insira o %iº valor do vetor: ", i);
		scanf("%i", &vetor[i]);
	}
	printf("Qual valor você deseja encontrar a posição no vetor? ");
	scanf("%i", &valor);
	for(i = 1; i <= quant; i++){
		if(valor == vetor[i]){
			printf("O valor aparace na posicao %i\n", i);
			posicao = i;
		}
	}
	if (posicao == 0){
		printf("Valor não encontrado");
	}
}
