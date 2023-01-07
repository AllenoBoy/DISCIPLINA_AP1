# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <conio.h>
# include <stdbool.h>

# include "allen.h"
# include "pos1_caixa.h"

int kaj = 0; // GLOBAL LOOP CONTROL
int x, y;    // GOTOXY VARIABLES
int position;// SET MENU POSITION AND CONTROL
char c;
int acess;
int teste;

int main ()
{
    system("CLS");
    system("MODE CON: COLS=31 LINES=17");
    system("CHCP 1252 > NULL");
    system("COLOR F1");
    system("TITLE MENU CAIXA");
    printf("\e[?25l");
    setlocale(LC_ALL, "");

    MenuOptions (kaj);

    teste = MenuControl(position, c);

    switch (teste)
    {
        case 1:

            pos1(acess);
            main();


               break;

        case 2:
               break;

        case 3:
               break;

        case 4:

               break;

        default:
            main();
                break;

    }

}
