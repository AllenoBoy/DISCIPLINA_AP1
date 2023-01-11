# include <stdio.h>
# include <windows.h>
# include <conio.h>
# include <locale.h>

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

int main () {

    setlocale (LC_ALL, "");

    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);     /* Salvar estado atual */
    saved_attributes = consoleInfo.wAttributes;             /* Salvar estado atual */

    SetConsoleTextAttribute(hConsole, saved_attributes);    /* Voltando ao estado original */
    printf("\n FRASE 1 -");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);      /* Escrevendo com a cor vermelha */
    printf (" Tudo o que um sonho precisa para ser realizado é alguém que acredite que ele possa ser realizado.\n");

    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\n FRASE 2 -");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf (" A amizade desenvolve a felicidade e reduz o sofrimento, duplicando a nossa alegria e dividindo a nossa dor.\n");

    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\n FRASE 3 -");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf (" Acredite em si próprio e chegará um dia em que os outros não terão outra escolha senão acreditar com você.\n");

    getch();
    return 0;
}
