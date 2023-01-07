# include <stdio.h>
# include <stdlib.h>
# include <windows.h>
# include <conio.h>

# include "allen.h"

int *p;

void gotoxy(int x, int y)
  {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }

void MenuOptions (int Lmenu)
{
    system("CLS");
    int Lmenu2;

    // Around Menu
    printf(" +");
        for (Lmenu = 0; Lmenu < 27; Lmenu++) printf("-");
    printf("+\n ");

    while (Lmenu2 != 14) {
                            printf("|");
                                for (Lmenu = 0; Lmenu < 27; Lmenu++) printf(" ");
                            printf("|\n ");
                            Lmenu2++;
                         }

    printf("+");
        for (Lmenu = 0; Lmenu < 27; Lmenu++) printf("-");
    printf("+\n ");

    // Print Options
    gotoxy(5, 2); printf("| ATENDIMENTO CAIXA |");
    gotoxy(8, 3); printf("< 24H POR DIA! >");
    gotoxy(2, 5); printf("---------------------------");
    gotoxy(9, 7); printf("ACESSAR CONTA");
    gotoxy(13, 9); printf("AJUDA");
    gotoxy(9, 11); printf("ADMINISTRAÇÃO");
    gotoxy(12, 13); printf("HORÁRIOS");
}

int MenuControl (int pos, char c)
{
    pos = 1;

    do {

    if ( pos == 1 ) { gotoxy(7, 7);  printf(">"); gotoxy(23, 7);  printf("<"); }
    else if ( pos != 1 ) { gotoxy(8, 7); printf("\b \b"); gotoxy(24, 7); printf("\b \b"); }

    if ( pos == 2 ) { gotoxy(7, 9);  printf(">"); gotoxy(23, 9);  printf("<"); }
    else if ( pos != 2 ) { gotoxy(8, 9); printf("\b \b"); gotoxy(24, 9); printf("\b \b"); }

    if ( pos == 3 ) { gotoxy(7, 11); printf(">"); gotoxy(23, 11); printf("<"); }
    else if ( pos != 3 ) { gotoxy(8, 11); printf("\b \b"); gotoxy(24, 11); printf("\b \b"); }

    if ( pos == 4 ) { gotoxy(7, 13); printf(">"); gotoxy(23, 13); printf("<"); }
    else if ( pos != 4 ) { gotoxy(8, 13); printf("\b \b"); gotoxy(24, 13); printf("\b \b");}

    c = getch();

    if ( c == 80 ) { pos++; }
    if ( c == 72 ) { pos--; }

    if ( pos == 0 ) { pos++;}
    if ( pos == 5 ) { pos--;}


    } while ( c != 13 );

    return pos;

}





