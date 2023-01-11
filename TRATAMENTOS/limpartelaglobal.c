# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <conio.h>

void clearScreen ()
{
#ifndef _WIN32

system("cls");

#else

system("cls");

#endif
}




int main ()
{
    setlocale(LC_ALL, "");

    printf("\n Testando a portabilidade!\n");

    getch();



    clearScreen ();



    return 0;
}
