#include <stdio.h>

int n, f;  /* Variaveis do exercicio 06 */ 

int main(){
   printf("\n-> Calculo de Fatorial");
printf("\n");	
  printf("\n--> Entre com um valor inteiro positivo: ");
  scanf("%d", &n);
  
  f = 1;

  while (n > 0) {
    f = f *  n;
    n--;                    
  }

  printf("\n---> Resultado = %d",f);
  printf("\n");

  return 0;
}
