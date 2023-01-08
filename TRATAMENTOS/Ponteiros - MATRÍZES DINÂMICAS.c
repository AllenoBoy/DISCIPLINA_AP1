# include <stdio.h>
# include <stdlib.h>
# include <time.h>

    int kaj;

 int main ()
{

    // ALOCAÇÃO DINÂMICA DE UMA MATRIZ.
   
    int **matriz, linha, coluna;
    matriz = (int **) malloc (4 * sizeof (int*) );
    for (kaj = 0; kaj < 4; kaj++) matriz [kaj] = (int *) malloc (3 * sizeof (int) );
   
      // MATRIZ = VETOR DE VETOR;
      // PONTEIRO = VETOR;
    
    

        srand (time (NULL));

        for ( linha  = 0; linha < 4; linha++) for ( coluna = 0; coluna < 3; coluna++)
            {
                matriz [linha] [coluna] = rand () % 100;
            }

        printf("\n [ Printf de matriz usando ponteiros de forma dinamica! ]\n\n");

        for ( linha  = 0; linha < 4; linha++) for ( coluna = 0; coluna < 3; coluna++) {

                printf(" | %0.2d |", matriz [linha] [coluna] );

                if (coluna == 2) {printf("\n");}

                                                                                      }


 return 0;
}
