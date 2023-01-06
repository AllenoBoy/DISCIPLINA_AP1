# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int kaj = 0;

void imprimir (int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
        printf("\n %d ", *vet + i);
}

int main ()
{
    setlocale(LC_ALL, "");

    int vet [10] = {10, 89, 23, 45, 22, 23, 45, 99, 91, 84 };
    imprimir(vet, 10);

    return 0;
}
