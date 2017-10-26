/*
6 - Dados dois vetores, A (5 elementos) e B (8 elementos), ambos com números inteiros informados pelo usuários.
	Faça um programa que imprima todos os elementos comuns aos dois vetores.
*/
#include<stdio.h>

main(){
	int vetorA[5], vetorB[8];
	
	for(int i = 0; i < 5; i++){
		printf("Informe um numero inteiro para a posicao %i do vetor A: ", i);
		scanf("%i",&vetorA[i]);
	}
	
	for(int i = 0; i < 8; i++){
		printf("Informe um numero inteiro para a posicao %i do vetor B: ", i);
		scanf("%i",&vetorB[i]);
	}
	
	printf("\n\nOs numeros comuns aos 2 vetores sao...\n");
	for(int i = 0; i < 5; i++){
		for(int x = 0; x < 8; x++){
			if(vetorA[i] == vetorB[x])
				printf("O numero %i esta no vetor A na posicao %i e no vetor B na posicao %i\n", vetorA[i], i, x);
		}
	}
	
	printf("\n\nFim do programa...\n");
	
}
