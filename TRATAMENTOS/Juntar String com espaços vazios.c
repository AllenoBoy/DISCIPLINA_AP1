# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int kaj, jak, size;
char entrada [50], formatado [50];

int main () {

    setlocale(LC_ALL,"");

do {

    printf(" > Insira as informações: ");
    fgets(entrada, sizeof(entrada), stdin);
    setbuf(stdin, 0);

   } while (entrada [0] == '\n' || entrada [0] == ' '); // impede espaços vazios em strings

   system("CLS");

    size = strlen(entrada); // tamanho da string

    for ( kaj = 0; kaj < size; kaj++ ) {      // processo para juntar uma string com espaços

        if ( entrada [kaj] == ' ' ) continue; // o uso do continue é muito util (basicamente se atender os requisitos do if)
                                              // basicamente ele ignora;

        formatado [jak] = entrada [kaj];         // o indice da variável que irá armazenar precisa ser diferente de kaj;
        jak++;                                // e esse tal indíce precisa ser incrementado;


                                       }
        formatado [kaj] = '\0';                  // juntar a string

        printf("\n %s", formatado);

            system("pause");
            return 0;
            }

# OUTRA POSSIBILIDADE ABAIXO


int main()
{
    int i=0,k=0;
    char str[51],str2[51]="Ola";

fgets(str,51,stdin);

for(;i<51;i++){
    if(str[i]=='\0')break;
    if(str[i]==' ')continue;
    str2[k]=str[i];
    k++;
}

printf("%s",str2);

return 0;













