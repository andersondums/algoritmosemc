/*
3 - Crie um programa que peça 10 letras para o usuário e armazene-as em um vetor de caracteres, 
após o usuário informar as dez letras peça para ele informar uma letra que deseja buscar no vetor, 
faça a busca no vetor e informe ao usuário em que posição a letra se encontrar, ou se ela não se encontra no vetor.
*/
#include<stdio.h>

main(){
	int tam = 10;
	char vetor[tam], letra;
	
	for(int i = 0; i < tam; i++){
		printf("Digite uma letra para a posicao %i do vetor: ", i);
		scanf("%c",&vetor[i]);
		fflush(stdin);
	}
	
	printf("\n\nBusca\nDigite uma letra para buscar no vetor: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	printf("\n\nBuscando...\n");
	for(int i = 0; i < tam; i++){
		if(vetor[i] == letra)
			printf("\nLetra %c encontrada na posicao %i",letra,i);		
	}
	
	printf("\n\nFim do programa...");
	
}
