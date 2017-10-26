/*
2 - Faça um programa em C que carregue dois vetores de dez elementos 
(peça para o usuário os valores) 
cada um e mostre um vetor resultante da intercalação desses dois vetores.
*/
#include<stdio.h>


main(){
	int tam = 5; //controla o tamanho do vetor criado
	int vetorA[tam], vetorB[tam], vetorC[tam * 2];
	
	printf("Valores para o vetor A\n\n");
	for(int i = 0; i < tam; i++){
		printf("Entre com o elemento %i do vetor A: ", i);
		scanf("%i",&vetorA[i]);
	}
	
	printf("\nValores para o vetor B\n\n");
	for(int i = 0; i < tam; i++){
		printf("Entre com o elemento %i do vetor B: ", i);
		scanf("%i",&vetorB[i]);
	}
	
	for(int i = 0; i < tam * 2; i++){
		if(i % 2){ //posições impares receber o valor do vetor B
			vetorC[i] = vetorB[i / 2];
		}else{ //pares recebem do vetor A
			vetorC[i] = vetorA[i / 2];
		}
	}
	
	printf("\nValores do vetor intercalado C\n\n");
	for(int i = 0; i < tam * 2; i++){
		printf("%i ",vetorC[i]);
	}
	
	printf("\n\nFim do Programa\n\n");
	
}
