//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// START < BIBLIOTECAS UTILIZADAS // 

    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>
    #include <ctype.h>
    #include <time.h>
    #include <unistd.h>
    #include <math.h>
    #include <locale.h>

// END > BIBLIOTECAS UTILIZADAS // 



// START < TABELA ASCII 

/* C cedilha maiusculo */          int c_dilha_h = 128;
/* e com acento agudo Minusculo*/  int  e_gudo_l = 130;
/* a com acento "tiu" Minusculo*/  int   a_tiu_l = 131;
/* a com acento onda  Minusculo*/  int   a_ond_l = 198;
/* a com acento crase Minusculo*/  int   a_crs_l = 133;
/* c cedilha minusculo*/           int c_dilha_l = 135; 
/* e com acento tiu Minusculo*/    int   e_tiu_l = 136;
/* e com acento crase Minusculo*/  int   e_crs_l = 138;
/* i com acento crase Minusculo*/  int   i_crs_l = 141;
/* E com acento agudo maiusculo*/  int  e_gudo_h = 144;
/* o com acento crase Minusculo*/  int   o_crs_l = 149;
/* u com acento crase Minusculo*/  int   u_crs_l = 161;
/* a com acento agudo Minusculo*/  int  a_gudo_l = 160;
/* u com acento agudo Minusculo*/  int  u_gudo_l = 163;
/* o com acento agudo Minusculo*/  int  o_gudo_l = 162;
/* i com acento agudo Maisculo */  int  i_gudo_h = 214;
/* u com acento agudo Maiusculo*/  int  u_gudo_h = 233;
 
/* primeira, segunda, terceira */  int      up_a = 166; 
/* primeiro, segundo, terceiro */  int      up_o = 167;
/* seta para direita */            int    seta_d = 175;
/* seta para esquerda */           int    seta_e = 174;
/* bolinha de organization */      int   bolinha = 254;

                                   int       bip = 7; // virus 

// END > TABELA ASCII "%c"



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// START < DECLARACAO DE VARIAVEIS 



// START < MENU
int meusodini = 0;               // variavel referente ao loop do menu
int sculk = -1;                  // variavel referente ao comentario controle / variavel que impedi que se escreva letras no lugar do SCANF
int escolha, escolha_p, repetic; // Variaveis de controle no menu

// END > MENU



// START < ESTILIZACAO < BASICA >

int i = 0;             // Variavel para controle de caracteres (especificamente nos casos abaixo)
int fundo_t1 = 219;    // fundo tipo 1 - ASCII 
int fundo_t2 = 177;    // fundo tipo 2 - ASCII
int linha_t1 = 205;    // linha tipo 1 - ASCII 
int linha_t2 = 196;    // linha tipo 2 - ASCII

// linha t1 variacoes 

int  t1_parede = 186;     // canto - ASCII
int t1_d0e_des = 201;
int t1_e0d_des = 187;
int t1_d0e_sub = 188;
int t1_e0d_sub = 200;

   
// END > ESTILIZACAO < BASICA >

///////////////////////////////// OBS.: VARIAVEIS DOS EXERCICIOS FORAM INSERIDAS DENTRO DOS MESMOS  
        
// END > DECLARACAO DE VARIAVEIS 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// PROGRAMA COM A EXECUCAO DE TODOS OS EXERCICIOS PRESENTES NA LISTA

int main (){ // inicio do int main () 
 
// loading screen! boys and girls and dogs and whatever, meh

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(500);

// loading screen! boys and girls and dogs and whatever, meh
printf("%c", bip); // virus confia 
system("cls");


             // MENU (welcome)
             for (i = 0; i < 120;i++){      // linha de cima do menu 
             	printf("%c",linha_t1);
			 }
			 for (i = 0; i < 1605; i++){
			 	printf("%c", fundo_t1);
			 }
			 printf("| LISTA DE EXERC%cCIOS - 08 |", i_gudo_h);
			 for (i = 0; i < 47; i++){
			 	printf("%c", fundo_t1);
			 }
			 for (i = 0; i < 44; i++){
			 	printf("%c", fundo_t1);
			 }
			 printf("| MADE BY ALLISON JUNIOR XD! |");
			 for (i = 0; i < 1366; i++){
			 	printf("%c", fundo_t1);
			 }
			 for (i = 0; i < 120;i++){     // linha de baixo do menu
             	printf("%c",linha_t1);
			 }
			 system("pause");
			 repetic = 0;  // variavel q condiciona o loop de escolhas de exercicios
			 Sleep(500); // wait in miliseconds 
			 system("cls"); // limpa tela
			 
			 // MENU (welcome)

             // MENU (choose)
        
do{  // repeticao do menu caso saia de um switch

// loading screen

Sleep(100);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(500);

// loading screen 

system("cls");

meusodini = 1; // impedir loop

                // estilizacao
                
                         system("cls");
                for (i = 0; i < 120; i++) {printf("%c", linha_t2);} // linha
                for (i = 0; i < 120; i++) {printf("%c", fundo_t1);} // preenchimento
                for (i = 0; i < 50; i++) {printf("%c", fundo_t1);}  // preenchimento
                         printf("< Lista de Selec%co >", a_ond_l);           // nome
                for (i = 0; i < 50; i++) {printf("%c", fundo_t1);}  // preenchimento
                for (i = 0; i < 120; i++) {printf("%c", fundo_t1);} // preenchimento 
                for (i = 0; i < 120; i++) {printf("%c", linha_t2);} // linha
				
              	// estilizacao 
              	
              	// PRINTF das opcoes do menu
              	
              	printf("\n %c System: O que voc%c quer fazer?\n", bolinha,e_tiu_l);
              	printf("\n %c System: [ 1 ] %c Executar Impress%co da tabela ASCII.", bolinha, seta_d, a_ond_l);
              	printf("\n %c System: [ 2 ] %c Executar Compara%c%co de 5 n%cmeros inteiros para saber quais s%co primos.", bolinha, seta_d, c_dilha_l, a_ond_l, u_gudo_l, a_ond_l);
              	printf("\n %c System: [ 3 ] %c Executar C%clculo da m%cdia da altura de 6 pessoas com base na sua idade.", bolinha, seta_d, a_gudo_l, e_gudo_l);
				printf("\n %c System: [ 4 ] %c Executar Impress%co da tabela ASCII.", bolinha, seta_d, a_ond_l);
				printf("\n %c System: [ 5 ] %c Fechar o Programa.\n", bolinha, seta_d);
				
				// PRINTF das opcoes do menu
              	
				 // definicao da execucao dos exercicios seguindo a variavel escolha
				 
						do { // controle
						                                 // criacao de loop para impedir que escreva uma palavra por exemplo
				            printf("\n %c User: ", bolinha);
				            sculk = scanf("%d", &escolha);
				            
				        do {                                  // comparacao
				            escolha_p = getchar();
					       } while (escolha_p != '\n');
	                       } while (sculk == 0);
				                                              // fim do loop importante 
		    // MENU (choose)
		    
				 // definicao da execucao dos exercicios seguindo a variavel escolha
				 
                                                             // MENU (CASOS)
                                                             
                                                             switch (escolha){ // execucao dos exercicios 
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	case 1: // GERACAO DE TABELA ASCII
                                                             	system("cls");
                                                             	
													// EXECUTAR NO FIM DO CODIGO	meusodini = 0;
													
													                // DECLARACAO DE VARIAVEIS DO EX1
													                
																	int k = 127;
																	int reset1 = 1; 
																	int reset1_out = -1;
																	/////////////////////////////////
													                
																	// EX1
																	
																	do{  // EXECUTAR O EX1 NOVAMENTE
																  system("cls");
																  // loading screen

Sleep(100);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(500);

// loading screen 
system("cls");	
													            int reset2 = 1;
													            
																
																	
																	                                                 printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 51;i++){printf("%c",fundo_t2);}
																printf("| TABELA ASCII |");    
																for (i = 0; i < 51;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
             	                                                                            system(" pause ");
																	
													                for (k = 0; k < 128; k++){ Sleep(50); printf("\n     %d                           %x                           %c\n\n", k , k , k );}
													                printf("Obs.: o beep foi causado por causa de um %c. Ou seja IS NOT A VIRUS!\n\n");
																	system("pause");
													                
													                system("cls");
													                Sleep(100);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(500);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(500);

// loading screen 
system("cls");	
													                
																	
																	                                                 printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 51;i++){printf("%c",fundo_t2);}
																printf("| TABELA ASCII |");    
																for (i = 0; i < 51;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
													                printf("\n %c System: O que voc%c quer fazer?\n ", bolinha, e_tiu_l);
													                printf("\n %c System: [ 1 ] Executar novamente.", bolinha);
													                printf("\n %c System: [ 2 ] Voltar ao menu.\n", bolinha);
													                   
																	   do{
																	   	
																	printf("\n User: ");
													                scanf("%d",&reset1);
													                
													                      do{
													                      	
													                      	reset1_out = getchar();
													                      	
																		  } while (reset1_out != '\n');
																		  
													                     } while (reset1 == 0); 
													                system("cls");
													                      meusodini = 0;
													                   } while (reset1 != 2); // FIM EXECUTAR O EX1 NOVAMENTE[
																	   
																	   break;
																////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
													            
                                                                case 2:  // NUMEROS PRIMOS 
                                                             	system("cls");
                                                             	
                                                    // EXECUTAR NO FIM DO CODIGO	meusodini = 0; 
													    	    
																// DECLARACAO DE VARIAVEIS EX2
																
																int num_1, num_2, num_3, num_4, num_5;  //receber os valores 
                                                                int _1ep, _2ep, _3ep, _4ep, _5ep;
                                                                int reset2 = 1;
                                                                int reset2_out = -1;
                                                                
                                                                
													            ////////////////////////////////////////////////////////////
													            
													            // EX2
																
																do {
														        system("cls");
														        Sleep(100);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(300);

// loading screen 
system("cls");	
																
																// estilizacao inicial 
																	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 49;i++){printf("%c",fundo_t2);}
																printf("| N%cmeros Primos? |", u_gudo_l);    
																for (i = 0; i < 50;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                //estilizacao inicial 
             	                                            
             	                                                /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
             	                                                
             	                                                // EXECUTION OF THE PROGRAM
             	                                                
             	                                                int resultadoprimo = 0;
             	                                                int n_1 = -1;
																int n_2 = -1;
																int n_3 = -1; 
																int n_4 = -1;
																int n_5 = -1; // variaveis responsaveis por impedir que eu escreva uma letra por exemplo
																
																int na1, na2, na3, na4, na5;

             	                                                
																
																printf("\n %c System: Escreva os 5 n%cmeros inteiros positivos:\n", bolinha, u_gudo_l);
                                                                 
                                                            // ----------------------------------------------------------------------------------     
                                                                 
																 //                            1 NUMERO 
																 
             	                                                 do {
															
             	                                                 printf("\n User: 1%c n%cmero %c ",up_o, u_gudo_l, seta_d);   // numero 1 
             	                                                 
             	                                                 na1 = scanf(" %d", &num_1);                                // numero 1
             	                                                                     
																					  do{
             	                                                                     	n_1 = getchar();
             	                                                                     	
																					   } while (n_1 != '\n');
																					   
             	                                                                       } while (na1 == 0); 
             	                                               
														    // ----------------------------------------------------------------------------------		                        
             	                                                                       
             	                                                //                            2 NUMERO 
																 
             	                                                 do {
															
             	                                                 printf("\n User: 2%c n%cmero %c ",up_o, u_gudo_l, seta_d);   // numero 2 
             	                                                 
             	                                                 na2 = scanf(" %d", &num_2);                               // numero 2
             	                                                                     
																					  do{
             	                                                                     	n_2 = getchar();
             	                                                                     	
																					   } while (n_2 != '\n');
																					   
             	                                                                       } while (na2 == 0);
             	                                                
															// ----------------------------------------------------------------------------------	 
																 
																//                            3 NUMERO 
																 
             	                                                 do {
															
             	                                                 printf("\n User: 3%c n%cmero %c ",up_o, u_gudo_l, seta_d);   // numero 3 
             	                                                 
             	                                                 na3 = scanf(" %d", &num_3);                                // numero 3
             	                                                                     
																					  do{
             	                                                                     	n_3 = getchar();
             	                                                                     	
																					   } while (n_3 != '\n');
																					   
             	                                                                       } while (na3 == 0);    
             	                                                
             	                                                // ----------------------------------------------------------------------------------
             	                                               
             	                                               //                            4 NUMERO 
																 
             	                                                 do {
															
             	                                                 printf("\n User: 4%c n%cmero %c ",up_o, u_gudo_l, seta_d);   // numero 4 
             	                                                 
             	                                                 na4 = scanf(" %d", &num_4);                              // numero 4
             	                                                                     
																					  do{
             	                                                                     	n_4 = getchar();
             	                                                                     	
																					   } while (n_4 != '\n');
																					   
             	                                                                       } while (na4 == 0);
             	                                                
																
															   // ----------------------------------------------------------------------------------
																
															     //                            5 NUMERO 
																 
             	                                                 do {
															
             	                                                 printf("\n User: 5%c n%cmero %c ",up_o, u_gudo_l, seta_d);   // numero 5 
             	                                                 
             	                                                 na5 = scanf(" %d", &num_5);                                // numero 5
             	                                                                     
																					  do{
             	                                                                     	n_5 = getchar();
             	                                                                     	
																					   } while (n_5 != '\n');
																					   
             	                                                                       } while (na5 == 0);	
																
													            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
													            
													            // e primo? 
													            
													            na1 = num_1 % 2;
													            na2 = num_2 % 2;
													            na3 = num_3 % 2;
													            na4 = num_4 % 2;
													            na5 = num_5 % 2;
													       
													            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
													            
																system("cls");
													            
													            Sleep(100);

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING .");

                                                                Sleep(500);
                                                                system("cls");

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING ..");

                                                                Sleep(500);
                                                                system("cls");

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING ...");

                                                                Sleep(500); 
													            system("cls");
													            
													            // ENDING 
													            
													            // STYLO
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 49;i++){printf("%c",fundo_t2);}
																printf("| N%cmeros Primos? |", u_gudo_l);    
																for (i = 0; i < 50;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
													            
													            // STYLO 
													            
													            
													            printf("\n %c System: Conforme os n%cmeros recebidos s%c: \n", bolinha, u_gudo_l, o_gudo_l);
													            
													            if (na1 != 0){ printf("\n %c System: %d %c primo!", bolinha, num_1, e_gudo_l); resultadoprimo++;}
													            if (na2 != 0){ printf("\n %c System: %d %c primo!", bolinha, num_2, e_gudo_l); resultadoprimo++;}
													            if (na3 != 0){ printf("\n %c System: %d %c primo!", bolinha, num_3, e_gudo_l); resultadoprimo++;}
													            if (na4 != 0){ printf("\n %c System: %d %c primo!", bolinha, num_4, e_gudo_l); resultadoprimo++;}
													            if (na5 != 0){ printf("\n %c System: %d %c primo!", bolinha, num_5, e_gudo_l); resultadoprimo++;}
													            
													            printf("\n\n %c System: S%co %d n%cmeros primos.\n\n", bolinha, a_ond_l, resultadoprimo, u_gudo_l);
                                                             	
                                                             	 // ENDING
																  
																system("pause");  
															  
																system("cls");
																
														

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(300);

// loading screen 
system("cls");	
																
																// STYLO
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 49;i++){printf("%c",fundo_t2);}
																printf("| N%cmeros Primos? |", u_gudo_l);    
																for (i = 0; i < 50;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
													            
													            // STYLO 
																
																    int  sair_2 = 1;
																    int vazar_2 = -1;
																    int  nador;
																    

													                printf("\n %c System: O que voc%c quer fazer?\n ", bolinha, e_tiu_l);
													                
													                printf("\n %c System: [ 1 ] Voltar ao menu.\n", bolinha);
													                printf("\n %c System: [ 2 ] Executar novamente.", bolinha);
													                   
																	   do{
																	   	
																	    printf("\n\n %c %c User: ", bolinha, seta_e);
													                      scanf("%d",&reset2);
													                
													                      do{
													                      	
													                      	reset2_out = getchar();
													                      	
																		  } while (reset2_out != '\n');
																		  
													                        } while (reset2 == 0); 
													        
													                    
																		      
													                   } while (reset2 != 1); // FIM EXECUTAR O EX1 NOVAMENTE[   
                                                             	        
																		 meusodini = 0;
                                                             	
                                                             	
                                                             	
                                                            
                                                                
                                                             
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                             	
                                                                break;
                                                                
                                                                
                                                                
                                                            
                                                                case 3:   // MEDIA DA ALTURA 
                                                             	
																system("cls");
                                                             	int reset3 = 0;
																int reset3_out = -1;

																 do {
																 	
																 	system("cls");
																 	// variaveis 
																 	int age_1, age_2, age_3, age_4, age_5, age_6 = 0;
                                                                    int hei_1, hei_2, hei_3, hei_4, hei_5, hei_6 = 0;
                                                                    int arm1, arm2, arm3, arm4, arm5, arm6, qintrole = 0;
																 	int liip1, liip2, liip3, liip4, liip5, liip6 = 0;
                                                                    int up_50, med_alt;
                                                                    
                                                                    // variaveis 
                                                                    
                                                                    // stilo
                                                                    system("cls");
													            Sleep(100);

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING .");

                                                                Sleep(300);
                                                                system("cls");

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING ..");

                                                                Sleep(300);
                                                                system("cls");

                                                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING ...");

                                                                Sleep(300); 
													            system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);

                                                                    // stilo
                                                                    
                                                                printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);
                                                                
																// PESSOA 1 
																
															// idade 1 
															
															    
															    char digitado1[50];    //armazenamento
															    char p1;               // controle_idade 1
															    int y1 = 0;            // ajuda_idade 1
															    int n_id_1 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 1 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                                
                                                            
																
															do { //impedir que quando apertar enter pule para o prox.
										
                                                             do {
                                                                p1 = getch();
																
																if (isdigit(p1) > 0) { 
																
																                       digitado1[y1] = p1;
																                       y1++;
																                       printf("%c", p1);
																}
																else if (p1 == 8 && y1){
															                          digitado1[y1] = '\0';
															                          y1--;
															                          printf("\b \b");
															                          }
																
															   } while (p1 != 13);
														} while (y1 == 0);

					  
																digitado1[y1] = '\0';
																n_id_1 = atoi(digitado1); // mostra idade 1

															// idade 1 	
															
															// altura 1
															
															    char digitado11[50];    //armazenamento
															    char p11;               // controle_idade 1
															    int y11 = 0;            // ajuda_idade 1
															    int n_id_11 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                               
															    do { //impedir que quando apertar enter pule para o prox.
															
                                                                do {
																
                                                        
                                                                p11 = getch();
																
																if (isdigit(p11) != 0) { 
																
																                       digitado11[y11] = p11;
																                       y11++;
																                       printf("%c", p11);
																}
																else if (p11 == 8 && y11){
															                          digitado1[y11] = '\0';
															                          y11--;
															                          printf("\b \b");
															                          }
															   } while (p11 != 13);
														} while (y11 == 0);
																					  
																digitado11[y11] = '\0';
																n_id_11 = atoi(digitado11); // mostra a altura 1
															
															// altura 1 
															

															// idade 2
															
															system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                                                 
             	                                                                                                    printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);

                                                                    // stilo
															
															    char digitado2[50];    //armazenamento
															    char p2;               // controle_idade 2
															    int y2 = 0;            // ajuda_idade 2
															    int n_id_2 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 2 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                            
															do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p2 = getch();
																
																if (isdigit(p2) != 0) { 
																
																                       digitado2[y2] = p2;
																                       y2++;
																                       printf("%c", p2);
																}
																else if (p2 == 8 && y2){
															                          digitado2[y2] = '\0';
															                          y2--;
															                          printf("\b \b");
															                          }
															   } while (p2 != 13);
														} while (y2 == 0);
																					  
																digitado2[y2] = '\0';
																n_id_2 = atoi(digitado2); // mostra idade 2

															// idade 2 	
															
															// altura 2
															
															    char digitado22[50];    //armazenamento
															    char p22;               // controle_idade 2
															    int y22 = 0;            // ajuda_idade 1
															    int n_id_22 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p22 = getch();
																
																if (isdigit(p22) != 0) { 
																
																                       digitado22[y22] = p22;
																                       y22++;
																                       printf("%c", p22);
																}
																else if (p22 == 8 && y22){
															                          digitado2[y22] = '\0';
															                          y22--;
															                          printf("\b \b");
															                          }
															   } while (p22 != 13);
														} while (y22 == 0);
																					  
																digitado22[y22] = '\0';
																n_id_22 = atoi(digitado22); // mostra a altura 2
															
															// altura 2 

                                                            // idade 3
                                                            system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                                                 
             	                                                                                                    printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);

                                                                    // stilo
															
															    char digitado3[50];    //armazenamento
															    char p3;               // controle_idade 3
															    int y3 = 0;            // ajuda_idade 3
															    int n_id_3 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 3 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p3 = getch();
																
																if (isdigit(p3) != 0) { 
																
																                       digitado3[y3] = p3;
																                       y3++;
																                       printf("%c", p3);
																}
																else if (p3 == 8 && y3){
															                          digitado3[y3] = '\0';
															                          y3--;
															                          printf("\b \b");
															                          }
															   } while (p3 != 13);
															} while (y3 == 0);
																					  
																digitado3[y3] = '\0';
																n_id_3 = atoi(digitado3); // mostra idade 3

															// idade 3	
															
															// altura 3
															
															    char digitado33[50];    //armazenamento
															    char p33;               // controle_idade 3
															    int y33 = 0;            // ajuda_idade 3
															    int n_id_33 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p33 = getch();
																
																if (isdigit(p33) != 0) { 
																
																                       digitado33[y33] = p33;
																                       y33++;
																                       printf("%c", p33);
																}
																else if (p33 == 8 && y33){
															                          digitado33[y33] = '\0';
															                          y33--;
															                          printf("\b \b");
															                          }
															   } while (p33 != 13);
														} while (y33 == 0);
																					  
																digitado33[y33] = '\0';
																n_id_33 = atoi(digitado33); // mostra a altura 3
															
															// altura 3 

                                                            // idade 4
                                                            
                                                            system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                                                    printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);

                                                                    // stilo
															
															    char digitado4[50];    //armazenamento
															    char p4;               // controle_idade 4
															    int y4 = 0;            // ajuda_idade 4
															    int n_id_4 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 4 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p4 = getch();
																
																if (isdigit(p4) != 0) { 
																
																                       digitado4[y4] = p4;
																                       y4++;
																                       printf("%c", p4);
																}
																else if (p4 == 8 && y4){
															                          digitado4[y4] = '\0';
															                          y4--;
															                          printf("\b \b");
															                          }
															   } while (p4 != 13);
														} while (y4 == 0);
																					  
																digitado4[y4] = '\0';
																n_id_4 = atoi(digitado4); // mostra idade 4

															// idade 4 	
															
															// altura 4
															
															    char digitado44[50];    //armazenamento
															    char p44;               // controle_idade 4
															    int y44 = 0;            // ajuda_idade 4
															    int n_id_44 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p44 = getch();
																
																if (isdigit(p44) != 0) { 
																
																                       digitado44[y44] = p44;
																                       y44++;
																                       printf("%c", p44);
																}
																else if (p44 == 8 && y44){
															                          digitado44[y44] = '\0';
															                          y44--;
															                          printf("\b \b");
															                          }
															   } while (p44 != 13);
														   } while (y44 == 0);
																					  
																digitado44[y44] = '\0';
																n_id_44 = atoi(digitado44); // mostra a altura 4
															
															// altura 4 

                                                            // idade 5
                                                            
                                                            system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                                                 
             	                                                                                                    printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);

                                                                    // stilo
															
															    char digitado5[50];    //armazenamento
															    char p5;               // controle_idade 5
															    int y5 = 0;            // ajuda_idade 5
															    int n_id_5 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 5 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p5 = getch();
																
																if (isdigit(p5) != 0) { 
																
																                       digitado5[y5] = p5;
																                       y5++;
																                       printf("%c", p5);
																}
																else if (p5 == 8 && y5){
															                          digitado5[y5] = '\0';
															                          y5--;
															                          printf("\b \b");
															                          }
															   } while (p5 != 13);
														    } while (y5 == 0); 
																					  
																digitado5[y5] = '\0';
																n_id_5 = atoi(digitado5); // mostra idade 5

															// idade 5 	
															
															// altura 5
															
															    char digitado55[50];    //armazenamento
															    char p55;               // controle_idade 5
															    int y55 = 0;            // ajuda_idade 5
															    int n_id_55 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p55 = getch();
																
																if (isdigit(p55) != 0) { 
																
																                       digitado55[y55] = p55;
																                       y55++;
																                       printf("%c", p55);
																}
																else if (p55 == 8 && y55){
															                          digitado55[y55] = '\0';
															                          y55--;
															                          printf("\b \b");
															                          }
															   } while (p55 != 13);
														} while (y55 == 0);
																					  
																digitado55[y55] = '\0';
																n_id_55 = atoi(digitado55); // mostra a altura 5
															
															// altura 5

                                                            // idade 6
                                                            
                                                            system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
             	                                                                                                 
             	                                                                                                    printf("\n\n %c System: Insira a idade e a altura das 6 pessoas respectivamente.", bolinha);
                                                                printf("\n %c System: Obs.: Altura 1,65m %c igual a 165.",bolinha, e_gudo_l);
                                                                printf("\n %c System: Obs.: Colocar zero seja em altura ou idade &c a mesma coisa que dizer que o paciente n%co existe!", bolinha, e_gudo_l, a_ond_l);

                                                                    // stilo
															
															    char digitado6[50];    //armazenamento
															    char p6;               // controle_idade 6
															    int y6 = 0;            // ajuda_idade 6
															    int n_id_6 = 0;        // valor final da idade   
															    
															    printf("\n\n %c System: ( Pessoa 6 ) \n", bolinha);
                                                                printf("\n %c User: Idade = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p6 = getch();
																
																if (isdigit(p6) != 0) { 
																
																                       digitado6[y6] = p6;
																                       y6++;
																                       printf("%c", p6);
																}
																else if (p6 == 8 && y6){
															                          digitado6[y6] = '\0';
															                          y6--;
															                          printf("\b \b");
															                          }
															   } while (p6 != 13);
													     	} while (y6 == 0);
																					  
																digitado6[y6] = '\0';
																n_id_6 = atoi(digitado6); // mostra idade 6

															// idade 6 	
															
															// altura 6
															
															    char digitado66[50];    //armazenamento
															    char p66;               // controle_idade 6
															    int y66 = 0;            // ajuda_idade 6
															    int n_id_66 = 0;        // valor final da idade   

                                                                printf("\n %c User: Altura = ", bolinha);
                                                            do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                p66 = getch();
																
																if (isdigit(p66) != 0) { 
																
																                       digitado66[y66] = p66;
																                       y66++;
																                       printf("%c", p66);
																}
																else if (p66 == 8 && y66){
															                          digitado66[y66] = '\0';
															                          y66--;
															                          printf("\b \b");
															                          }
															   } while (p66 != 13);
														   } while (y66 == 0);
																					  
																digitado66[y66] = '\0';
																n_id_66 = atoi(digitado66); // mostra a altura 6
															
															// altura 6 
															
															system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);

                                                                    // stilo
                                                               int axel;
                                                               qintrole = 0;
                                                             //////////////////////////////////////////////////////////////////////////////////////////////
                   
                                                                 if (n_id_1 > 50){ 
																 qintrole++;
																 axel = n_id_11;}
																 
					                                             if (n_id_2 > 50){ 
																 qintrole++;
																 axel = axel + n_id_22;}
																 
					                                             if (n_id_3 > 50){ 
																 qintrole++;
																 axel = axel + n_id_33;}
																 
				                                                 if (n_id_4 > 50){ 
																 qintrole++;
																 axel = axel + n_id_44;}
																 
					                                             if (n_id_5 > 50){ 
																 qintrole++;
																 axel = axel + n_id_55;
																
																 }
																 
					                                             if (n_id_6 > 50){ qintrole++;
					                                             axel = axel + n_id_66;
															}
															     
															     
															     med_alt = axel / qintrole;
															     
                                                                // DEFINICAO SE A PESSOA TEM IDADE SUPERIOR A 50 E SE NAO TEM  
                                                                
                                                                
                                                                 
                                                                 printf("\n\n %c System: A m%cdia das alturas dos pacientes com mais de 50 anos %c = [ %d ]!\n\n", bolinha, e_gudo_l, e_gudo_l, med_alt); 
																 system("pause");
                                                                 
                                                                // CALCULOS FINAIS 
                                                           
                                                                
                                                                med_alt = axel / qintrole;
                                                                
                                                                // CALCULOS FINAIS 
                                                              
     
                                                                system("cls");
                                                                						            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 48;i++){printf("%c",fundo_t2);}
																printf("| Atendimento de Grupos |", u_gudo_l);    
																for (i = 0; i < 45;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);

                                                                    // stilo
                                                                

                                                                        

                                                                   printf("\n %c System: O que voc%c quer fazer?\n ", bolinha, e_tiu_l);
													                
													                printf("\n %c System: [ 1 ] Voltar ao menu.\n", bolinha);
													                printf("\n %c System: [ 2 ] Executar novamente.", bolinha);
													                   
																	   do{
																	   	
																	    printf("\n\n %c %c User: ", bolinha, seta_e);
													                      scanf("%d",&reset3);
													                
													                      do{
													                      	
													                      	reset3_out = getchar();
													                      	
																		  } while (reset3_out != '\n');
																		   
													                        } while (reset3 == 0);
                                                                
                                                                
                                                                    
                                                                    
																 	       
															        } while (reset3 != 1); //fim do ex3 
															        
															    meusodini = 0;
															    
															    

                                                    
                                                    
                                                    
                                                    
                                                    
                                                    
                                                    
                                                    
                                                    
                                                             	
                                                                break;
                                                                //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                
                                                                case 4: // FIBONACCI 
                                                             	
																 system("cls");
						
																 int reset4 = 0;
																 int reset4_out = -1;

																 do {
																 	
																 	// loading screen

Sleep(100);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(300);

                                                                            // loading screen 
																 	
																 	system("cls");
																 	
																 	         system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 46;i++){printf("%c",fundo_t2);}
																printf("| S%crie de Fibonacci |", e_gudo_l);    
																for (i = 0; i < 50;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);

                                                                    // stilo
																 	// 1, 1, 2, 3, 5, 8, 13 o que queremos achar 
																 

																 	int f1 = 1, f2 = 1, f3;
																 	char digit[50];    
															        char d4;              
															        int  i4  = 0;            
															        int nika = 0;        
																 	
																     printf("\n\n %c System: Para gerar a sequ%cncia [ 1, 1, 2, 3, 5, 8, 13 ] %c s%c colocar 9.\n", bolinha, e_tiu_l, e_gudo_l, o_gudo_l);
																	 printf("\n %c System: Informe a quantidade de termos: ", bolinha);

                                                                    
                                                                
                                                                
																do { //impedir que quando apertar enter pule para o prox.    
                                                                do {
																
                                                        
                                                                d4 = getch();
																
																if (isdigit(d4) != 0) { 
																
																                       digit[i4] = d4;
																                       i4++;
																                       printf("%c", d4);
																}
																else if (d4 == 8 && i4){
															                          digit[d4] = '\0';
															                          i4--;
															                          printf("\b \b");
															                          }
															   } while (d4 != 13);
														       } while (i4 == 0);
																					  
																digit[i4] = '\0';
																nika = atoi(digit); // mostra a altura 6
																	 

																	 if (nika < 0) {
																	 	printf("\n %c System: N%cmero Inv%calido!", bolinha, u_gudo_l, a_gudo_l);
																	 	
																	 }
																	 else {
																	 	printf("\n\n %c System: Sequ%cncia de Fibonacci %c 1, 1",bolinha, e_tiu_l, seta_d);
																	 }
																	 
																	 while (f2 < nika){
																	 	Sleep(300);
																	 	f3 = f2 + f1;
																		 printf(", %d", f3);
																		 f1 = f2;
																		 f2 = f3; 
																	 	
																	 }
																	 
																	 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	 system("pause");
																	 system("cls");
																	 
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING.");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING..");

Sleep(300);
system("cls");

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                     LOADING...");

Sleep(300);

// loading screen 
system("cls");
																	   
																 		         system("cls");
													            
													            	                                            printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 46;i++){printf("%c",fundo_t2);}
																printf("| S%crie de Fibonacci |", e_gudo_l);    
																for (i = 0; i < 50;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);

                                                                    // stilo
																 	
																 	
																 	
																 	
																 
																 	
																 	// ending do anime gamerplay
                                                                        printf("\n %c System: O que voc%c quer fazer?\n ", bolinha, e_tiu_l);
													                
													                    printf("\n %c System: [ 1 ] Voltar ao menu.\n", bolinha);
													                    printf("\n %c System: [ 2 ] Executar novamente.", bolinha);
													                   
																	    do{
																	    	
																	    printf("\n\n %c %c User: ", bolinha, seta_e);
													                      scanf("%d",&reset4);
													                
													                      do{
													                      	
													                      	reset4_out = getchar();
													                      	
																		  } while (reset4_out != '\n');
																		   
													                        } while (reset4 == 0);
																 	       
															        } while (reset4 != 1);
															    meusodini = 0;
															    break;
																   
																
																   
																   
																   
																 
																 
																
																
															
																 
                                                        
                                                             	
                                                    // EXECUTAR NO FIM DO CODIGO	meusodini = 0;
                                                    
		
                                                             	case 5:
                                                             	system("cls");
                                                             	
                                                             	// estilizacao
                
                                                                   system("cls");
                                                                     for (i = 0; i < 120; i++) {printf("%c", linha_t2);} // linha
                                                                     for (i = 0; i < 120; i++) {printf("%c", fundo_t1);} // preenchimento
                                                                     for (i = 0; i < 50; i++) {printf("%c", fundo_t1);}  // preenchimento
                                                                      printf("< Lista de Selec%co >", a_ond_l);           // nome
                                                                     for (i = 0; i < 50; i++) {printf("%c", fundo_t1);}  // preenchimento
                                                                     for (i = 0; i < 120; i++) {printf("%c", fundo_t1);} // preenchimento 
                                                                     for (i = 0; i < 120; i++) {printf("%c", linha_t2);} // linha
				
              	                                                // estilizacao 
                                                             	
                                                             	printf("\n %c System: At%c mais! Mais antes se liga no poema do pai!", bolinha, e_gudo_l);
                                                             	
                                                             	Sleep(4500);
                                                             	
                                                             	system("cls");
                                                             	
                                                             	                                                 printf("%c", t1_d0e_des);
                                                             	for (i = 0; i < 118;i++){ printf("%c",linha_t1);}               
                                                             	                                                 printf("%c",t1_e0d_des);
                                                            
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                 
             	                                                                                                printf("%c", t1_parede);
                                                             	for (i = 0; i < 49;i++){printf("%c",fundo_t2);}
																printf("| INVEJA by Google |");    
																for (i = 0; i < 49;i++){printf("%c",fundo_t2);} 
             	                                                                                                printf("%c", t1_parede); 
             	                                                
             	                                                
             	                                                
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);
																												      
																                                                 printf("%c", t1_parede);
                                                             	for (i = 0; i < 118;i++){printf("%c",fundo_t2);}     
             	                                                                                                 printf("%c", t1_parede);                                            
			                                                                           
			                                                                        
			                                                                                                     printf("%c", t1_e0d_sub);
			                                                    for (i = 0; i < 118;i++){ printf("%c",linha_t1);}      
             	                                                                                                 printf("%c", t1_d0e_sub);
															    printf("\n\n                                                      Perda de tempo");
															    printf("\n                                                 esfor%co a mais, em v%co,", c_dilha_l, a_ond_l);
															    printf("\n                                                        vendavais...");
															    printf("\n                                                         %cdio mudo", o_gudo_l);
															    printf("\n                                                        contra-m%co,", a_ond_l);
															    printf("\n                                                          vento");
															    printf("\n                                                     que derruba tudo");
															    printf("\n                                                         ao ch%co.\n\n", a_ond_l);
															    printf("\n                                                         Inveja %c", e_gudo_l);
															    printf("\n                                                    luta desperdi%cada", c_dilha_l);
															    printf("\n                                               que arrebata o pr%cprio vigor, ", o_gudo_l);
															    printf("\n                                                    impedindo momentos");
															    printf("\n                                                        risonhos...\n\n");
												
															    
															    printf("\n");
															    
															    Sleep(1500);
															    
															    system("pause");
															    
															    system("cls");
															    printf("\n %c System: Lindo...", bolinha);
											                    printf("at%c chorei aqui!\n\n", e_gudo_l);
															    
															    printf("\n %c System: Enfim, adeus!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", bolinha);
                                                             	printf("%c", bip);
                                                             	exit;
                                                                break;
                                                              
                                                                default: 
                                                             	system("cls");
                                                             	printf("                  \n\n\n\n\n\n\n\n\n\n                                                         Aqui n%co!", a_ond_l);
                                                             	Sleep(1000);
                                                             	system("cls");
                                                             	meusodini = 0;
                                                                break;
                                                                
															    } 
															    
															                
															                
															                
                                                               } while (meusodini != 1);  // fim da execucao do menu no caso usando a variavel "menuisoni" // execucao dos exercicios 
															   //ending
                                                    
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             
                                                             // MENU (CASOS)
             
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;  	
	
           } // fim do int main ()Return 0; 
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
