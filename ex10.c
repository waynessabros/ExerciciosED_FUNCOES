//10) Escreva uma fun��o que calcula e devolve a m�dia dos 
//elementos de um vetor de inteiros recebido como par�metro
#include <stdio.h>
double calcula_media (int v [], int n){
    double soma = 0;
    v [0] = 2;
    int i;
    for (i = 0; i < n; ++i){
        soma += v[i];
    }   
    return soma / n;
}

int main (){    
    int v[4];
    double media = calcula_media (v, 4);
    printf ("%.2f\n", media);
    return 0;
}
