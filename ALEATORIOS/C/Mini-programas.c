#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>    // Biblioteca para poder usar a funcao srand(time(NULL)); A fim de gerar numeros aleatorios.


// OBS.: no exercicio da questao 08, ainda nao aprendi a usar os vetores por isso acabei usando if com a funcao 
// rand() % 99, com 5 variaveis de auxilio, e ainda corrigi alguns possiveis bugs, por isso ficou extremamente 
// grande. XD 


// variaveis usadas nos exercicios

int menu = 1; 
 
int n, f;                                                      /*<-- Variaveis do exercicio 06*/

int valor, i, divisores = 0, opcao;                            /* <-- Variaveis do exercicio 07*/

int op, ais, sma, max, min, v1, v2, v3, v4, v5;                /* <-- Variaveis do exercicio 08 
                                                                  (ais = seria o "i")
															      (sma = soma dos valores)
															      (max e min = Maior e Menor)
																  (op = opcao para repetir ou acabar)*/ 

// fim das variaveis usadas nos exercicios 
	    
  int main (){

do {
  	menu = 0;
	system("cls");
	
	printf("                                               - MINI PROGRAMS PACKAGE -");
	printf("\n                                                   ! MADE BY ALLEN !");
	printf("\n");
	
printf("\n-> O QUE VOCE DESEJA FAZER?\n");
printf("\n 1 - FATORIAL.");
printf("\n 2 - PROGRESSAO ARITMETICA.");
printf("\n 3 - VALORES RANDOM.");
printf("\n 4 - SAIR.\n");
printf("\nuser: ");

scanf("%d", &op);

switch (op){

case 1:
	system("cls");
	
printf("                                               - MINI PROGRAMS PACKAGE -");
printf("\n                                                   ! MADE BY ALLEN !");
printf("\n");

printf("\n-> Calculo de Fatorial");
printf("\n");	
  printf("\n--> Entre com um valor inteiro positivo: ");
  scanf("%d", &n);
  
  f = 1;

  while (n > 0) {
    f = f *  n;
    n--;                    
  }

  printf("\n---> Resultado = %u",f);
  printf("\n\n");
  
  system("pause");
  menu = 1;
  
break;

      
case 2:
system("cls");	
printf("                                               - MINI PROGRAMS PACKAGE -");
printf("\n                                                   ! MADE BY ALLEN !");
printf("\n");

        do{
        	 printf("-> Esse numero e primo?");
              printf("\n--> Digite um valor maior que 1: ");
               scanf("%i", &valor);
			    printf("\n");  
          } 
          
while(valor < 2);

             printf("---> Divisores de %d: ", valor);
             printf("\n");
             for(i = 2; i <= valor/2; i++){
             if(valor % i == 0){
                printf("\n%i ", i);
                divisores++;
            }
        }
        printf("\n");

        if(divisores != 0)
            printf("\n----> %i nao e primo!", valor);
        else
            printf("-----> %i e primo!", valor);
        printf("\n\n");
  
        system("pause");
		
		menu = 1;
		
		    
break;

case 3:
	
system("cls");		
printf("                                               - MINI PROGRAMS PACKAGE -");
printf("\n                                                   ! MADE BY ALLEN !");
printf("\n\n");

	       printf("console: Gerando 05 valores aleatorios entre 1 a 99!\n");
		   printf("\n");
               srand(time(NULL)); // inicia randomizacao
               
// NAO SEI USAR VETORES AINDA 
  
  for (ais = 0; ais < 1; ais++)  // uso de ais no lugar de i, por preferencia minha 
  {
  	v1 = (rand() % 99); // execucao do loop

	printf("console: ( %d ) - ", v1);
  }
  
  for (ais = 0; ais < 1; ais++)
  {
  	v2 = (rand() % 99); // execucao do loop

	printf("( %d ) - ", v2);
  }
  
  for (ais = 0; ais < 1; ais++)
  {
  	v3 = (rand() % 99); // execucao do loop

	printf("( %d ) - ", v3);
  }
  
  for (ais = 0; ais < 1; ais++)
  {
  	v4 = (rand() % 99); // execucao do loop

	printf("( %d ) - ", v4);
  }
  
  for (ais = 0; ais < 1; ais++)
  {
  	v5 = (rand() % 99); // execucao do loop

	printf("( %d ) ", v5);
  }

  
  //Correcao de possivel bug de numeros repitidos 
  
  if (v2 == v1 || v2 == v3 || v2 == v4 || v2 == v5 && v2 < 99){          // v2
  	v2++;
  }
  if (v3 == v1 || v3 == v2 || v3 == v4 || v3 == v5 && v3 < 99){          // v3
  	v3++;
  }
  if (v4 == v1 || v4 == v2 || v4 == v3 || v4 == v5 && v4 < 99){          // v4  
  	v4++;
  }
  if (v5 == v1 || v5 == v2 || v5 == v3 || v5 == v4 && v5 < 99){          // v5
  	v5++;
  }  
  
  //Correcao de possivel bug de numeros repitidos 
  
  
  
                                
  sma = v1 + v2 + v3 + v4 + v5;                     // Variavel sma e para soma dos valores gerados 
  
  
 // Determina o maior numero
 
 // V1 
 if (v1 > v2 && v1 > v3 && v1 > v4 && v1 > v5 && v1 != 0){     
        max = v1;
 }
 
 // V2 
 if (v2 > v1 && v2 > v3 && v2 > v4 && v2 > v5 && v2 != 0){     
        max = v2;
 }
 
 // V3 
 if (v3 > v1 && v3 > v2 && v3 > v4 && v3 > v5 && v3 != 0){     
        max = v3;
 }
 
 // V4 
 if (v4 > v1 && v4 > v2 && v4 > v3 && v4 > v5 && v4 != 0){     
        max = v4;
 }
 // V5
 if (v5 > v1 && v5 > v2 && v5 > v3 && v5 > v4 && v5 != 0){     
        max = v5;
 }
 
 // fim do Determina o maior numero
 
 // Determina o menor numero
 
 // V1 
 if (v1 < v2 && v1 < v3 && v1 < v4 && v1 < v5 && v1 != 0){     
        min = v1;
 }
 
 // V2 
 if (v2 < v1 && v2 < v3 && v2 < v4 && v2 < v5 && v2 != 0){     
        min = v2;
 }
 
 // V3 
 if (v3 < v1 && v3 < v2 && v3 < v4 && v3 < v5 && v3 != 0){     
        min = v3;
 }
 
 // V4 
 if (v4 < v1 && v4 < v2 && v4 < v3 && v4 < v5 && v4 != 0){     
        min = v4;
 }
 // V5
 if (v5 < v1 && v5 < v2 && v5 < v3 && v5 < v4 && v5 != 0){     
        min = v5;
}

 
 // fim do Determina o menor numero 
 
 
 
  	  	
  	

     printf("\n\n");
  printf("console: A soma das variaveis = %d",sma);
     printf("\n");
  printf("\nconsole: O maior valor desses = %d",max);
     printf("\n");
  printf("\nconsole: O menor valor desses = %d",min);
     printf("\n");
    printf("\n\n");
  
        system("pause");
		
		menu = 1;
break;

case 4:
	system("cls");	
printf("                                               - MINI PROGRAMS PACKAGE -");
printf("\n                                                   ! MADE BY ALLEN !");
printf("\n");
printf("Obrigado por ter me executado!\n");
system("pause");
break;

default:
	system("cls");	
printf("                                               - MINI PROGRAMS PACKAGE -");
printf("\n                                                   ! MADE BY ALLEN !");
printf("\n");
printf("Obrigado por ter me executado!\n");
printf("\n");
system("pause");
} 
  

} while (menu == 1);

}
