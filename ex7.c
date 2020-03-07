/*7) Escreva uma função que calcula o fatorial de um número recebido por parâmetro,
devolvendo-o ao final.*/
#include<stdio.h>
int fato (int a){
	  int fat,n;
	  if(a>=0)
    {
           fat=1;
           n=a;
           while(n>0)
           {
                     fat*=n;     //FATORIAL = FATORIAL*N
                     n--;
           }
           printf("%d!=%d\n",a,fat);
    }
}
int main (){
    int x;
    scanf ("%d", &x);
    int r = fato(x);
    return r;
}
