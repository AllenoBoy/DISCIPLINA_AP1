# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int kaj = 0;

typedef struct
{
    int idade;
    int dia;
    int mes;
    int ano;

} Pessoas;

int main ()
{
    setlocale(LC_ALL, "");

    Pessoas robson [4];

    robson[0].idade = 12;
    robson[1].idade = 24;
    robson[2].idade = 35;
    robson[3].idade = 67;

    for (kaj = 0; kaj < 4; kaj++) printf("\n %d", robson[kaj].idade);



    return 0;
}
