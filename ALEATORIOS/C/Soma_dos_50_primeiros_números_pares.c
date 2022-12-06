#include <stdio.h>
#include <stdlib.h>

// TABELA ASCII 


int main (void) {
	
	int kaj , soma = 0;  
	
	printf("\n 3) Soma dos 50 numeros pares iniciais: \n\n");
	
	
system("pause");
system("cls");

for (kaj = -1; kaj <= 50; kaj++) {  

if (kaj % 2 == 0) { 

    printf("\n %d", kaj);
    soma += kaj;
	  
}
}  

printf("\n\n");
system("pause");
system("cls");


printf("\nSoma dos 50 primeiros numeros pares iniciais = %d\n", soma);  

return 0;  

}
