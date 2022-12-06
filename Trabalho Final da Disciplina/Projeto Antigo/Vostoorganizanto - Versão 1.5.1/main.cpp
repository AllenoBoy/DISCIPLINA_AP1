/* DOCUMENTAÇÃO DO CÓDIGO |||||||||| <EXCLUSIVO PARA AP1>
---------------------------------------------------------
  # VOSTOORGANIZANTO - UM ORGANIZADOR DE FILAS PRÁTICO: {
    $ LINGUAGEM BASE UTILIZADA - C
    $ WIN 32 GUI PROJECT
    $ BIBLIOTECA windows.h
    $ VOSTOORGANIZANTO - Organizador de Filas em PT-BR
                                                        }
---------------------------------------------------------
  # SOFTWARES UTILIZADOS:                               {
    $ CODE::BLOCKS
    $ ResEdit
    $ Dev-C++
                                                        }
---------------------------------------------------------
  # DISCIPLINA DE ALGORITIMOS E PROGRAMAÇÃO I:          {
    $ PROJETO FINAL DA DISCIPLINA
    $ DOCENTE: ANA PAULA FREITAS VILELA BOAVENTURA
    $ DISCENTES:{ ALLISON DANTAS - 202200132
                  FABIO CASTRO   - 202201161
                  LETICIA        - 202200160
                  ...
                }
                                                        }
---------------------------------------------------------
*/

/// AQUI COMEÇA O CÓDIGO

/// BIBLIOTECAS UTILIZADAS
    #include <stdio.h>
    #include <stdlib.h>
    #include <windows.h>
    #include <commctrl.h>
    #include <locale.h>
    #include <string.h>
    #include <sys/stat.h>

/// HEADER QUE ORGANIZA OS IDS PARA CHAMADA DE DIALOGOS E FUNCIONALIDADES DOS BOTÕES ///
    #include "resource.h"

/// PONTEIRO DE CONTROLE DO ARQUIVO QUE VAI ARMAZENAR A FILA
    FILE *fila;

/// FUNÇÕES

void changeDialogTest() {Beep(256, 200);}
void changeDialogSound() { Sleep(10); Beep(300, 170); }
void notWrong() { Beep(440, 223); }

/// VARIÁVEIS UTILIZADAS GLOBALMENTE
// OBS.: Não é interessante comentar sobre cada uma no código dá para entender.
    int entrarFila, controle = 1, vamosAddPeople, podeAcessar = 0, filaCriada, isCreatedQueue = 0, isToDelete, isToCorrect, setColore;
    char filaNameValidation[1024*9], lista_formatada[1024*100], isEmpty[2] = " ", numeroDaQueue[1024*10];

/// IDENTIFICADOR PARA UMA INSTÂNCIA, OU SEJA CRIAR JANELAS, BOTÕES, ETC.
    HINSTANCE hInst;

/// AQUI É ONDE CONTROLAMOS AS FUNÇÕES, BOTÕES, TEXTOS, DIALOGOS, ARQUIVOS, DO NOSSO CÓDIGO.
/// !!! O QUE EXECUTA PRIMEIRO É A FUNÇÃO INT DO FINAL QUE EXECUTA E DEPOIS CHAMA ESSA FUNÇÃO !!!
BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    switch(uMsg)        /// SWITCH QUE CHAMA O uMsg <responsável por tudo que o programa irá mostrar para a gente>
    {
    case WM_INITDIALOG: /// DEFINE O QUE ACONTECE TODA VEZ QUE ABRE UM DIALÓGO
        {} return TRUE; /// !!PRECISA SER VERDADEIRO, SE NÃO UM ERRO OCORREU!!

    case WM_CLOSE:      /// DEFINE O QUE ACONTECE TODA VEZ QUE FECHA UM DIALÓGO
    {
EndDialog(hwndDlg, 0);  /// FECHA O DIALÓGO
    } return TRUE;      /// !!PRECISA SER VERDADEIRO, SE NÃO UM ERRO OCORREU!!

case WM_COMMAND:
                 /// AQUI ESTÃO OS COMANDOS QUE SERÃO EXECUTADOS
{                /// OU SEJA TODA A FUNCIONALIDADE DO CÓDIGO, CASO TAL BOTÃO SEJA APERTADO, OU NÃO
                 /// EXISTA ALGO, EMITA ALGO, MUDE ALGO, ETC.

switch(LOWORD(wParam)) /// SWITCH QUE CASO NÃO DE ERRO EXECUTE O QUE FOI PROGRAMADO

{/// COMEÇO DA DECLARAÇÃO DE COMANDOS

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO DE RETORNO PARA O MENU | BTN_RETURN |

case BTN_RETURN: {      // CASO SEJA PRESSIONADO
system("cls"); //limpa a tela do console
EndDialog(hwndDlg, 0);  // FECHA O DIALÓGO ATUAL, E NA LINHA ABAIXO CHAMA O DIALÓGO IDD_MENU

changeDialogSound(); /// beep decorativo

return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);

break; // é um case, precisa de break;
                 }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO DE INFORMAÇÕES | BT_INFO |

case BT_INFO: {        // CASO SEJA PRESSIONADO

EndDialog(hwndDlg, 0); // FECHA O DIALÓGO ATUAL, E NA LINHA ABAIXO CHAMA O DIALÓGO DIALOG_INFO

changeDialogSound(); /// beep decorativo

return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_INFO), NULL, (DLGPROC)DlgMain);

break; // é um case, precisa de break;
              }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO QUE VÁLIDA O ACESSO AO PAINEL DE ADMNISTRAÇÃO | BTN_ACESS |

case BTN_ACESS: {      // CASO SEJA PRESSIONADO

changeDialogSound();

char acessCode[10] = "202200132"; /// DEFINE O CÓDIGO DE ACESSO PARA FAZER A COMPARAÇÃO
char acessCodeValidation[10];     /// ENTRADA DO USUÁRIO

/// AQUI O CÓDIGO RECEBE O QUE FOI ESCRITO NA CAIXA DE TEXTO
GetDlgItemText(hwndDlg, QUAL_SENHA, acessCodeValidation, sizeof(acessCodeValidation));

/// AQUI OCORRE A COMPARAÇÃO ENTRE AS 2 STRINGS PARA VER SE O USUÁRIO ESCREVEU CERTO
if (strcmp(acessCodeValidation, acessCode) != 0){ // nesse caso não escreveu certo
    // Caixa de mensagens padrão do windows (nesse caso avisa que o código está errado)
    MessageBox(hwndDlg, "Insira o código de acesso correto!\n", "Allen", MB_ICONINFORMATION);
                                                }

/// AQUI PERMITE O ACESSO POR QUE NA COMPARAÇÃO AS DUAS STRINGS SÃO IGUAÍS
else                                            {

EndDialog(hwndDlg, 0);  // Fecha o dialógo, e chama o paínel de controle "DIALOG_CONTROLE"
return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_CONTROLE), NULL, (DLGPROC)DlgMain);
                                                }
break; // é um case, precisa de break;
                }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO PARA ENTRAR NO LOGIN DE ADMIN | BTN_QUEUE_CREATE |

case BTN_QUEUE_CREATE: { // CASO SEJA PRESSIONADO

EndDialog(hwndDlg, 0); // Fecha o dialógo, e chama o login, "DIALOG_SENHA"

changeDialogSound(); /// beep decorativo

return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_SENHA), NULL, (DLGPROC)DlgMain);

break; // é um case, precisa de break;
                       }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO PARA ENTRAR DIRETAMENTE NA FILA | BTN_QUEUE |

case BTN_QUEUE: { // CASO SEJA PRESSIONADO

    changeDialogSound();

if (isCreatedQueue == 1) { // se existir uma fila

EndDialog(hwndDlg, 0); // Fecha o dialógo, e permite entrar na fila, "DIALOG_SEUNOME"

return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_SEUNOME), NULL, (DLGPROC)DlgMain);

                         }

if (isCreatedQueue != 1) { //se não existir uma fila
                        // mostra uma messagebox, dizendo que não existe uma fila
MessageBox(hwndDlg, "No momento não existe nenhuma fila cadastrada! \nContate a adminisração para mais informações!\n", "Allen", MB_ICONINFORMATION);

                         }
break; // é um case, precisa de break;
                }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO PARA CHECAR SE A FILA EXISTE | BTN_QUEUE_EXISTS |
/// botão para caso ocorra algum erro na validação da fila

case BTN_QUEUE_EXISTS: { // Caso pressionado

    changeDialogSound(); /// beep decorativo

fila = fopen("fila.txt", "r"); // LÊ O ARQUIVO FILA.TXT

if (fila) {         /// CASO LEIA
isCreatedQueue = 1; // diz que a fila existe
MessageBox(hwndDlg, "Já existe uma fila cadastrada no sistema!\n", "Allen", MB_ICONINFORMATION);
fclose(fila);
          }

else {              /// CASO NÃO LEIA
                    // diz que a fila não existe
isCreatedQueue = 0;
MessageBox(hwndDlg, "Não existe nenhuma fila cadastrada!\n", "Allen", MB_ICONSTOP);
     }
break; // é um case, precisa de break;
                       }

///<---------------------------------------------------------------------------------------------------->

/// BOTÃO PARA CRIAR UMA FILA
case BTN_QUEUE_MAKE: { // CASO SEJA PRESSIONADO

changeDialogSound(); /// beep decorativo

if (isCreatedQueue == 1) { // CASO EXISTA UMA FILA NÃO PODE SOBREESCREVER
MessageBox(hwndDlg, "Já existe uma fila! Delete a atual se realmente deseja criar uma nova!", "Allen", MB_ICONINFORMATION);
                         }

if (isCreatedQueue != 1) { // CASO NÃO EXISTA CRIA UMA FILA

fila = fopen("fila.txt", "w"); /// CRIA O ARQUIVO

if (fila == NULL) {            /// SE OCORRER UM ERRO (RARAMENTE OCORRE)

printf("\n \nErro ao Criar a Fila!");
MessageBox(hwndDlg, "Erro ao Criar a Fila! Reinicie o Programa!\n", "Allen", MB_ICONERROR);

                  }
else {                        /// SE NÃO ACONTECER NENHUM ERRO
isCreatedQueue = 1;                 // Diz que já existe uma fila
fprintf(fila,"   > FILA ATUAL \n\n");  // Escreve no arquivo, e abaixo mostra uma messagebox dizendo que deu certo
MessageBox(hwndDlg, "Fila Criada com sucesso!\n", "Allen", MB_ICONINFORMATION);
     }
fclose(fila);  //Aqui fecha o arquivo
                          }
break; // é um case, precisa de break;
                      }

///<---------------------------------------------------------------------------------------------------->

/// Botão que chama uma confirmação para apagar a fila.
case BTN_QUEUE_DELETE: { // CASO SEJA PRESSIONADO

changeDialogSound(); /// beep decorativo

if (isCreatedQueue == 1) { /// SE A FILA EXISTIR

/// Chama um dialogo "DIALOG_QUIERES_APAGAR", para confirmar se realmente quer apagar!
return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_QUIERES_APAGAR), NULL, (DLGPROC)DlgMain);

                         }

if (isCreatedQueue != 1) { /// SE A FILA NÃO EXISTIR

/// Não tem como apagar algo que não existe, por isso chama uma mssgbox avisando isso!
MessageBox(hwndDlg, "Não existe uma fila para ser apagada!\n", "Allen", MB_ICONINFORMATION);
                         }
break; // é um case, precisa de break;

                       }

/// DIALOGO REFERENTE A CONFIRMAÇÃO -> "CHILD" OF BTN_QUEUE_DELETE

                        /// Botão de Cancelar!
                        case COMP_CANCEL: { // Caso pressionado!

                    // como é uma popup ele fecha o dialogo de confirmação e volta pro controle
                        EndDialog(hwndDlg, 0);
                        changeDialogSound(); /// beep decorativo

                        break; // é um case, precisa de break;
                                          }

                        /// Botão de Confirmar!
                        case COMP_AFFIRM: { // Caso pressionado!

                     // como é uma popup ele fecha o dialogo de confirmação e volta pro controle
                        EndDialog(hwndDlg, 0);
                        changeDialogSound(); /// beep decorativo
                            remove("fila.txt"); //apaga o arquivo
                            system("cls");
                        isCreatedQueue = 0;     // afirma que não existe nenhuma fila
                        MessageBox(hwndDlg, "A fila foi removida!\n", "Allen", MB_ICONSTOP); // mostra confirmação que apagou

                        break; // é um case, precisa de break;
                                          }

///<---------------------------------------------------------------------------------------------------->

/// Botão de confirmação de nome

case BTN_CONFIRM_TICK: { // caso apertado

    changeDialogSound(); /// beep decorativo

// string que irá armazenar temporariamente o nome da pessoa
char nomeOfThePeople[1024*8];

/// sistema recebe o valor da caixa de texto / "label", e armazena em "nomOfThePeople"
GetDlgItemText(hwndDlg, ENTRADA_NOME_ARMAZENAR, nomeOfThePeople, sizeof(nomeOfThePeople));

fila = fopen("fila.txt", "a"); // abre o arquivo e adiciona o nome

if (fila == NULL) // se der erro
   {
MessageBox(hwndDlg, "Ocorreu um Erro com a fila contate a administração possívelmente a mesma foi apagada!\n", "Allen", MB_ICONASTERISK);
   }

else {       // dando certo

/// Em resumo: será printado o nome da pessoa na fila sem apagar quem já tinha escrito
fprintf(fila,"   # %s\n", nomeOfThePeople);
fclose(fila); // fecha o arquivo
EndDialog(hwndDlg, 0);
return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);

     }

break; // é um case, precisa de break;
                      }

///<---------------------------------------------------------------------------------------------------->

/// Botão para printar / mostrar o conteúdo da fila
case BTN_CHECK_THE_QUEUEPEOPLE: {

    changeDialogSound(); /// beep decorativo

if (isCreatedQueue == 1) { // Se existe uma fila

/// exibe uma mensagem avisando que a fila foi gerada, e dps imprime a fila no console
MessageBox(hwndDlg, "A lista para você checar foi gerada! Dê uma olhada no console.\n", "Allen", MB_OK);
system("cls");

fila = fopen("fila.txt", "r"); // aqui lê o conteúdo do arquivo

while (fgets(lista_formatada, 100000000, fila) != NULL) // organiza conteúdo para impressão
printf("%s", lista_formatada); // printa a fila

fclose(fila); // fecha a lista

                         }
if (isCreatedQueue != 1) { // caso não exista lista não mostrará nada
MessageBox(hwndDlg, "O sistema não cadastrou nenhuma fila!\n", "Allen", MB_ICONASTERISK);
                         }
break; // é um case, precisa de break;
                                }

///<---------------------------------------------------------------------------------------------------->

}/// FIM DA DECLARAÇÃO DE COMANDOS

} return TRUE; /// PRECISA DAR CERTO
} return FALSE;/// SE DER ERRO SÓ SAI DO SWITCH
}


/// AQUI FUNCIONA DA MESMA FORMA QUE O "int main()", NO CASO CHAMANDO A FUNÇÃO BOOL ACIMA
INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){

/// FUNÇÕES DE INICIALIZAÇÃO PADRÃO DE UM CÓDIGO EM LINGUAGEM C

                                                /// EM RESUMO
    setlocale (LC_ALL, "Portuguese-Brazilian"); /// DEFINE A LOCALIZAÇÃO DO CÓDIGO
             // A IDE utilizada não aceita " ", que aceita todo e qualquer caractere existente
    SetConsoleTitle("[C] - Vostoorganizanto 1.5.1 - Made by allen");  /// DEFINE O TÍTULO DO CONSOLE
    system("COLOR E0");                         /// DEFINE A COR DE FUNDO DO CONSOLE

/// AQUI OS CONTROLES DE DIALOGOS, BOTÕES, LABELS, SÃO CHAMADOS / EXECUTADOS;
    hInst = hInstance;
    InitCommonControls ();



/// TESTE PARA SABER SE JÁ EXISTE UMA FILA E CASO EXISTA A ESCOLHA
    if (isCreatedQueue == 0){ fila = fopen("fila.txt", "r");
                              if (fila) { isCreatedQueue = 1; fclose(fila); }
                              else      { isCreatedQueue = 0;               }
                            }

changeDialogTest();

/// AQUI CHAMAMOS O PRIMEIRO DIALÓGO
    return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);
                                                                                               }




