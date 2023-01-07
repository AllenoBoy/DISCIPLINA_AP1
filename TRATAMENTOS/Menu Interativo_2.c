// BIBLIOTECAS UTILIZADAS
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <stdbool.h>
# include <iso646.h>
# include <string.h>
# include <conio.h>
# include <windows.h>
# include <time.h>

// VARIÁVEIS GLOBAIS
   int kaj = 0;

   int control;
   int pos = 1;

// FUNÇÕES

// FUNÇÃO PRINCIPAL

void gotoxy(int x, int y)
  {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }



void main ()
{
 // Inicializações do Console:
    system("CLS");
    // printf("\e[?25l");
    system("CHCP 1252 > NULL");
    system("COLOR A");


 // Código:

 // INFO CASO DE USO DE INT OU CHAR OS CÓDIGOS SÃO OS SEGUINTES
 /*
                                                        seta do teclado para direita  = 77;
                                                        seta do teclado para esquerda = 75;
                                                        seta do teclado para cima     = 72;
                                                        seta do teclado para baixo    = 80;

                                                        tecla do teclado 'w' = 119;
                                                        tecla do teclado 's' = 115;
                                                        tecla do teclado 'a' = 97;
                                                        tecla do teclado 'd' = 100;

                                                        tecla do teclado 'Enter'     = 13;
                                                        tecla do teclado 'Backspace' = 9;

 */

                    printf("\n\n      Iniciar Jogo");
                    printf("\n\n      Carregar Jogo");
                    printf("\n\n      Configurações");
                    printf("\n\n      Sobre o Jogo");
                    printf("\n\n      Sair do Jogo\n\n");

do
{



    if (pos == 1) { gotoxy(20, 2); }
    if (pos == 2) { gotoxy(20, 4); }
    if (pos == 3) { gotoxy(20, 6); }
    if (pos == 4) { gotoxy(20, 8); }
    if (pos == 5) { gotoxy(20, 10); }




control = getch();

if ( control == 115 || control == 80 ) { pos++; }
if ( control == 119 || control == 72 ) { pos--; }

if ( pos == 0 ) { pos++;}
if ( pos == 6 ) { pos--;}



} while (control != 13);

if ( pos == 1) { system("CLS"); printf("\n T1");}
if ( pos == 2) { system("CLS"); printf("\n T2");}
if ( pos == 3) { system("CLS"); printf("\n T3");}
if ( pos == 4) { system("CLS"); printf("\n T4");}
if ( pos == 5) { system("CLS"); printf("\n T5");}



}
