# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <time.h>
# include <conio.h>

int kaj = 0;

int main ()
{
    setlocale(LC_ALL, "");

    time_t TIni, TFim;

    TIni = time (NULL);
    for (kaj = 0; kaj < 10000; kaj++) printf("\n %d", kaj);
    TFim = time (NULL);

    // POSSIBILIDADE DE FORMATAÇÃO TBM <MAS O QUE INTERESSA É OS SEGUNDOS>
    printf("\n\n\n Tempo de execução: %f", difftime(TFim, TIni));


    getch();
    system("CLS");
    return 0;
}
