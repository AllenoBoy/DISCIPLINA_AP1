# CODIGOS_DA_DISCIPLINA_DE_AP1
ARMAZENAMENTO DE TODOS OS MEUS CÓDIGOS QUE FORAM PRODUZIDOS DURANTE A DISCIPLINA DE AP1

> SetConsoleTitle("Cores Com System"); 

> system("CHCP 1252 > NULL");   -> CORRIGE PROBLEMAS COM ACENTUAÇÃO EM STRINGS NA SUA REQUISIÇÃO (ENTRADA);

> if ( var == ' ' ) { var2++; } -> CORRIGE OS PROBLEMAS COM A BARRA DE ESPAÇO NA DECLARAÇÃO DE UMA STRING;

> printf("\e[?25l");            -> ESCONDE O CURSOR DO CONSOLE PARA ESTILIZAÇÃO;

> printf("\e[?25h");            -> MOSTRA O CURSOR DO CONSOLE PARA ESTILIZAÇÃO;
    
> setbuf(stdin, NULL ou 0); OU fflush(stdin); "menos recomendado"     -> LIMPA O BUFFER; 

> system("mode con:cols=220 lines=50"); ou system("MODE 1000");       -> DETERMINA O TAMANHO DO CONSOLE;

> system("date"); ou system("time"); -> MOSTRA A DATA OU HORA;

> system("color a"); -> TECLADO VERDE;

> system( "type nome.txt" ); + include <process.h>  -> LÊ O CONTEUDO PRESENTE NO ARQUIVO E O PRINTA;

> system("gcc --version"); -> VERSÃO DO COMPILADOR GCC;

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-> MAXIMAR O CONSOLE (ALT + ENTER) 

-> # include <windows.h>

- keybd_event( VK_MENU, 0x36, 0, 0 );
- keybd_event( VK_RETURN, 0x1C, 0, 0 );
- keybd_event( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
- keybd_event( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-> CASTING  

int x = 12, y = 13;

float result = (float) x / (char) y;

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

malloc   -> retorna um ponteiro do tipo void -> recebe somente o tamanho
free(p); -> desaloca memória.
calloc   -> retorna um ponteiro do tipo void -> recebe quantos de tal elemento vc deseja alocar

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-> unsigned int -> não armazena valores negativos
-> static int   -> variável criada somente uma vez
-> const int    -> constante

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    c = var / 100; // PEGA A CENTENA
    d = var % 100; // PEGA A DEZENA
    u = d   %  10; // PEGA A UNIDADE
    d = d   /  10; // PEGA A DEZENA FINAL
    
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    HWND consoleWindow = GetConsoleWindow();                                    // PERMITE DEFINIR A POSIÇÃO DO CONSOLE
    SetWindowPos( consoleWindow, 0, 10, 20, 0, 0, SWP_NOSIZE | SWP_NOZORDER );  // PERMITE DEFINIR A POSIÇÃO DO CONSOLE


