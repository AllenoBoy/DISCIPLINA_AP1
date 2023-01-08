# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <ctype.h>
# include <string.h>

int kaj = 0;

// modos de abertura de arquivos:
/*
   w  = Escrita;
   r  = Leitura;
   a  = Anexar;
   r+ = Leitura e Escrita;
   w+ = Leitura e Escrita ( apaga o conteúdo do arquivo se ele existir );
   a+ = Leitura e Escrita ( adiciona ao final do arquivo );


 */

// Denominação do arquivo
FILE *file;
char texto [500];

int main ()
{
    setlocale(LC_ALL, "");
    system("CHCP 1252 > NULL");

    file = fopen("arquivo.txt", "w+");

    if (file)
    {
        printf("\n Insira as informações (para encerrar digite um caracter): \n");
        scanf("%500[^\n]", texto);

        setbuf(stdin, NULL);

        while (strlen (texto) > 1)
        {
            fputs(texto, file);
            fputc('\n', file);
            scanf("%500[^\n]", texto);
            setbuf(stdin, NULL);
        }

        fclose(file);



    }
    else printf("\n Erro ao abrir arquivo!");


    return 0;
}
