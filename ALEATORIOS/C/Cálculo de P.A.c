#include <stdio.h>
#include <stdlib.h>

int valor, i, divisores = 0, opcao;  /*Variaveis do exercicio 7*/

int main() {

    do{
        do{
        	 printf("-> Esse numero e primo?");
              printf("\n--> Digite um valor maior que 1: ");
               scanf("%d", &valor);
			    printf("\n");  
          } 
          
while(valor < 2);

             printf("---> Divisores de %d: ", valor);
             printf("\n");
             for(i = 2; i <= valor/2; i++){
             if(valor % i == 0){
                printf("\n%d ", i);
                divisores++;
            }
        }
        printf("\n");

        if(divisores != 0)
            printf("\n----> %d nao e primo!", valor);
        else
            printf("-----> %d e primo!", valor);
        printf("\n");
            printf("\n------> O que voce quer fazer agora?");
            printf("\n");
        printf("\n-------> 1 - Digitar outro valor\n-------> 2 - Sair\n");
        scanf("%d", &opcao);
    }
	while(opcao != 2);
}
