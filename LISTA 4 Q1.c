/* Escreva um programa que leia 30 n�meros inteiros e armazene-os em um vetor A e leia tamb�m
um inteiro n. Em seguida seu programa deve calcular e imprimir a quantidade de vezes que o valor
n aparece em A. */

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, cont = 0, A[30];
	for(i = 1; i <= 30; i++){
		printf("Insira o %i� n�mero inteiro: ", i);
		scanf("%i", &A[i]);
	}
	printf("Insira o n�mero que voc� deseja saber a quantidade de vezes que aparece no vetor A: ");
	scanf("%i", &num);
	for(i = 1; i <= 30; i++){
		if(num == A[i]){
			cont++;
		}
	}
	printf("Seu n�mero apareceu %i vezes", cont);
}
