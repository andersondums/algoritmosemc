/*
3 - Crie um programa que pe�a 10 letras para o usu�rio e armazene-as em um vetor de caracteres, 
ap�s o usu�rio informar as dez letras pe�a para ele informar uma letra que deseja buscar no vetor, 
fa�a a busca no vetor e informe ao usu�rio em que posi��o a letra se encontrar, ou se ela n�o se encontra no vetor.
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
