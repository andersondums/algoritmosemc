/*
Use a fun��o da quest�o passado e lance o dado 1 milh�o de vezes. Conte
quantas vezes cada n�mero saiu. A probabilidade deu certo? Ou seja, a
porcentagem dos n�meros foi parecida? Dica: Utilize um vetor para guardar a
quantidade de vezes que cada n�mero foi impresso.
*/

#include<stdio.h>
#include<stdlib.h> //biblioteca para o randomico

int dado();

main(){
	int numeros[6] = {0,0,0,0,0,0}; //inicializa as 6 posi��es com zero, este vetor � o contador de quantas vezes cada numero saiu.
	int lancamentos = 1000; //lan�a mil vezes o dado, aqui para atender o enunciado deve ser alterado para 1 milh�o, feito com mil para ser mais rapido
	int total = 0; //apenas para conferir se realmente retornou o numero de lancamentos
	
	for(int i = 0; i < lancamentos; i++) 
		numeros[dado() - 1]++; //incrementa o n�mero que o dado saiu, o vetor � dado() - 1 devido a vetores come�arem em 0 e n�o em 1, ou seja vai de 0 a 5 e n�o de 1 a 6

	printf("Num\t\tVezes\t\t%%\n");
	for(int i = 0; i < 6; i++){ //for para ver quantas vezes cada numero do dado saiu
		printf("%i\t\t%i\t\t%.2f\n", i + 1, numeros[i], (numeros[i] * 100.0) / lancamentos ); //imprime o numero, quantas vezes saiu e o percentual do total
		total += numeros[i];
	}
	printf("Total\t\t%i\t\t%.2f\n", total, (total * 100.0) / lancamentos ); //imprime o numero, quantas vezes saiu e o percentual do total
			
}

int dado(){
	return rand() % 6 + 1; //com o m�dulo de 6 pode dar zero, ent�o para retornar de 1 a 6 precisa somar 1, senao retornar� de 1 a 5
}
