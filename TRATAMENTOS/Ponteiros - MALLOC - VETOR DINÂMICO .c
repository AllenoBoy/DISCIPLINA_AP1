# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int *d, tam, kaj;

int main ()
{
    printf("\n Insira o tamanho do seu vetor: ");
    scanf("%d", &tam);

    d = (int *) malloc (tam * sizeof(int));

    srand(time(NULL));

    for (kaj = 0; kaj < tam; kaj++) d [kaj] = rand () % 100;

    printf("\n Tamanho do vetor e de %d", tam);

    for (kaj = 0; kaj < tam; kaj++) printf(" < %d >", d [kaj]);

    return 13;
}
