# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <conio.h>

int kaj;
char c;

int main ()
{
    setlocale(LC_ALL, "");

    kaj = getch ();

    printf("\n %d", kaj);



    return 0;
}
