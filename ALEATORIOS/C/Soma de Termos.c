#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TABELA ASCII 

int kaj, s, x1, t;

double x = 1, y = 0;

int n = 0, f1 = 0, f2 = 1, f3, arm, mina;

int main (void) {
	
	// variável de controle do loop
	
	kaj = 0;
	
	// info 
	
	 printf("\n 6) Operacao com termos e um valor positivo \n\n");
	 
	 system("pause");	 
	 system("cls");
	
	// recepção
		
	    printf("\n Escreva um numero inteiro: ");
	    scanf("%d", &n);
	
	    printf("\n Escreva quantos termos: ");
	    scanf("%d", &t);



     x = n;
     y = 2;
     mina = y;
     
    system("cls");
    
	// Atribuições / finalização
	
	printf("\n Seguindo a formula proposta no exercicio em resumo temos...\n");
	printf("\n Numero escolhido = %d", n);
	printf("\n Quant. de Termos = %d\n", t);
	
	for (kaj = 0; kaj < t; kaj++){
		
	x1 = s;
	f3 = f2 + f1;
		
				                 s = pow (x, y) / f3;
				                 
				                 printf("\n Potencia de %d elevado a %d dividido por %d.", n, mina, f3);
                                
                                 printf("\n Resulta em = %d", s);
                                 printf("\n");

                                 arm = - x1 + s; 
				    y++;
				    mina = y;
					f1 = f2;
					f2 = f3; 
																	 	
																	 }
																	 
																	 
																	 printf("\n Resultado seguindo a formula proposta de = %d\n\n", arm);

																	 
																system("pause");
														
		
                        
                  






}
