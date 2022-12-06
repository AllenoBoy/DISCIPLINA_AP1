#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TABELA ASCII 

char entradaCaractere[50];
int entradaRamos = -1, j, kaj, linha, coluna;
 

int main (void) {
int kaj, j = 0,  EntradaCaractere, EntradaRamos;
	
printf(" 5) Arvore cortada: obs.: tenta usar mais de um sinal \n");
	
 printf ("\n Insira qual caractere vc deseja: ");
        
		 strupr(gets(entradaCaractere));          // caso o user adicione mais de um caractere
do {

 printf ("\n Insira quantos ramos vc deseja: ");
         scanf ("%d", &entradaRamos); 
         
    if (entradaRamos < 0) {
	  entradaRamos = 1; 
	}
         
   } while (entradaRamos < 0);

system("cls");
do { 

                            
                            printf("\n %s", entradaCaractere);
                            kaj++;  // 4 nesse loop 
                            
                            for (j = 1; j < kaj; j++) {
                            printf("%s", entradaCaractere); // printar 4 vezez
							} 

} while (kaj != entradaRamos);
 
printf("\n\n\n"); 

getchar ();
return 0;
               }
