/*
Use a função da questão passado e lance o dado 1 milhão de vezes. Conte
quantas vezes cada número saiu. A probabilidade deu certo? Ou seja, a
porcentagem dos números foi parecida? Dica: Utilize um vetor para guardar a
quantidade de vezes que cada número foi impresso.
*/

#include<stdio.h>
#include<stdlib.h> //biblioteca para o randomico

int dado();

main(){
	int numeros[6] = {0,0,0,0,0,0}; //inicializa as 6 posições com zero, este vetor é o contador de quantas vezes cada numero saiu.
	int lancamentos = 1000; //lança mil vezes o dado, aqui para atender o enunciado deve ser alterado para 1 milhão, feito com mil para ser mais rapido
	int total = 0; //apenas para conferir se realmente retornou o numero de lancamentos
	
	for(int i = 0; i < lancamentos; i++) 
		numeros[dado() - 1]++; //incrementa o número que o dado saiu, o vetor é dado() - 1 devido a vetores começarem em 0 e não em 1, ou seja vai de 0 a 5 e não de 1 a 6

	printf("Num\t\tVezes\t\t%%\n");
	for(int i = 0; i < 6; i++){ //for para ver quantas vezes cada numero do dado saiu
		printf("%i\t\t%i\t\t%.2f\n", i + 1, numeros[i], (numeros[i] * 100.0) / lancamentos ); //imprime o numero, quantas vezes saiu e o percentual do total
		total += numeros[i];
	}
	printf("Total\t\t%i\t\t%.2f\n", total, (total * 100.0) / lancamentos ); //imprime o numero, quantas vezes saiu e o percentual do total
			
}

int dado(){
	return rand() % 6 + 1; //com o módulo de 6 pode dar zero, então para retornar de 1 a 6 precisa somar 1, senao retornará de 1 a 5
}
