#include <stdio.h>
int main(){
    //Defini��o de variaveis 
    int a, b, c, d, e;
    
    printf("Digite tr�s numeros inteiros:\n");
    //Entrada
    scanf("%d %d %d %d %d", &a, &b , &c ,&d, &e);
    
    //Processamento
    c = a + b;
	e = c * d; 
    printf("A soma de a + b = %d" , c);
    printf("\n");
    printf("A multiplica��o de c * d = %d" , e);
    return 0;

}
