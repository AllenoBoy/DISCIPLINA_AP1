# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int kaj = 0;

void imprimir (int *num)
{
     printf("\n no void:  %d\n", *num);
     *num = 80;
}

int main ()
{
    setlocale(LC_ALL, "");

    int idade = 12;

    imprimir (&idade);
    printf("\n No main: %d\n", idade);




    return 0;
}
