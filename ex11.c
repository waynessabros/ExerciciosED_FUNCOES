/*11) Escreva uma fun��o que recebe um vetor de inteiros e inverte seu conte�do.
Por exemplo, o vetor 1, 2, 3, 4 deve ser invertido para 4, 3, 2, 1.*/

//N�o consigo fazer com fun��o
#include <stdio.h>
int main (){
	int i, n = 4;
	int vet [4];
	printf("Digite os Numeros: ");
	for ( i = 0; i < n; i++){
		scanf("%d", &vet [i] );
	}
	printf("Numeros Digitados: ");
	for ( i = 0; i < n; i++){
		printf(" %d ",vet [i] );
	}
	printf("\n");
	printf("Vetor invertido: ");
	for ( i = n - 1; i >= 0; i--)
		printf(" %d ", vet [i]);
	printf("\n");
	getche();
}

