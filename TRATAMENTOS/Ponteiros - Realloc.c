# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int kaj, tam, tam2, jak;
unsigned int receive;

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

    jak = kaj;

    printf("\n ");

    system("PAUSE > NULL");

    printf("\n > Defina o novo tamanho do vetor: ");
    scanf("%d", &tam2);

    p = (int *) realloc ( p, tam2);

    receive = tam + tam2;

    system("cls");

    for ( jak = kaj; jak < receive; jak++) p [jak] = rand () % 50;

    printf("\n ! Tamanho novo do vetor = %d\n", tam2);

    for ( kaj = 0; kaj < receive; kaj++) printf("\n %d => ( %d )", kaj, p[kaj]);

    printf("\n ");

    system("PAUSE > NULL");



 return 13;
}
