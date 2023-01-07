# include <stdio.h>
# include <stdlib.h>

# include "pos1_caixa.h"
# include "allen.h"

int jak, kaji;

void pos1 (int acess)
{
    system("CLS");
    system("COLOR 0A");
    system("TITLE CONTA");


    printf(" +");
    for (jak = 0; jak < 27; jak++) printf("-");
    printf("+\n");

    for (kaji = 0; kaji < 14; kaji++) { printf(" |");

    for (jak = 0; jak < 27; jak++) { printf(" "); }

                                       printf("|\n"); }

    printf(" +");
    for (jak = 0; jak < 27; jak++) printf("-");
    printf("+");

    gotoxy(2, 4); printf("---------------------------");
    gotoxy(5, 2); printf("< ACESSE A SUA CONTA >");
    gotoxy(9, 6); printf("INSIRA O SEU");
    gotoxy(7, 7); printf("CÓDIGO DE ACESSO");
    gotoxy(4, 8); printf("PARA PODER ENTRAR AQUI!");
    gotoxy(2, 10); printf("---------------------------");
    gotoxy(4, 13); printf("_______________________");

    gotoxy(4, 12); printf("> "); printf("\e[?25h");

    scanf("%d", &acess);
    setbuf(stdin, NULL);

    if (acess == 202200132) { printf("\n Robson!");}
    getchar();


}
