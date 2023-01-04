# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <iso646.h>

    bool saida = false;

int main (int integer) {

    printf("\n Comparation of a intenger\n\n");

do {

    integer = 0;

    printf(" > Please insert a intenger value: ");
    scanf("%d", &integer);
    setbuf(stdin, NULL);

    if ( integer == 1 ) { saida = true; }

   } while (saida not_eq true);

return 0;
            }
