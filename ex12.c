#include <stdio.h>
//12) Escreva uma fun��o que decide se h� elementos iguais em um vetor de reais.
#include <stdio.h>
double elementos_iguais (double v [], int n){
    int i,c=0,k;
    for (i = 0; i < n; i++){
         for (k = 0; k < n; k++){
         if(v[i]==v[k]){
         	c++;
		 }
	}
}   
    if(c==0){
	printf("nao ha elementos iguais");}
    else {
	printf("ha elementos iguais");}
}
int main (){    
    double vet[4];
	int i;
    for(i=0;i<4;i++){
	scanf("%d", &vet[i]);
	}
    double reais = elementos_iguais(vet, 4);
    return 0;
}
