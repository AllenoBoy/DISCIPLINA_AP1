#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // necessario p/ as funcoes rand() e srand()
#include <time.h>   //necessario p/ func o time()






// testado e funcionando 

int ais, sma, max, min, op;      /* Variaveis do exercicio 08 
                                                               (ais = seria o "i")
															   (sma = soma dos valores)
															   (max e min = Maior e Menor)*/
                                                               
int v1, v2, v3, v4, v5;      /* Variaveis do exercicio 08*/      // (variaveis para realizar oque e pedido no exercicio)
int main(){

	
do {

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
  printf("\nconsole: 0 - exit\n");
  printf("\nconsole: 1 - restart\n");
   printf("\nuser: ");

op = 2;

   scanf("%i",&op);
   printf("\n");
    
	system("cls"); // limpar o que foi escrito
    printf("console: !!!!!!!!!!!!!!!!!!! restart finished !!!!!!!!!!!!!!!!!!!\n");
    printf("\n");
    
} while (1 == op);
 system("cls"); // limpar o que foi escrito
 printf("\nconsole: adios user!\n");
  //getch(); // serve para pedir para clicar mais uma vez para enfim o programa quitar
 return 0;
}
