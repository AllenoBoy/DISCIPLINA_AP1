#include <stdio.h>
#include <stdlib.h>

// TABELA ASCII 


int main (void) {
	
	printf("4) Operacoes com x e y\n");
	
	int kaj = 1, X = 0, Y = 0, par = 0, impar = 1;
	
    printf("Insira o VALOR DE X: ");
    
    scanf("%d", &X);
    

    printf("Insira o VALOR DE Y: ");
    
    scanf("%d", &Y);
    
    
    if (Y <= X) {
    	
        printf("X não pode ser maior que Y\n");
        return 0;
        
    }
    
    for (kaj = 1; kaj < Y; kaj++) {
    	
        if (kaj % 2 == 0) {
        	
		par += kaj;         // faz a soma de todos os valores que forem gerados a partir de kaj
		
		                  }
        
        else              { // faz a multiplicação de todos os valores que forem gerados a partir de kaj
		
	    impar *= kaj;
		                  }
        
    }
    
    system("cls");
    
    printf("A soma dos numeros pares nesse intervalo = %d\n", par);
    
    printf("A multiplicação dos numeros impares nesse intervalo = %d\n", impar);
	

}
