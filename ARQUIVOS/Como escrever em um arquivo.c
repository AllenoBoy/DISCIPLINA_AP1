# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

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
char letra;

int main ()
{
    setlocale(LC_ALL, "");

    file = fopen("robson.txt", "w");

    if (file)
    {
        printf("\n Insira um caracter para ser enserido no arquivo: ");
        scanf("%c", &letra);

        while (letra != '\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
        }

        fclose(file);



    }
    else printf("\n Erro ao abrir arquivo!");


    return 0;
}
