Algoritmo "E-LINE"

// made by letícia

//NOME DO PROGRAMA: 		E-LINE
//OBJETIVO DO CÓDIGO:  Entrar na fila e checar a situação da mesma

//DISCIPLINA: 				Algoritimos e Programação I
//DOCENTE: 					Ana Paula Freitas Vilela Boaventura
//GRUPO: 					   Leticia, Fábio e Allison
Var
   // Seção de Declarações das variáveis
   fila: vetor [1..2] de caractere //pré requisito do trabalho: vetores
   matricula: vetor [1..2] de inteiro
   caj: inteiro //variável de controle de menu
   escolhe: inteiro //escolhe a opção do menu
   systemPause: inteiro // Cria uma pausa igual ao system("pause"), que faz com que o limpatela e o retorno ao loop só ocorram ao pressioanar alguma tecla
   quant: inteiro //contador de alunos
   menu2: inteiro //variável do sub menu
   jatobamanha, jatobatarde, jatobanoite: vetor[1..4] de caractere
   riachuelomanha, riachuelotarde, riachuelonoite: vetor[1..4] de caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   // Pseudocódigo dedicado a entrar na fila e ver se ela já foi preenchida, assumindo que haja uma existente.
   caj <- 1 // inicia o loop do menu
   quant <- 0
   enquanto caj = 1 faca // CONTROLE DO MENU

      repita //para a fila

         limpatela
         escreval
         escreval ("                        ___                                     ___           ___     ")
         escreval ("                       /\__\                                   /\  \         /\__\    ")
         escreval ("                      /:/ _/_                     ___          \:\  \       /:/ _/_   ")
         escreval ("                     /:/ /\__\                   /\__\          \:\  \     /:/ /\__\  ")
         escreval ("                    /:/ /:/ _/_   ___     ___   /:/__/      _____\:\  \   /:/ /:/ _/_ ")
         escreval ("                   /:/_/:/ /\__\ /\  \   /\__\ /::\  \     /::::::::\__\ /:/_/:/ /\__\")
         escreval ("                   \:\/:/ /:/  / \:\  \ /:/  / \/\:\  \__  \:\  \  \/__/ \:\/:/ /:/  /")
         escreval ("                    \::/_/:/  /   \:\  /:/  /     \:\/\__\  \:\  \        \::/_/:/  / ")
         escreval ("                     \:\/:/  /     \:\/:/  /       \::/  /   \:\  \        \:\/:/  /  ")
         escreval ("                      \::/  /       \::/  /        /:/  /     \:\__\        \::/  /   ")
         escreval ("                       \/__/         \/__/         \/__/       \/__/         \/__/    ")
         escreval
         escreval
         escreval
         escreval
         escreval ("                 +--------------------------------------------------------------------+")
         escreval ("                 |                           MENU PRINCIPAL                           |")
         escreval ("                 |                         1 - ENTRAR NA FILA                         |")
         escreval ("                 |                         2 - SITUAÇÃO DA FILA                       |")
         escreval ("                 |                         3 - HORÁRIOS DE ÔNIBUS                     |")
         escreval ("                 |                                                                    |")
         escreval ("                 |                        O que você deseja fazer?                    |")
         escreval ("                 +--------------------------------------------------------------------+")
         escreval
         escreva ("                               ")
         leia (escolhe)
         escreval
         escolha (escolhe)
         caso 1
            caj <- 0
            limpatela
            escreval
            escreval
            escreval ("                               Digite seu nome completo e seu curso.")
            se escolhe=1 entao //escolheu a opcao 1 do menu, entrar na fila
               escreva ("                               ")
               leia (fila[1])
               escreval("                               Quase lá!")
               escreva ("                               ")
               leia (fila[2])
               escrevaL ("                               Digite sua matrícula. ")
               escreval ("                               Não se esqueça de que a matrícula é constituída somente por números!")
               escreva ("                               ")
               leia (matricula[1])
               se (matricula[1]>= 100000000) e (matricula[1] <1000000000) entao //controla o numero de digitos do número de matrícula dos alunos. O maior número com 9 dígitos e o menor com 7, precisa estar entre os dois
                  escreval ("                    ","           Parabéns aluno (a) ", fila[1], " do curso de ", fila[2]," e matrícula ", matricula[1], "!","         ")
                  escreval ("                               Seu lugar na fila está garantido! Pressione enter para voltar ao menu.   ")
                  escreval
                  escreval
                  escreval ("                                      Agradecemos pela preferência!")
                  quant <- quant + 1 //contador de alunos para respeitar a capacidade do veículo
               senao
                  escreval ("                               Matrícula inválida. Tentativas restantes = 1")
                  escreva ("                               ")
                  leia (matricula[2])
                  se (matricula[2]>= 100000000) e (matricula[2] <1000000000) entao
                     escreval ("                    ","           Parabéns aluno (a) ", fila[1], " do curso de ", fila[2]," e matrícula ", matricula[2], "! ")
                     escreval ("                               Seu lugar na fila está garantido! Pressione enter para voltar ao menu.")
                     escreval
                     escreval
                     escreval ("                                      Agradecemos pela preferência!")
                     quant <- quant + 1 //contador de alunos para respeitar a capacidade do veículo
                  senao
                     escreval ("                               Matrícula inválida. Estamos te redirecionando ao menu. Pressione ENTER para continuar.")
                     caj <- 1
                  fimse
               fimse
            fimse
            leia(systemPause)
            caj <- 1
         caso 2
            caj <- 0
            limpatela
            se escolhe=2 entao  // escolheu a opcao 2 da fila, situação da fila, um contador que mostra a quantidade de alunos. aqui estamos adotando 5 como capacidade apenas par testar, mas poderia ser substituído facilmente por 50 que é a capacidade real do intercampi
               se quant=1 entao
                  escreval
                  escreval
                  escreval ("                               A fila já está ocupada por ", quant, " aluno.")
               senao
                  escreval
                  escreval
                  escreval ("                               A fila já está ocupada por ", quant, " alunos.")
               fimse
            fimse
            caj <- 1
            leia(systemPause)
         caso 3
            caj <-0
            riachuelomanha[1]<- "06h25min"
            riachuelomanha[2]<- "07h10min"
            riachuelomanha[3]<- "09h00min"
            riachuelomanha[4]<- "10h00min"
            //////////////////////////////////////////////////////////////////////////////
            riachuelotarde[1]<- "13h00min"
            riachuelotarde[2]<- "15h00min"
            riachuelotarde[3]<- "16h00min"
            riachuelotarde[4]<- "16h00min"
            //////////////////////////////////////////////////////////////////////////////
            riachuelonoite[1]<- "18h50min"
            riachuelonoite[2]<- "20h40min"
            riachuelonoite[3]<- "21h30min"
            riachuelonoite[4]<- "22h30min"
            //////////////////////////////////////////////////////////////////////////////
            jatobamanha[1]<- "06h45min"
            jatobamanha[2]<- "08h30min"
            jatobamanha[3]<- "09h30min"
            jatobamanha[4]<- "11h20min"
            //////////////////////////////////////////////////////////////////////////////
            jatobatarde[1]<- "14h00min"
            jatobatarde[2]<- "15h30min"
            jatobatarde[3]<- "17h30min"
            jatobatarde[4]<- "18h20min"
            //////////////////////////////////////////////////////////////////////////////
            jatobanoite[1]<-"19h20min"
            jatobanoite[2]<-"21h00min"
            jatobanoite[3]<-"22h00min"
            jatobanoite[4]<-"23h00min"
            //////////////////////////////////////////////////////////////////////////////
            limpatela
            se escolhe=3 entao
               escreval
               escreval
               escreval ("                 +--------------------------------------------------------------------+")
               escreval ("                 |                          HORÁRIOS DE ÔNIBUS                        |")
               escreval ("                 |                         1 - CAMPUS RIACHUELO                       |")
               escreval ("                 |                         2 - CAMPUS JATOBÁ                          |")
               escreval ("                 |                                                                    |")
               escreval ("                 |                         Qual você deseja ver?                      |")
               escreval ("                 +--------------------------------------------------------------------+")
               escreval
               escreva ("                               ")
               leia (menu2)
               escolha (menu2)
               caso 1
                  limpatela
                  se menu2=1 entao
                     limpatela
                     escreval ("                +----------------------------------------------+")
                     escreval ("                |                                              |")
                     escreval ("                |                CAMPUS RIACHUELO              |")
                     escreval ("                |                                              |")
                     escreval ("                |  ",riachuelomanha[1]," | ", riachuelomanha[2]," | ", riachuelomanha[3]," | ", riachuelomanha[4],"   |")
                     escreval ("                |  ",riachuelotarde[1]," | ", riachuelotarde[2]," | ", riachuelotarde[3]," | ", riachuelotarde[4],"   |")
                     escreval ("                |  ",riachuelonoite[1]," | ", riachuelonoite[2]," | ", riachuelonoite[3]," | ", riachuelonoite[4],"   |")
                     escreval ("                |                                              |")
                     escreval ("                +----------------------------------------------+")
                  fimse
               caso 2
                  limpatela
                  se menu2=2 entao
                     escreval ("                +----------------------------------------------+")
                     escreval ("                |                                              |")
                     escreval ("                |                 CAMPUS JATOBÁ                |")
                     escreval ("                |                                              |")
                     escreval ("                |  ",jatobamanha[1]," | ", jatobamanha[2]," | ", jatobamanha[3]," | ", jatobamanha[4],"   |")
                     escreval ("                |  ",jatobatarde[1]," | ", jatobatarde[2]," | ", jatobatarde[3]," | ", jatobatarde[4],"   |")
                     escreval ("                |  ",jatobanoite[1]," | ", jatobanoite[2]," | ", jatobanoite[3]," | ", jatobanoite[4],"   |")
                     escreval ("                |                                              |")
                     escreval ("                +----------------------------------------------+")
                  fimse
               outrocaso
                  caj <-0
                  limpatela
                  se (menu2 <> 1) e (menu2 <> 2) entao
                     escreval
                     escreval
                     escreval ("                     Desculpe, mas essa opção é inválida. Pressione ENTER para retornar ao menu.")
                  fimse
               fimescolha
            fimse
            leia(systemPause)
            caj <- 1
         outrocaso
            caj <-0
            limpatela
            se (escolhe <> 1) e (escolhe <> 2) e (escolhe <>3) entao
               escreval
               escreval
               escreval ("                     Desculpe, mas essa opção é inválida. Pressione ENTER para retornar ao menu.")
            fimse
            caj <- 1
            leia(systemPause)
         fimescolha
      ate quant >= 2
      caj <- 0
      escreval ("                               A fila já foi preenchida, aguarde o próximo horário. Deseja retornar ao menu?")
      escreval ("                               Digite 1 para sim e 0 para não.")
      leia (caj)
      escreval
      escreval ("                                 ___                                     ___           ___     ")
      escreval ("                                /\__\                                   /\  \         /\__\    ")
      escreval ("                               /:/ _/_                     ___          \:\  \       /:/ _/_   ")
      escreval ("                              /:/ /\__\                   /\__\          \:\  \     /:/ /\__\  ")
      escreval ("                             /:/ /:/ _/_   ___     ___   /:/__/      _____\:\  \   /:/ /:/ _/_ ")
      escreval ("                            /:/_/:/ /\__\ /\  \   /\__\ /::\  \     /::::::::\__\ /:/_/:/ /\__\")
      escreval ("                            \:\/:/ /:/  / \:\  \ /:/  / \/\:\  \__  \:\  \  \/__/ \:\/:/ /:/  /")
      escreval ("                             \::/_/:/  /   \:\  /:/  /     \:\/\__\  \:\  \        \::/_/:/  / ")
      escreval ("                              \:\/:/  /     \:\/:/  /       \::/  /   \:\  \        \:\/:/  /  ")
      escreval ("                               \::/  /       \::/  /        /:/  /     \:\__\        \::/  /   ")
      escreval ("                                \/__/         \/__/         \/__/       \/__/         \/__/    ")
      escreval
      escreval
      escreval ("                                      Agradecemos pela preferência!")
      leia(systemPause)
   fimenquanto
fimalgoritmo
