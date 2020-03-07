/*6) Escreva uma função que recebe um inteiro (1, 2 ou 3) que representa um mês do
primeiro trimestre. A função deve exibir o mês representado ou a mensagem “valor
inválido” caso o valor seja diferente de 1, 2 e 3*/
#include <stdio.h>
int mes (int a){
   if (a == 1){
        printf ("JANEIRO\n");
    }else if (a == 2){
    	printf ("FEVEREITO\n");
    }else if (a == 3){
    	printf ("MARÇO\n");
    }
	else{
        printf ("valor invalido");
    }
}
int main (){
    int x;
    scanf ("%d", &x);
    int r = mes(x);
    return r;
}
