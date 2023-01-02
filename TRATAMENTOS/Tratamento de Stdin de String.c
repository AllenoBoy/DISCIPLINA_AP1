# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# include <ctype.h>
# include <conio.h>

char nomeUser[50];
int kaj, tamanho = 0;

void main () {

    // INICIALIZAÇÕES DO CONSOLE

    system("CHCP 1252 > NULL"); // Permite a entrada do usuário com strings acentuadas;
    system("COLOR A");          // Define a cor do texto para verde (padrão A);
    setlocale(LC_ALL, "");      // Define o teclado para o padrão do sistema;


do {

    system("CLS");

    tamanho = 0;

    printf("\n Insira um nome válido: ");



    // Uso de fgets por que?
    // 1 - função gets é perigoso (risco de bufferoverflow)!
    // 2 - scanf("%s", string); Não recebe espaços vazios!
    // 3 - Para realizar validação de entrada é melhor (agora)!
    // 4 - scanf(...); não recebe espaços vazios -> ' '!

    fgets(nomeUser, sizeof(nomeUser), stdin);
 // fgets( string, tamanho da string, stdin = entrada do usuário );

    setbuf(stdin, NULL);
 // versão melhorada de fflush(stdin);

    // PROCESSO DE TRATAMENTO E VALIDAÇÃO DE STDIN

    tamanho = strlen(nomeUser); // RECEBE O TAMANHO DA STRING COM ESPAÇOS

    // FAZ A VARREDURA COMPLETA DO VETOR DE CARACTERES VULGO STRING
    // E VERIFICA OS LOCAIS QUE POSSUI UM ESPAÇO E REDUZ DA INT TAMANHO
    // ESSES ESPAÇOS VAZIOS;
    for (kaj = 0; kaj < 50; kaj++) { if (nomeUser[kaj] == ' ') { tamanho--; } }

    // ELIMINA O \n NO FINAL DA STRING
    tamanho = tamanho - 1;

    printf(" ");
    puts(nomeUser);


} while (tamanho <= 0);

printf("\n\n Tamanho = %d", tamanho);
getch();




             }
