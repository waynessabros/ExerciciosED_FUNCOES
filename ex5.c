/*5) Altere o exerc�cio 4 escrevendo uma fun��o que garante que dois valores digitados
pelo usu�rio s�o diferentes.*/

#include <stdio.h>
int diferentes (int a, int b){
   if (a == b)
        printf ("OS NUMEROS SAO IGUAIS\n", a);
    else
        printf ("OS NUMEROS NAO SAO IGUAIS\n", b);
}
int main (){
    int x, y;
    scanf ("%d", &x);
    scanf ("%d", &y);
    int r = diferentes (x, y);
    return r;
}

