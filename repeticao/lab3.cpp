/*
3 - Elabore um algoritmo que receba um valor inteiro e informe se o valor recebido é um número primo.
*/
#include<stdio.h>

main(){
	int num, cont;
	
	do{
		printf("Informe um inteiro positivo (0 - zero para sair): ");
		scanf("%i",&num);
		if(num < 0){
			printf("O numero informado nao pode ser negativo\nTete novamente...\n");	
		}else{
			cont = 0;
			for(int i = num; i > 0; i--){
				if(num % i == 0)
					cont++;
			}
			if(cont == 2){
				printf("O numero informado e primo...\n");
			}
		}
	}while(num != 0);
	
	printf("\n\nFim do programa...\n");
	
}
