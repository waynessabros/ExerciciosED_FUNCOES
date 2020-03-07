/*9) Escreva uma função que recebe um caractere como parâmetro e decide se se trata de
uma vogal.*/
#include<stdio.h>
void verificaVogal (char letra){
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
		printf("%c eh uma vogal", letra);
	else 
		printf("%c nao e uma vogal", letra);
}
int main(){
	char a;
	scanf("%c", &a);
	verificaVogal(a);
	
	return 0;
}
