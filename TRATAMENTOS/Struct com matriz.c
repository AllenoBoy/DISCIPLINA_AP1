# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int kaj = 0, jak = 0;

typedef struct
{
    int matricula;

} nome;


int main ()
{
    setlocale(LC_ALL, "");

    nome robson [3] [5];

    robson [0] [0].matricula = 202200132;
    robson [0] [1].matricula = 202200192;
    robson [0] [2].matricula = 202200152;
    robson [0] [3].matricula = 202200160;
    robson [0] [4].matricula = 202200172;

    robson [1] [0].matricula = 202200922;
    robson [1] [1].matricula = 202200442;
    robson [1] [2].matricula = 202200222;
    robson [1] [3].matricula = 202200167;
    robson [1] [4].matricula = 202200198;

    robson [2] [0].matricula = 202200144;
    robson [2] [1].matricula = 202200657;
    robson [2] [2].matricula = 202200296;
    robson [2] [3].matricula = 202200365;
    robson [2] [4].matricula = 202200448;


    for (kaj = 0; kaj < 3; kaj++) for (jak = 0; jak < 5; jak++)
                                                               {
    printf("\n Matrículas dos Alunos: %d", robson[kaj][jak].matricula);
                                                               }
    printf("\n ");
    system("pause > null");



    return 0;
}
