#include <stdio.h>   // biblioteca padrão para comandos i/o
#include <stdlib.h> // necessário para o system("pause");

int kaj, receberNumero, diminuirNumero, aumentarNumero, resultadoNumero, printarNumeroSubindo, printarNumeroDescendo;


int main (void) {
kaj = 0;

    printf("\n 2) Por favor insira um numero inteiro: ");
    scanf(" %d", &receberNumero);

system("cls");

    printf("\n    Numero escolhido = %d\n\n", receberNumero);
    
        diminuirNumero = receberNumero;
        aumentarNumero = 1; 
    
    //printf("\n %d, %d", diminuirNumero, aumentarNumero); 
    
    printf("Crescente      Decrescente");
    
    for (kaj = 0; kaj < receberNumero; kaj++){

		printf("\n    %d              %d", aumentarNumero, diminuirNumero);
		
        aumentarNumero++;
		diminuirNumero--;
                                             }
                            printf("\n\n\n\n\n\n\n\n\n\n");   
                            system("pause");
                                             return 0;
                                             
}
