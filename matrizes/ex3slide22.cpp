/*
3 - Faça o programa para preencher os elementos de uma matriz quadrada (6 x 6)
com o valor 0 quando o valor da linha é igual ao valor da coluna, e com 1
para os demais elementos. Imprimir a matriz.
*/

#include<stdio.h>

main(){
	
	int l = 6, c = 6, mat[l][c];
	
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			if(i == j)
				mat[i][j] = 0;
			else
			   mat[i][j] = 1;
		}
	}
	
	for(int i = 0; i < l; i++){
		printf("\n");
		for(int j = 0; j < c; j++){
			printf("%i\t",mat[i][j]);
		}
	}
	
}

