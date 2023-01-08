# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int kaj, tam;

 int main ()
{
    int *p;
    srand(time(NULL));

    printf("\n > Defina o tamanho do vetor: ");
    scanf("%d", &tam);


    p = (int *) calloc ( tam, sizeof(int) );

    for (kaj = 0; kaj < tam; kaj++) p [kaj] = rand () % 50;

    printf("\n ! Posicoes preenchidas usando valor recebido em calloc que e = %d\n", tam);

    for (kaj = 0; kaj < tam; kaj++) printf("\n %d => ( %d )", kaj, p[kaj]);



 return 13;
}
