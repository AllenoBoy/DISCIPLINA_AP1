#define tipo ".txt"

/// BIBLIOTECAS UTILIZADAS
#include <windows.h>
 #include <commctrl.h>
  #include <stdio.h>
   #include <locale.h>
    #include <string.h>
     #include <sys/stat.h>

/// ARQUIVO HEADER
#include "resource.h"

/// FUNÇÕES

void beepSounds() {  Beep(240, 300);  } /// Reproduzir Beep
void beepSounds_fast() { Beep(445, 900);  } /// Reproduzir Beep
void beepSounds_start() { Beep(256, 662); Beep(360, 102); Beep(400, 100);  } /// Reproduzir Beep
void beepIsError() {  Beep(400, 200);  } /// Reproduzir Beep
void beepNotCreated() {  Beep(900, 700);  } /// Reproduzir Beep

/// VARIÁVEIS GLOBAIS

FILE *fila; /// COISA MAIS IMPORTANTE DESSE CÓDIGO

int entrarFila, controle = 1, vamosAddPeople;
int podeAcessar = 0, filaCriada;
int isCreatedQueue = 0, isToDelete, isToCorrect;

char filaNameValidation[1024*9], lista_formatada[1024*100];
char isEmpty[2] = " ", numeroDaQueue[1024*10];

HINSTANCE hInst;

BOOL WINAPI FreeConsole();

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
    } return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    } return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam)) {
                                case BTN_RETURN: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);

                                break; /// RETORNAR AO MENU
                                                 }
                                case BT_INFO: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_INFO), NULL, (DLGPROC)DlgMain);

                                break; /// RETORNAR AO MENU
                                                 }

                                case BTN_ACESS: {
                                beepIsError ();
                                char acessCode[10] = "202200132"; /// DEFINE O CÓDIGO DE ACESSO
                                char acessCodeValidation[10];
                                                            GetDlgItemText(hwndDlg, QUAL_SENHA, acessCodeValidation, sizeof(acessCodeValidation));
                                if (strcmp(acessCodeValidation, acessCode) != 0)                        {
                                printf("\n FLAG DE COMPARAÇÃO: %s, %s", acessCode, acessCodeValidation);}
                                else                                                                                                      {
                                         EndDialog(hwndDlg, 0);
                                        beepSounds_fast();
                                        return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_CONTROLE), NULL, (DLGPROC)DlgMain); }

                                break; /// CÓDIGO DE ACESSO SE FOR VÁLIDO
                                                }


                                case BTN_QUEUE_CREATE: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_SENHA), NULL, (DLGPROC)DlgMain);

                                break; /// ENTRAR NA CRIAÇÃO DE LISTA
                                                       }

                                case BTN_QUEUE: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_FILA), NULL, (DLGPROC)DlgMain);

                                break; /// ENTRAR NA LISTA
                                                }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                ////////////////////////
                                case BTN_QUEUE_EXISTS: {

                                fila = fopen("fila.txt", "r");

                                if (fila) {
                                    isCreatedQueue = 1;
                                    MessageBox(hwndDlg, "Já existe uma fila cadastrada no sistema!\n", "Allen", MB_ICONINFORMATION);
                                    fclose(fila);
                                        }

                                else {
                                 isCreatedQueue = 0;
                                 MessageBox(hwndDlg, "Não existe nenhuma fila cadastrada!\n", "Allen", MB_ICONSTOP);
                                     }
                                 break; /// CHECAR SE EXISTE UMA LISTA
                                                    }



                                ////////////////////////
                                case BTN_QUEUE_MAKE:   {

                                if (isCreatedQueue == 1) {
                                MessageBox(hwndDlg, "Já existe uma fila! Delete a atual se realmente deseja criar uma nova!", "Allen", MB_ICONINFORMATION);
                                }

                                if (isCreatedQueue != 1) {

                                fila = fopen("fila.txt", "w");

                                if (fila == NULL) {

                                    printf("\n \nErro ao Criar a Fila!");
                                    MessageBox(hwndDlg, "Erro ao Criar a Fila! Reinicie o Programa!\n", "Allen", MB_ICONERROR);

                                                  }
                                else {
                                isCreatedQueue = 1;

                                fprintf(fila,"> Fila Atual \n\n");

                                MessageBox(hwndDlg, "Fila Criada com sucesso!\n", "Allen", MB_ICONINFORMATION);
                                     }
                                fclose(fila);
                                }
                                break; /// CRIAR UMA FILA CASO NÃO EXISTA
                                                        }
                                ////////////////////////
                                case COMP_CANCEL: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                break;
                                                  }

                                case COMP_AFFIRM: {
                                EndDialog(hwndDlg, 0);
                                beepSounds ();
                                remove("fila.txt");
                                isCreatedQueue = 0;
                                MessageBox(hwndDlg, "A fila foi removida!\n", "Allen", MB_ICONSTOP);
                                break;
                                                  }
                                ///////////////////////

                                case BTN_QUEUE_DELETE: {

                                if (isCreatedQueue == 1) {

                                return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_QUIERES_APAGAR), NULL, (DLGPROC)DlgMain);
                                beepSounds ();

                                                         }

                                if (isCreatedQueue != 1) {
                                     MessageBox(hwndDlg, "Não existe uma fila para ser apagada!\n", "Allen", MB_ICONINFORMATION);
                                                         }
                                break; /// APAGAR A FILA QUE EXISTE

                                                       }
                                ////////////////////////
                                ////////////////////////
                                ////////////////////////

                                case BTN_GO_TOQUEUE: { /// ESCREVER NA FILA

                                if (isCreatedQueue == 1) {
                                EndDialog(hwndDlg, 0);
                                beepSounds();
                                return DialogBoxA(hInst, MAKEINTRESOURCE(DIALOG_SEUNOME), NULL, (DLGPROC)DlgMain);
                                                         }

                                if (isCreatedQueue != 1) {
                                MessageBox(hwndDlg, "O sistema não cadastrou nenhuma fila!\n", "Allen", MB_ICONASTERISK);
                                                         }
                                    break; /// ENTRAR NA FILA
                                                     }
                        /// PLEASE SEND ME HELP FOR THE SAKE OF SOMEONE ON THIS PLACE HELP HELP


                                case BTN_CONFIRM_TICK: {
                                beepSounds();

                                char nomeOfThePeople[1024*8];

                                     GetDlgItemText(hwndDlg, ENTRADA_NOME_ARMAZENAR, nomeOfThePeople, sizeof(nomeOfThePeople));

                fila = fopen("fila.txt", "a");

                if (fila == NULL)
                {
                        MessageBox(hwndDlg, "Ocorreu um Erro com a fila contate a administração possívelmente a mesma foi apagada!\n", "Allen", MB_ICONASTERISK);
                }
                else {
                        fprintf(fila,"# %s\n", nomeOfThePeople);
                        fclose(fila);
                        EndDialog(hwndDlg, 0);
                        beepSounds();
                        return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);
                     }
                break;
                                                       }

                case BTN_CHECK_THE_QUEUEPEOPLE: {

                    if (isCreatedQueue == 1) { // lista_formatada
                        beepSounds();
                    MessageBox(hwndDlg, "A lista para você checar foi gerada! Dê uma olhada no console.\n", "Allen", MB_OK);
            system("cls");
                    fila = fopen("fila.txt", "r");

                    while (fgets(lista_formatada, 100000000, fila) != NULL)
                        printf("%s", lista_formatada);

                    fclose(fila);
                    beepSounds_fast();

                                             }
                    if (isCreatedQueue != 1) {
                    MessageBox(hwndDlg, "O sistema não cadastrou nenhuma fila!\n", "Allen", MB_ICONASTERISK);
                                             }
                    break;
                                                }

                    case BTN_RECLAMATIONS: {
                    MessageBox(hwndDlg, "Essa Função ainda não está liberada!\n", "Allen", MB_ICONEXCLAMATION);
                    break;
                                           }
                    case BTN_OPTIONS: {
                    MessageBox(hwndDlg, "Essa Função ainda não está liberada!\n", "Allen", MB_ICONEXCLAMATION);
                    break;
                                           }





}

} return TRUE;
} return FALSE;
}






INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){

setlocale (LC_ALL, "Portuguese-Brazilian");
SetConsoleTitle("Vostoorganizanto");
system("color E0");

   //HWND hConsole = GetConsoleWindow();  // HIDE CONSOLE
   //ShowWindow(hConsole, SW_HIDE);

    beepSounds_start();
    hInst=hInstance;
    InitCommonControls();

    if (isCreatedQueue == 0){       /// BASICAMENTE TESTA PARA VER SE O ARQUIVO DE FILA EXISTE
                                    /// E SE EXISTIR NÃO PRECISA ACESSAR MENU DE ADMNISTRAÇÃO
    fila = fopen("fila.txt", "r");

    if (fila) {
    isCreatedQueue = 1;
    fclose(fila);
              }
    else {
    isCreatedQueue = 0;
         }
                            }

    return DialogBoxA(hInst, MAKEINTRESOURCE(IDD_MENU), NULL, (DLGPROC)DlgMain);
    }




