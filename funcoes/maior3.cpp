#include<stdio.h>

int maior2(int, int);
int maior3(int, int, int);

main(){
	int a, b, c;
	printf("Digite o primeiro numero: ");
	scanf("%i",&a);
	printf("Digite o segundo numero: ");
	scanf("%i",&b);
	printf("Digite o terceiro numero: ");
	scanf("%i",&c);	
	printf("O maior eh: %i", maior3(a,b,c));	
}

int maior3(int n1, int n2, int n3){
	return maior2(maior2(n1, n2), n3);
}

int maior2(int x, int y){	
	if(x > y)
		return x;
	else
		return y;
}
