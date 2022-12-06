#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// TABELA ASCII 

// VARIÁVEIS GLOBAIS e ARRAYS / VETORES
int kaj = 1;             // for para recepitação de valores 


int city[5], veic[5], acid[5], cor;

int main (void) {

	   system("COLOR DF"); // cuteness
	   
	
	    printf("\n 6) Operacao com termos e um valor positivo \n\n");
	    
	    printf("\n Aviso: ESSE CODIGO NAO TEM CONTROLE CONTRA A REPETICAO DE CIDADES, MAS NAO DEIXA COLOCAR VALORES ERRADOS E CLARO O MAIS IMPORTANTE OS VEICULOS E ACIDENTES ESTAO NO FORMATO INT OU SEJA SO ACEITAM ATE 15 NUMEROS NA MESMA VARIAVEL, E O RESULT ADO DAS MEDIAS ESTA CAPADO PRA NUMERO INTEIRO SEM VIRGULA.\n\n");
	    
	    
	    printf("\n Deseja mudar para a cor padrao?");
	    printf("\n Digite 1 para sim e 2 para nao: ");
	    scanf("%d", &cor);
	    printf("\n\n");
	    
	   if (cor == 1) {system("COLOR 0F");}
	   if (cor != 1) {system("COLOR DF");}

	    system("pause");	 
	    system("cls");

// cidade 1 //////////////////////////////////////////////////////////////
	    
	     printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
	
	    printf("\n < Controle > \n"); 
	    			   
	        do { 
			
			printf("\n Digite o codigo da PRIMEIRA cidade: ");
			scanf("%d", &city[1]);			      
			      getchar(); // precisa pra zerar a variável 
			      			      
			   } while (city[1] < 1 || city[1] > 7);
			   
			   //////////////////////////////////////////////////////////////
			   
			     do {
			   
				 printf("\n Digite a quantidade de veiculos de passeio: ");
				    scanf("%d", &veic[1]);
				       
					   getchar();
				    } while (veic[1] <= 0);
				    
				    			   
			           //////////////////////////////////////////////////////////////
				    do {
				    	
				       printf("\n Digite quantos acidentes de transito ocorrem com esses veiculos: ");
				          scanf("%d", &acid[1]);
				       getchar(); 
				                                 
				       } while (acid[1] <= 0);
					   
			           //////////////////////////////////////////////////////////////
					   
// cidade 2 //////////////////////////////////////////////////////////////

Sleep(500);
system("cls");

         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
		 
	printf("\n Cidades Escolhidas: %d\n", city[1]);
		 
	    printf("\n < Controle > \n");

	        do { 
			
			printf("\n Digite o codigo da SEGUNDA cidade: ");
			scanf("%d", &city[2]);
			      getchar(); // precisa pra zerar a variável 
			      
			   } while (city[2] < 1 || city[2] > 7 && city[2] != city[1]);
			   
			   //////////////////////////////////////////////////////////////
			   
			     do {
			   
				 printf("\n Digite a quantidade de veiculos de passeio: ");
				    scanf("%d", &veic[2]);
				       getchar();
				    
				    } while (veic[2] <= 0);
				    
				    			   
			           //////////////////////////////////////////////////////////////
				    do {
				    	
				       printf("\n Digite quantos acidentes de transito ocorrem com esses veiculos: ");
				          scanf("%d", &acid[2]);
				       getchar(); 
				                                 
				       } while (acid[2] <= 0);
					   
//////////////////////////////////////////////////////////////	

// cidade 3 //////////////////////////////////////////////////////////////

Sleep(500);
system("cls");

         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
		 
	printf("\n Cidades Escolhidas: %d, %d\n", city[1], city[2]);
	
	    printf("\n < Controle > \n");

	        do { 
			
			printf("\n Digite o codigo da TERCEIRA cidade: ");
			scanf("%d", &city[3]);
			      getchar(); // precisa pra zerar a variável 
			      
			   } while (city[3] < 1 || city[3] > 7 && city[3] != city[1] && city[3] != city[2]);
			   
			   //////////////////////////////////////////////////////////////
			   
			     do {
			   
				 printf("\n Digite a quantidade de veiculos de passeio: ");
				    scanf("%d", &veic[3]);
				       getchar();
				    
				    } while (veic[3] <= 0);
				    
				    			   
			           //////////////////////////////////////////////////////////////
				    do {
				    	
				       printf("\n Digite quantos acidentes de transito ocorrem com esses veiculos: ");
				          scanf("%d", &acid[3]);
				       getchar(); 
				                                 
				       } while (acid[3] <= 0);
					   
//////////////////////////////////////////////////////////////	

// cidade 4 //////////////////////////////////////////////////////////////

Sleep(500);
system("cls");

         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n");
		 
	printf("\n Cidades Escolhidas: %d, %d, %d\n", city[1], city[2], city[3]); 
	
	    printf("\n < Controle > \n");

	        do { 
			
			printf("\n Digite o codigo da QUARTA cidade: ");
			scanf("%d", &city[4]);
			      getchar(); // precisa pra zerar a variável 
			      
			   } while (city[4] < 1 || city[4] > 7 && city[4] != city[1] && city[4] != city[2] && city[4] != city[3]);
			   
			   //////////////////////////////////////////////////////////////
			   
			     do {
			   
				 printf("\n Digite a quantidade de veiculos de passeio: ");
				    scanf("%d", &veic[4]);
				       getchar();
				    
				    } while (veic[4] <= 0);
				    
				    			   
			           //////////////////////////////////////////////////////////////
				    do {
				    	
				       printf("\n Digite quantos acidentes de transito ocorrem com esses veiculos: ");
				          scanf("%d", &acid[4]);
				       getchar(); 
				                                 
				       } while (acid[4] <= 0);
					   
//////////////////////////////////////////////////////////////	

// cidade 5 //////////////////////////////////////////////////////////////

Sleep(500);
system("cls");

         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
		 
	printf("\n Cidades Escolhidas: %d, %d, %d, %d\n", city[1], city[2], city[3], city[4]); 
	
	    printf("\n < Controle > \n");

	        do { 
			
			printf("\n Digite o codigo da QUINTA cidade: ");
			scanf("%d", &city[5]);
			      getchar(); // precisa pra zerar a variável 
			      
			   } while (city[5] < 1 || city[5] > 7 && city[5] != city[1] && city[5] != city[2] && city[5] != city[3] && city[5] != city[4]);
			   
			   //////////////////////////////////////////////////////////////
			   
			     do {
			   
				 printf("\n Digite a quantidade de veiculos de passeio: ");
				    scanf("%d", &veic[5]);
				       getchar();
				    
				    } while (veic[5] <= 0);
				    
				    			   
			           //////////////////////////////////////////////////////////////
				    do {
				    	
				       printf("\n Digite quantos acidentes de transito ocorrem com esses veiculos: ");
				          scanf("%d", &acid[5]);
				       getchar(); 
				                                 
				       } while (acid[5] <= 0);
					   
//////////////////////////////////////////////////////////////	

//ENDING DE ANIME 

Sleep(500);
system("cls");

         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
		 
	printf("\n Cidades Escolhidas: %d, %d, %d, %d, %d.\n\n\n", city[1], city[2], city[3], city[4], city[5]);

system("pause");

// CORREÇÃO PARA A EXECUÇÃO DA LETRA A 

if (acid[1] == acid[2] || acid[1] == acid[3] || acid[1] == acid[4] || acid[1] == acid[5]) { acid[2]++;acid[3]++;acid[4]++;acid[5]++;}
 if (acid[2] == acid[1] || acid[2] == acid[3] || acid[2] == acid[4] || acid[2] == acid[5]) { acid[1]++;acid[3]++;acid[4]++;acid[5]++;}
  if (acid[3] == acid[1] || acid[3] == acid[2] || acid[3] == acid[4] || acid[3] == acid[5]) { acid[2]++;acid[1]++;acid[4]++;acid[5]++;}
   if (acid[4] == acid[1] || acid[4] == acid[2] || acid[4] == acid[3] || acid[4] == acid[5]) { acid[2]++;acid[3]++;acid[1]++;acid[5]++;}
    if (acid[5] == acid[1] || acid[5] == acid[2] || acid[5] == acid[3] || acid[5] == acid[4]) { acid[2]++;acid[3]++;acid[4]++;acid[1]++;}

// MAIOR E MENOR INDICE -                letra a)

int maior, menor, maiorc, menorc;

// maior 

if (acid[1] > acid[2] && acid[1] > acid[3] && acid[1] > acid[4] && acid[1] > acid[5]) { maior = acid[1]; maiorc = city[1];} 
if (acid[2] > acid[1] && acid[2] > acid[3] && acid[2] > acid[4] && acid[2] > acid[5]) { maior = acid[2]; maiorc = city[2];} 
if (acid[3] > acid[1] && acid[3] > acid[2] && acid[3] > acid[4] && acid[3] > acid[5]) { maior = acid[3]; maiorc = city[3];} 
if (acid[4] > acid[1] && acid[4] > acid[2] && acid[4] > acid[3] && acid[4] > acid[5]) { maior = acid[4]; maiorc = city[4];} 
if (acid[5] > acid[1] && acid[5] > acid[2] && acid[5] > acid[3] && acid[5] > acid[4]) { maior = acid[5]; maiorc = city[5];} 

// menor

if (acid[1] < acid[2] && acid[1] < acid[3] && acid[1] < acid[4] && acid[1] < acid[5]) { menor = acid[1]; menorc = city[1];} 
if (acid[2] < acid[1] && acid[2] < acid[3] && acid[2] < acid[4] && acid[2] < acid[5]) { menor = acid[2]; menorc = city[2];} 
if (acid[3] < acid[1] && acid[3] < acid[2] && acid[3] < acid[4] && acid[3] < acid[5]) { menor = acid[3]; menorc = city[3];} 
if (acid[4] < acid[1] && acid[4] < acid[2] && acid[4] < acid[3] && acid[4] < acid[5]) { menor = acid[4]; menorc = city[4];} 
if (acid[5] < acid[1] && acid[5] < acid[2] && acid[5] < acid[3] && acid[5] < acid[4]) { menor = acid[5]; menorc = city[5];}





// MÉDIA DE VEÍCULOS NAS CINCO CIDADES - letra b) 

int medVeic5R, medVeic5S;

medVeic5S = veic[1] + veic[2] + veic[3] + veic[4] + veic[5];
medVeic5R = medVeic5S / 5;


// IFS PARA CÁLCULO DA MÉDIA -           letra c)

int div = 0;
long SomaDosTransitos, MediaDosTransitos;

if (acid[1] < 2000) {div++;}
    else if (acid[1] > 2000) {acid[1] = 0;}
    
if (acid[2] < 2000) {div++;}
    else if (acid[2] > 2000) {acid[2] = 0;}
    
if (acid[3] < 2000) {div++;}
    else if (acid[3] > 2000) {acid[3] = 0;}
    
if (acid[4] < 2000) {div++;}
    else if (acid[4] > 2000) {acid[4] = 0;}
    
if (acid[5] < 2000) {div++;}
    else if (acid[5] > 2000) {acid[5] = 0;}
    
    SomaDosTransitos = acid[1] + acid[2] + acid[3] + acid[4] + acid[5];
    MediaDosTransitos = SomaDosTransitos / div;
    
// REAL ANIME ENDING 

Sleep(500);
system("cls");
Sleep(500);
system("COLOR 00");
         printf("\n Codigo das Cidades\n"); 
	     printf("\n 1 - Porto Franco.");
		 printf("\n 2 - Grajau.");
		 printf("\n 3 - Imperatriz."); 
		 printf("\n 4 - Sao Luiz.");   
		 printf("\n 5 - Mirador."); 
		 printf("\n 6 - Remanso."); 
		 printf("\n 7 - Barra do Corda.\n"); 
		 
	printf("\n Cidades Escolhidas: %d, %d, %d, %d, %d.\n", city[1], city[2], city[3], city[4], city[5]);
	
	printf("\n letra a) A cidade %d e a que tem o maior indice de acidentes de transito com %d acidentes.\n", maiorc, maior);
	
	printf("\n letra a) A cidade %d e a que tem o menor indice de acidentes de transito com %d acidentes.\n", menorc, menor);
	
	printf("\n letra b) A Media dos veiculos nas cinco cidades = %d\n", medVeic5R);
	
	printf("\n letra c) A media de acidentes de transitos em cidades com menos de 2000 veiculos = %d\n\n\n", MediaDosTransitos);
       
return 0;
}
