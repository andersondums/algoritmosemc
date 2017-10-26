/*
10 - Faça um algoritmo que leia um vetor A[10].
		Preencha então um vetor B[10] com o fatorial de cada valor de A respeitando as posições,
		caso o referido valor for positivo ou nulo.
		Deixe os valores negativos intactos. Mostre o vetor B
*/
#include <stdio.h>

main(){
	int tam = 10;
	int a[tam], b[tam], fatorial;
	
	for(int i = 0; i < tam; i++){
		printf("Digite um inteiro para a posicao %i do vetor A: ", i);
		scanf("%i", &a[i]);
	}
	
	for(int i = 0; i < tam; i++){
		if(a[i] <= 0){
			if(a[i] == 0)
				b[i] = 1;
			else
				b[i] = a[i];
		}else{
			fatorial = 1;
			for(int x = a[i]; x > 1; x--){
				fatorial *= x;
			}
			b[i] = fatorial;
		}
	}
	
	printf("\n\nResultados:\n");
	for(int i = 0; i < tam; i++){
		printf("Posicao %i do vetor A = %i, vetor B = %i\n", i, a[i], b[i]);
	}	
	printf("\n\nFim do programa...\n");
	
}
