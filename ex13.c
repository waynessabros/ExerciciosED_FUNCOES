/*13) Escreva uma funcao que recebe um vetor de char v e um char c. 
A fun��o deve substituir cada ocorrencia de c em v por *.*/
#include <stdio.h>
void verifica_ocorrencia (char v[], char c[],int n){
	int j,k, cont=0;

	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
	     if(v[j] == c[k])
	     v[j] == '.';
	    }
    }
}
int main(){
	char v[5], c[5];
	int j;

	for(j=0;j<5;j++){
	scanf("%c", &v[j]);}

	printf("\n");

	for(j=0;j<5;j++){
	scanf("%c", &c[j]);}
	verifica_ocorrencia(v[5], c[5],5);     
}