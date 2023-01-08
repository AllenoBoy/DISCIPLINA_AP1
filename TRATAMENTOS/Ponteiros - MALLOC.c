# include <stdio.h>
# include <stdlib.h>

int main ()
{

    int *p;
    p = (int *) malloc (sizeof(int));

    printf("\n < OLD > ALLOCATED MEMORY ADRESS = %d", *p);

    *p = 12;

    printf("\n < NEW > ALLOCATED MEMORY ADRESS = %d", *p);


    return 13;
}
