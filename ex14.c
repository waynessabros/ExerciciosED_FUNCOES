/*14) Escreva uma função que recebe um vetor de 
inteiros e decide se ele está ordenado de forma
decrescente*/
#include<stdio.h>
int vetor_decrescente(int v[], int n){
  int j,k, cont=0;

	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
         if(v[j] > v[k])
	     cont++;
        }
        }
        if (cont>0){
         printf("Não eh decrescente");
        }else{
            printf("Eh decrescente");
        }
}
int main(){
    int v[5];
    int j;

    
	for(j=0;j<5;j++){
	scanf("%c", &v[j]);}

    vetor_decrescente(v[5], 5);     
    return 0;
}
