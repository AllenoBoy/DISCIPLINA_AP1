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
FILE *thing;

int main ()
{
    setlocale(LC_ALL, "");
    system("CHCP 1252 > NULL");

    //fprintf

    int matr;
    char nome [100];
    float media;


    thing = fopen("resultado/thing.txt", "w");

    if (thing)
    {
         printf("\n Insira o nome do aluno: ");
         gets(nome);

         setbuf(stdin, NULL);
         system("CLS");

         printf("\n Insira a matrícula do aluno: ");
         scanf("%d", &matr);

         setbuf(stdin, NULL);
         system("CLS");

         printf("\n Insira a média do aluno: ");
         scanf("%f", &media);

         setbuf(stdin, NULL);
         system("CLS");

         fprintf( thing, " Nome do aluno: %s \n Matrícula do aluno: %d \n Média do aluno: %0.2f", nome, matr, media);

    fclose(thing);
    }
    else printf("\n Erro ao criar arquivo!");



    return 13;
}
