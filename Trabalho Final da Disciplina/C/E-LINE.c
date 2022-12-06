/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
    < DOCUMENTAÇÃO DO PROGRAMA >
  
	  NOME DO PROGRAMA ------> 	E-LINE
	  FRAGMENTO 1 / 2 -------> 	Administração
	  OBJETIVO DO FRAGMENTO ->  Criar fila, Visualizar fila, Apagar a fila.
	
	  DISCIPLINA ------------> 	Algoritimos e Programação I
	  DOCENTE ---------------> 	Ana Paula Freitas Vilela Boaventura
	  GRUPO ----------------->  Gerenciador de fila de ónibus
	  INTEGRANTES ----------->  202200132, 202201161, 202200160	
	  
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    < PRE-REQUISITOS >
  
      1 - USO DE LAÇOS DE REPETIÇÃO
      2 - USO DE VETORES E MATRIZES
      3 - USO DE ESTRUTURAS CONDICIONAIS
      4 - REALIZAR TRATAMENTO DE ERROS
  
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// BIBLIOTECAS QUE FORAM UTILIZADAS
	  
	# include <stdio.h>   // <stdio.h> ---> PERMITE A EXECUÇÃO DAS FUNÇÕES BÁSICAS DA LINGUAGEM C 				
	# include <stdlib.h>  // <stdlib.h> --> PERMITE A EXECUÇÃO DE ALGUMAS FUNÇÕES DE UTILIDADE GERAL COMO O RAND () % 100					
	# include <locale.h>  // <locale.h> --> PERMITE O USO DE ACENTOS, POR DEFINIR O LOCAL DO TECLADO NO BRASIL					
	# include <iso646.h>  // <iso646.h> --> PERMITE O USO DE MACROS, POR EXEMPLO [ o "!=" pode ser escrito assim "not_eq" ]			
	# include <conio.h>   // <conio.h> ---> PERMITE O USO DA FUNÇÃO getch();    				    
	# include <ctype.h>	  // <ctype.h> ---> PERMITE O USO DA FUNÇÃO isdigit (); 
	# include <time.h>    // <time.h> ----> PERMITE O USO DA FUNÇÃO srand ( time (NULL));
	# include <windows.h> // <windows.h> -> PERMITE O USO DA FUNÇÃO Sleep();
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// DECLARAÇÃO DE VARIÁVEIS GLOBAIS REFERENTES A ESTILIZAÇÃO 	
					
	int  kaj = 0;              		  // VARIÁVEL GERAL DE CONTROLE DE LOOP				
	int  losango = 4, linha = 22;     // VARIÁVEIS QUE PRINTAM LINHA E UM LOSANGO            
	int  setaD = 16, setaE = 17;      // VARIÁVEIS QUE PRINTAM SETAS PARA ESQUERDA E DIREITA 
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// DECLARAÇÃO DE VARIÁVEIS GLOBAIS REFERENTES AO MENU
	// DECLARAÇÃO DE VARIÁVEIS ESPECÍFICAS A SAIDA DOS LOOPS
	
	int  howMany = 3;			 	  // VARIÁVEL QUE CONTA A QUANTIDADE DE TENTATIVAS DE LOGIN
	int  admIsValid = 0;              // VARIÁVEL DE CONTROLE PARA SAIR DO LOOP PRINCIPAL
	int  return_painel = 1;           // VARIAVEL DE RETORNO DO LOOP DE APAGAR FILA
	
	// DECLARAÇÃO DE VARIÁVEIS DE CONTROLE DE ENTRADA QUE [ TRATA O CÓDIGO DE ACESSO ]
	
	char wWasTyped [50];   		      // VETOR QUE ARMAZENA O CARACTERE DIGITADO            
	char sEachChaTyped;			      // CHAR QUE RECEBE O Q O USER DIGITAR      
	int  acessCode = 0;               // INT QUE IRÁ SERVIR COMO VALIDADOR               
	int  kaj_mi; 					  // VAR DE CONTROLE DESSA ENTRADA            
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          
	// DECLARAÇÃO DE VARIÁVEIS GLOBAIS REFERENTES A ADMINISTRAÇÃO 
	// A FILA EXISTE? INICIALMENTE NÃO!

	int  isQueueCreated = 0; 
	           
	// DECLARAÇÃO DE VARIÁVEIS DE CONTROLE DE ENTRADA QUE [ DECIDEM O QUE FAZER COM A FILA ]
	
	char wWhatTyp [50];   		      // VETOR QUE ARMAZENA O CARACTERE DIGITADO          
	char sCharTyped;  		  	  	  // CHAR QUE RECEBE O Q O USER DIGITAR      
	int  wToDo = 0; 			  	  // INT QUE IRÁ SERVIR COMO VALIDADOR       
	int  kaj_vi;				  	  // VAR DE CONTROLE DESSA ENTRADA           
		 
	// DECLARAÇÃO DE VARIÁVEIS DE CONTROLE DE ENTRADA QUE [ CONFIRMAM SE REALMENTE QUEREMOS APAGAR A FILA OU NÃO ]
	
	char wWhatITyped [50];   		  // VETOR QUE ARMAZENA O CARACTERE DIGITADO 
	char sTheCharTy;                  // CHAR QUE RECEBE O Q O USER DIGITAR      
	int  letMeGuardForU = 0;          // INT QUE IRÁ SERVIR COMO VALIDADOR       
	int  kaj_ne = 0; 	     		  // VAR DE CONTROLE DESSA ENTRADA           
		
	// DECLARAÇÃO DE VARIÁVEIS PARA REALIZAÇÃO DE ALGUMAS SIMULAÇÕES 
	
	int  placesFilled [6] [2];        // MATRIZ COM 6 LINHAS E 2 COLUNA QUE É UTILIZADA DE BASE NA SIMULAÇÃO DA FILA
	int  line, column; 				  // INT DE LINHA E COLUMN QUE SERVEM COMO ÍNDICES DA MATRIZ placesFilled
	int  count = 0;					  // INT QUE SERVE COMO CONTADOR DE QUANTOS ALUNOS ENTRARAM NA FILA
	int  randomizer [12];			  // VETOR DE INTEIRO QUE ARMAZENA AS MATRÍCULAS DOS ALUNOS NA FILA, SEGUINDO O MODELO DA UFJ 202200000
	char namaEWa [7] = "Fulano ";     // STRING COM O NOME QUE IRÁ SER GERADO JUNTAMENTE AS MATRÍCULAS							     

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void main () { 								 // INICÍO DO CÓDIGO 

// INICIALIZAÇÕES NO CONSOLE

	system("cls");                           // LIMPA A TELA
	setlocale(LC_ALL, "Portuguese_Brazil");  // DEFINE O TECLADO NO PADRÃO BRASILEIRO   																						printf("| Login da AdministraÃ§Ã£o |");
	system("TITLE Administração: E-LINE");   // DEFINE O TÍTULO QUE APARECERÁ NO CONSOLE 
	Beep (332, 650); 						 // BEEP QUE REPRODUZ UM SOM, SEGUINDO A ORDEM DE FREQ. E DURAÇÃO NA SUA DECLARAÇÃO
		  
		  
 
// PRINT ORGANIZADO DE "LOGIN DA ADMINISTRAÇÃO" ! OBS.: TELA BASE DO CONSOLE É DE 120 POSIÇÕES !

	for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n"); // PRINTA 120 VEZES A VAR LINHA E FAZ A QUEBRA DE LINHA NO FIM
	for ( kaj = 0; kaj < 47; kaj++ ) { printf("-"); } 						   // PRINTA 47 VEZES "-" 	 
	printf("| Login da Administração |");              					       // PRINTA "| Login da Administração |"
	for ( kaj = 0; kaj < 47; kaj++ ) { printf("-"); }  printf("\n\n"); 		   // PRINTA 47 VEZES "-"  
	for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n");   // PRINTA 120 VEZES A VAR LINHA E FAZ A QUEBRA DE LINHA NO FIM  
	
	printf("\n %c Seja bem-vindo! ", setaD);	
	printf("Para poder acessar o menu da administração, insira o código de acesso correto.\n");
	printf("\n\t\t !!! AVISO: Caso o código seja inserido errado 3 vezes resultará no fechamento do programa !!!\n\n");
	
	for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } 				   // PRINTA 120 VEZES A VAR LINHA E FAZ A QUEBRA DE LINHA NO FIM
	printf("\n"); 															   // QUEBRA DE LINHA	
	
	

// ENQUANTO admIsValid NÃO FOR IGUAL A 1 ESSE LOOP IRÁ ACONTECER -> LOOP 1

do { 														   	 // LOOP 1		
	
	
	
		howMany--;  // VARIÁVEL QUE CONTA QUANTAS VEZES O USUÁRIO DIGITOU O CÓDIGO SE FOR IGUAL A 3 TENTATIVAS O PROGRAMA ENCERRA
		kaj_mi = 0; // IMPEDE UM BUG DE NÃO RECEBER OUTROS VALORES, ONDE RECEBEMOS A ENTRADA DO CÓDIGO DE ACESSO
  
  

	    // DIZ AO USUÁRIO O QUE ELE PRECISA ESCREVER
		printf ("\n %c Insira o código de acesso: ", losango); 

//  ENQUANTO O USUÁRIO NÃO APERTAR ENTER -> LOOP 1.2	
		
do { 														   	 // LOOP 1.2   		
	    
	    
	// ESSE TIPO DE VALIDAÇÃO DE ENTRADA QUE SERÁ DISCUTIDO ABAIXO FOI UTILIZADO PELO FATO DA LINGUAGEM C, SER PÉSSIMA PARA MANUSEAR O 
	// Stdin DO CÓDIGO, EM OUTRAS PALAVRAS ELA É PESSIMA PARA RECEBER VALORES POR QUE SEM TRATAMENTO CORRETO OCORREM DIVERSOS ERROS
	    
	sEachChaTyped = getch();  // TUDO QUE FOR DIGITADO, CARACTERE POR CARACTERE É ARMAZENADO EM sEachChaTyped QUE EXECUTARÁ UMA VALIDAÇÃO 
							  // ESSA VALIDAÇÃO SERVE PARA SABER SE O QUE FOI DIGITADO FOI UM NÚMERO OU UMA LETRA OU CARACTER SPECIAL 
							  // CASO NÃO TENHA SIDO DIGITADO UM NÚMERO ELE SIMPLESMENTE É IGNORADO, SEGUINDO OS ifs ABAIXO. 
	 
	 
	 
	  	// CHECA SE É UM NÚMERO
		   		
		if ( isdigit ( sEachChaTyped ) not_eq 0) { // ESSE if OCORRE SE O QUE FOI DIGITADO É UM NÚMERO E NÃO É IGUAL A BARRA DE ESPAÇO
//                                                                   if    EachChaTyped       isdigit     not_eq       0 = ESPAÇO

												   // ENTÃO SE O QUE FOI DIGITADO ATENDER AO if
												   	
		    wWasTyped [kaj_mi] = sEachChaTyped;    // ARMAZENA O CARACTERE NO VETOR wWasTyped de 50 posições
		    kaj_mi++;              			       // ADICIONA +1 NO ÍNDICE PARA RECEBER O PRÓXIMO CARACTERE
		    printf ("%c", sEachChaTyped);          // PRINTA O VALOR DIGITADO E VALIDADO
		          
		       									 }   
		       									 
		       									 
		       									 
	    // APAGAR   	
											    
		else if (sEachChaTyped == 8 and kaj_mi)  { // ESSE if OCORRE SE A TECLA BACKSPACE FOR APERTADA E TIVER ALGO ESCRITO
// 															    else if         sEachChaTyped == 8    and   kaj_mi

												   // ENTÃO SE O QUE FOI DIGITADO ATENDER AO else if
				       
		          wWasTyped [kaj_mi] = 0; 		   // JUNTA TODOS OS VALORES DO VETOR EM UMA STRING       
		          kaj_mi--; 					   // DIMINUI -1 NO ÍNDICE DO VETOR APAGANDO A ÚLTIMA COISA DIGITADA    
		          printf("\b \b");				   // DÁ UM BACKSPACE ASSIM APAGANDO UMA CASA      
		          
		       									 }
		       									 
		       									 
	    
} while (sEachChaTyped not_eq 13 ); 							 // LOOP 1.2



// FINALIZAÇÃO DO LOOP DE [ TRATAMENTO DE ENTRADA DO CÓDIGO DE ACESSO ] 
						 
	wWasTyped [kaj_mi] = 0; 	 // JUNTA TODOS OS VALORES DO VETOR EM UMA STRING
	acessCode = atoi(wWasTyped); // ARMAZENA A STRING RECÉM GERADA A TRANSFORMANDO EM INT 
		   			
//	< TÓPICO 4 >	
		   				   					
// if statement PARA FAZER COM QUE CASO A PESSOA DIGITE O CÓDIGO DE ACESSO 3 VEZES, O PROGRAMA SAIA AUTOMÁTICAMENTE
		   						   	
	if ( howMany == 0 ) { admIsValid = 1; }
	
	
			
// O MENU DE ADMINISTRAÇÃO FICA SITUADO DENTRO DE UM if statement 

	if ( acessCode == 202200132 ) { // ACESSO AO PAÍNEL DE CONTROLE FOI PERMITIDO
	Beep (410, 500); 				// FREQ. 410, DURAÇÃO 500
	
	
// ENQUANTO wToDo NÃO FOR IGUAL A 6 ESSE LOOP IRÁ ACONTECER -> LOOP 2

do {  															 // LOOP 2 
		system("cls"); // LIMPA TELA
		kaj_vi = 0;    // IMPEDE UM BUG DE NÃO RECEBER OUTROS VALORES, ONDE RECEBEMOS A ENTRADA QUE DECIDE O QUE FAZER COM A FILA		
																								    
									
									
																			  
	// PRINT ORGANIZADO DE "PAÍNEL DE CONTROLE"
	for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n"); // PRINTA 120 VEZES A VAR LINHA E FAZ A QUEBRA DE LINHA NO FIM
	for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }						   // PRINTA 49 VEZES "-"
	printf("| Paínel de Controle |");									       // PRINTA | Paínel de Controle |
	for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }  printf("\n\n");         // PRINTA 49 VEZES "-"
	for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); }  			   // PRINTA 120 VEZES A VAR LINHA 
					
				
	// OBSERVAÇÃO: A SIMULAÇÃO DE FILA ESTÁ LIMITADA A 12 INDIVÍDUOS GERADOS
					
																													
	// PRINT DE "OPÇÕES"
	printf("\n\n %c Sistema: O que você deseja fazer?\n", setaD);
																	
	printf("\n | 1 | Checar se existe uma fila criada.");					 				
	printf("\n | 2 | Ver as pessoas que estão na fila atual.");				 
	printf("\n | 3 | Checar os lugares ocupados na fila.");			     	 
	printf("\n | 4 | Criar uma nova fila.");								 
	printf("\n | 5 | Apagar a fila atual.");								 
	printf("\n | 6 | Fechar o paínel de controle e sair do programa.\n\n");  
		
		for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } 			   // PRINTA 120 VEZES A VAR LINHA 
																							   	
		printf("\n\n %c Digite qual opção você deseja executar: ", setaD);
		
		
		
// EXECUTA O MESMO PROCESSO DE ENTRADA EXPLICADO ANTERIORMENTE, SÓ FOI REDUZIDO A UMA LINHA DE CÓDIGO
																	   																										   
do { sCharTyped = getch(); if ( isdigit ( sCharTyped ) not_eq 0) { wWhatTyp [kaj_vi] = sCharTyped; kaj_vi++; printf ("%c", sCharTyped); } else if (sCharTyped == 8 and kaj_vi)  { wWhatTyp[kaj_vi] = 0; kaj_vi--; printf("\b \b"); } } while ( sCharTyped not_eq 13 ); wWhatTyp[kaj_vi] = 0; wToDo = atoi(wWhatTyp); printf("\n");



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		 	            
		
		switch ( wToDo ) { // switch ATIVADA PELA VARIÁVEL wToDo
			
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
		
		case 1: // CHECAR SE EXISTE UMA FILA CRIADA 
		
				 // SE NÃO EXISTE UMA FILA...
				 
				 if ( isQueueCreated not_eq 1 ) { printf("\n\t\t\t\t  %c Sistema: Não existe uma fila criada! Por favor crie uma! %c\n\n", losango, losango); Beep (620, 310);  printf(" < ! > ", losango); system("pause"); }	  
				 
				 
				 // SE EXISTE UMA FILA...
				 
				 else { printf("\n\t\t\t\t        %c Sistema: Existe uma fila cadastradada! %c\n\n", losango, losango); Beep (226, 230); printf(" < ! > ", losango); system("pause"); }	 																
		break;
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
		case 2: // VER AS PESSOAS QUE ESTÃO NA FILA
		
srand( time (NULL)); // ALEATÓRIZA A GERAÇÃO DE VALORES
		
		
		
				// SE NÃO EXISTE UMA FILA NÃO HÁ COMO OLHAR ELA!
				
				if ( isQueueCreated not_eq 1 ) { printf("\n\t\t\t\t        %c Sistema: Não existe uma fila criada! %c\n\n", losango, losango); Beep (620, 310);  printf(" < ! > ", losango); system("pause"); }
				
				
				// SE A FILA EXISTIR ENTÃO...
				
				else { 
				
				Beep (226, 230);	
				system("cls");
			
			
			
				// PRINTA UM MENU ESTILIZADO '| Pessoas nessa Fila |'
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n");  // PRINTA 120 VEZES A VAR LINHA 
				for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }							// PRINTA 49 VEZES "-"
					printf("| Pessoas nessa Fila |", losango, losango); 					// PRINTA | Pessoas nessa Fila |
				for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }          printf("\n\n");  // PRINTA 49 VEZES "-"
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n");    // PRINTA 120 VEZES A VAR LINHA 
				
				
				
				// AQUI COMEÇA O PRINT DA SIMULAÇÃO DA FILA FEITA NO CASE 4
				
				int stdCont = 0; // CONTADOR QUE SERVE PARA CONTAR O NÚMERO DO FULANO NA FILA, Fulano 01, Fulano 02, Fulano 03 [...] 
							
							
															
				// PRINT BASE PARA A ORGANIZAÇÃO
					
				printf("\n | MATRÍCULA |          |  NOME  |\n"); 
					
					
					
				// APÓS O PRINT BASE PRECISAMOS ENTENDER O QUE QUEREMOS QUE SEJA IMPRESSO: 
				 
				// 1º) "RANDOMIZER" É O VETOR QUE ARMAZENA AS MATRÍCULAS ALEATÓRIAS QUE FORAM GERADAS NO CASE 4
				// 2º) "namaEWa"    É UMA STRING PREDEFINIDA COM O NOME DE "Fulano "
				// 3º) "stdCont"    É UMA INT QUE DIZ FULANO 01, FULANO 02, FULANO 03, QUE SERÁ PRINTADA JUNTAMENTE A namaEWa
				
				// COM ISSO ORGANIZADO TEMOS UM for loop PARA PRINTAR TODAS ESSAS INFORMAÇÕES
				
				for ( kaj = 0; kaj < count; kaj++)	{ 		// EXECUTÁRA ATÉ QUE SEJA IGUAL AO NÚMERO DE ALUNOS QUE FOI DEFINIDO POR count   
						
				stdCont++; // ADICIONA +1 DEFININDO A POSIÇÃO DOS ALUNOS 
		
				printf("\n   %0.7d             %s%0.2d", randomizer [kaj], namaEWa, stdCont ); // PRINT DAS INFORMAÇÕES ACIMA EM ORDEM 
					  
													}
													
													
													
// FORMATAÇÃO DE system("pause");					
printf("\n\n\n\n < ! > ", losango); system("pause");
											
					}		
		break;
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
		case 3: //  CHECAR OS LUGARES PREENCHIDOS DA FILA
		 
				// SE NÃO EXISTIR UMA FILA O USUÁRIO É AVISADO
				
				if ( isQueueCreated not_eq 1 ) { printf("\n\t\t\t\t %c Sistema: Não existe uma fila criada para checar! %c\n\n", losango, losango); Beep (620, 310); printf(" < ! > ", losango); system("pause"); }
			
			    // SE EXISTE UMA FILA
			    
			    else { 
			    
				system("cls");
				Beep (226, 230);

				// PRINTA UM MENU ESTILIZADO '| Preenchimento da fila |'
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n");  // PRINTA 120 VEZES A VAR LINHA 
				for ( kaj = 0; kaj < 47; kaj++ ) { printf("-"); }							// PRINTA 47 VEZES "-"
					printf("| Preenchimento da fila |", losango, losango); 					// PRINTA | Preenchimento da fila |
				for ( kaj = 0; kaj < 48; kaj++ ) { printf("-"); }          printf("\n\n");  // PRINTA 47 VEZES "-"
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n");    // PRINTA 120 VEZES A VAR LINHA 

				printf(" \n\t  %c LEGENDA %c \n", setaE, setaD);
				printf(" +----------------------------+\n");
				printf(" | 1 = Preenchido | 0 = Vazio |\n");
				printf(" +----------------------------+\n");
				printf("                                           |> A FILA ATUAL SE ENCONTRA ASSIM <|\n\n");
				printf("                                                            ");
				
				
				
				// PARA CHECAR OS LUGARES PREENCHIDOS, SEGUINDO A GERAÇÃO FEITA EM CASE 4
				// É EXECUTADO ABAIXO UM for loop DE UMA MATRIZ PRINTANDO AS POSIÇÕES DE FORMA FORMATADA
				// SEGUINDO O FORMATO DE 6 LINHAS (VERTICAL) E 2 COLUNAS (HORIZONTAL)
				
				for ( line = 0; line < 6; line++ ) for ( column = 0; column < 2; column++ ) { // INICÍO DO LOOP DA MATRIZ
					
				// PRINTAMOS OS LUGARES PREENCHIDOS	
					
				printf(" %d", placesFilled [line] [column] );
				
				
				// E DURANTE O PRINT DOS LUGARES PREENCHIDOS A MATRIZ ATINGIR A COLUNA 1 O SISTEMA EXECUTA UM "\n" FORMATADO	   
				if ( column == 1 ) { printf("\n"); printf("                                                            "); }
				
																							} // FIM DO LOOP DA MATRIZ
																							
				
				// PRINT DA CONTAGEM DE PESSOAS QUE ESTÃO NA FILA
						  																		
				printf("\n					        %c %d Pessoas estão na fila! %c\n\n\n\n\n\n\n", losango, count, losango);
			
			
			
// FORMATAÇÃO DE system("pause");					
printf("\n\n < ! > ", losango); system("pause");
				
				}
		break;
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
		case 4: // CRIAR UMA FILA
		
				// SE A FILA EXISTIR NÃO PODEMOS SIMPLESMENTE SOBREESCREVER
				
				if ( isQueueCreated == 1 ) { printf("\n\t\t\t\t %c Sistema: Já existe uma fila! Apague a atual se deseja criar uma nova. %c\n\n", losango, losango); Beep (620, 310); printf(" < ! > ", losango); system("pause"); }
	
				// SE A FILA NÃO EXISTE ESTAMOS LIBERARDOS PARA CRIAR-LÁ
				
				else { // FORA A CRIAÇÃO DA FILA AQUI SE INICÍA AS SIMULAÇÕES DE UMA FILA
				
				Beep (226, 230);      // FREQ = 226, DUR = 230;			 
				count = 0; 			  // CONTADOR QUE DIZ QUANTOS ALUNOS ESTÃO NA FILA E QUE PRECISA ZERAR QUANDO GERARMOS OUTRA FILA	
				srand ( time (NULL)); // PERMITE A RANDOMIZAÇÃO REAL, SEM REPETIR OS NÚMEROS JÁ RANDOMIZADOS 	
			
			
			
				// for loop BÁSICO QUE PREENCHE POSIÇÕES DE UMA MATRIZ DE 6 LINHAS E 2 COLUNAS
				
				for ( line = 0; line < 6; line++ ) for ( column = 0; column < 2; column++ ) { // INICÍO DA MATRÍZ 
				
				// INICIALMENTE SIMULAMOS O PREENCHIMENTO DA FILA USANDO 0 E 1.
				// ONDE 0 EQUIVALE A VÁZIO E 1 EQUIVALE A PREENCHIDO            
				
				placesFilled [line] [column] = rand () % 2; 
							
				// if statemnt QUE SEGUINDO A SIMULAÇÃO DE PREENCHIMENTO DE LUGARES, CONTA QUANTAS PESSOAS ENTRARAM
				// NO CASO ELE CHECA SE NA GERAÇÃO ALEATÓRIA A MATRIZ FOI PREENCHIDA COM ZERO OU UM E CASO TENHA 
				// SIDO PREENCHIDA COM 1, count RECEBE +1 
				
				if ( placesFilled [line] [column] == 1 ) { count++; } 
							
					            															}  // FIM DA MATRÍZ 	
					            															
					            															
					            															
				// AGORA PARA GERAR AS MATRÍCULAS SEGUINDO O MODELO DA UFJ -> 202200000				
				// SÓ PRECISAMOS PREENCHER O VETOR randomizer COM A QUANTIDADE DE ALUNOS QUE É FORNECIDO POR count
				  
				for ( kaj = 0; kaj <= count; kaj++)	{  randomizer [kaj] = rand () % 999 + 202200000; }	
							
							
							
				// APÓS O FIM DAS SIMULAÇÕES DEFINIMOS A FILA COMO CRIADA									
				isQueueCreated = 1;
				printf("\n\t\t\t\t\t %c Sistema: A fila foi criada com sucesso. %c", losango, losango);
				
				
				
// FORMATAÇÃO DE system("pause");					
printf("\n\n < ! > ", losango); system("pause");	

				}
		break;
			
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
		
		case 5: // APAGAR A FILA ATUAL
				
				// SE NÃO EXISTE UMA FILA NÃO TEM COMO A APAGAR
																																																																							
				if ( isQueueCreated not_eq 1 ) { printf("\n\t\t\t\t %c Sistema: Não existe uma fila para excluir! %c\n\n", losango, losango); Beep (620, 310); printf(" < ! > ", losango); system("pause"); }
				
				// SE EXISTIR UMA FILA
				
				else { 
				
				system("cls");								
				Beep (226, 230);
				
				// PRINTA UM MENU ESTILIZADO '| Confirme para apagar a fila |'
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n");  // PRINTA 120 VEZES A VAR LINHA 
				for ( kaj = 0; kaj < 44; kaj++ ) { printf("-"); }							// PRINTA 47 VEZES "-"
					printf("| Confirme para apagar a fila |", losango, losango); 			// PRINTA | Confirme para apagar a fila |
				for ( kaj = 0; kaj < 44; kaj++ ) { printf("-"); }          printf("\n\n");  // PRINTA 47 VEZES "-"
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n");    // PRINTA 120 VEZES A VAR LINHA 
					
				printf("\n %c Sistema: Para apagar a fila atual confirme.\n", setaD);
				printf("\n\t\t\t\t\t\t +===================+");
				printf("\n\t\t\t\t\t\t | Digite 1 para Sim |");
				printf("\n\t\t\t\t\t\t +===================+");
				printf("\n\t\t\t\t\t\t | Digite 2 para Não |");
				printf("\n\t\t\t\t\t\t +===================+\n\n");
				
				for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n");    // PRINTA 120 VEZES A VAR LINHA 

				
do { 														   	 // LOOP 2.3
	
			kaj_ne = 0; 		// IMPEDE UM BUG DE NÃO RECEBER OUTROS VALORES, ONDE RECEBEMOS A ENTRADA QUE DECIDE O QUE FAZER COM A FILA
			return_painel = 0;  // VARIÁVEL QUE PERMITE A SAIDA DO LOOP DE CONFIRMAÇÃO [ VOCÊ PRECISA DIGITAR OU 1 OU 2 PARA SAIR ]
			printf("\n %c Sistema: Você deseja? ", setaD);
				
		
			// MESMO PROCESSO DE ENTRADA EXPLICADO ANTERIORMENTE SÓ QUE FOI REDUZIDO A UMA LINHA	
			do { sTheCharTy = getch(); if ( isdigit ( sTheCharTy ) not_eq 0) { wWhatITyped [kaj_ne] = sTheCharTy; kaj_ne++; printf ("%c", sTheCharTy); } else if (sTheCharTy == 8 and kaj_ne)  { wWhatITyped [kaj_ne] = 0; kaj_ne--; printf("\b \b"); } } while ( sTheCharTy not_eq 13 ); wWhatITyped[kaj_ne] = 0;        letMeGuardForU = atoi(wWhatITyped);
			
	
	
			// IF STATEMENT PARA COMPARAR A "return_painel" E PERMITIR A SAIDA DO LOOP 
			if ( letMeGuardForU == 1 or letMeGuardForU == 2 ) { return_painel = 1; }	
						
						
																															   
} while ( return_painel not_eq 1);


						
			// SE ESCOLHEU '1', A FILA É DEFINIDA COMO APAGADA E APARECE A MENSAGEM ESPECÍFICA A ISSO				  
			if ( letMeGuardForU == 1 ) { isQueueCreated = 0; printf("\n\t\t\t\t\t %c Sistema: A fila foi apagada! %c\n\n\n", losango, losango); printf(" < ! > ", losango); system("pause"); }
			
			// SE ESCOLHEU '2', A FILA É CONTINUA ATIVA E APARECE A MENSAGEM ESPECÍFICA PARA ISSO
			if ( letMeGuardForU == 2 ) { printf("\n\t\t\t\t\t %c Sistema: A fila não foi apagada! %c\n\n", losango, losango); printf(" < ! > ", losango); system("pause");}
		
					  }							  
			break;
										  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			

		case 6: // FECHAR O PAÍNEL DE CONTROLE E SAÍR DO PROGRAMA
		
			Beep (226, 230);  // FREQ = 226, DUR = 230	
			Sleep(1200);      // ESPERA 1,2 SEGS 	
			admIsValid = 1;   // VARIÁVEL QUE PERMITE A SAÍDA DO LOOP		
			
		break;				
			
		
						  
										  } // FIM DO switch
								  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
	   	
} while (  wToDo not_eq 6 ); 									 // LOOP 2
 
} 												                 // FIM DO ACESSO AO PAÍNEL DE CONTROLE NO CASO DO IF											 								 
 	
} while ( admIsValid not_eq 1 ); 								 // LOOP 1
															
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// FINALIZAÇÃO DO PROGRAMA POR QUE O USUÁRIO NÃO INSERIU O CÓDIGO CORRETO

system("cls"); 	
Beep (332, 650);
	
	
			
		// ANIMAÇÃO BÁSICA DE "LOADING SCREEN" 	 
		   Sleep(400); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING."); 	Beep (635, 100); Sleep(700); printf("."); Beep (635, 100); Sleep(900); printf("."); Beep (635, 100); Sleep(600); system("cls");
	 	
	 	
		
		// PRINT ORGANIZADO DE "SAINDO DO PROGRAMA"
		for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } printf("\n\n");  // PRINTA 120 VEZES A VAR LINHA 
		for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }							// PRINTA 49 VEZES -
		   printf("| Saindo do Programa |");										// PRINTA | Saindo do Programa |
		for ( kaj = 0; kaj < 49; kaj++ ) { printf("-"); }  printf("\n\n");		    // PRINTA 49 VEZES -
		for ( kaj = 0; kaj < 120; kaj++ ) { printf("%c", linha); } 					// PRINTA 120 VEZES A VAR LINHA
		
		
		
		// WAIT TO CLOSE
		Beep (480, 650);	 printf("\n\n\n          %c Qualquer problema comunique a equipe de desenvolvedores responsável pelo programa urgentemente! %c \n", losango, losango); Sleep(1200); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); printf("  "); system("pause");  system("cls");  										  						
	   							    
      
      
		     }  								 // FIM DO CÓDIGO
	 








