/*
1 - Faça um algoritmo que verifique e mostre os números entre 1000 e 2000 (inclusive) que, quando divididos por 11, tenham resto igual a 5.
*/
#include <stdio.h>

main(){
	printf("Lista de itens entre 1000 e 2000 com resto 5 quando divididos por 11:\n");
	for(int i = 1000; i <= 2000; i++){
		if(i % 11 == 5){
			printf("%i  ", i);
		}
	}
}
