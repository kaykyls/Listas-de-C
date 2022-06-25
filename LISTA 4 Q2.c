/* Fa�a um programa que, dado um vetor de n�meros inteiros e um valor, ambos fornecidos pelo
usu�rio, informe a posi��o da primeira ocorr�ncia desse valor no vetor. Caso o valor informado n�o
esteja no vetor, o computador deve informar uma mensagem "Valor n�o encontrado".
Primeiramente o programa deve perguntar todos os n�meros ao usu�rio, para somente ent�o
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
		printf("Insira o %i� valor do vetor: ", i);
		scanf("%i", &vetor[i]);
	}
	printf("Qual valor voc� deseja encontrar a posi��o no vetor? ");
	scanf("%i", &valor);
	for(i = 1; i <= quant; i++){
		if(valor == vetor[i]){
			posicao = i;
			break;
		}
	}
	if (posicao > 0){
		printf("A posi��o � a %i�.", posicao);
	}else{
		printf("Valor n�o encontrado");
	}
}
