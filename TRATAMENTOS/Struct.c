# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

int kaj = 0;

// MODO 1
typedef struct
{

    int idade;
    char sexo;
    char nomi [100];

} People;

// MODO 2
struct People2
{
    int idade;
    char sexo;
    char nome [100];
};

typedef struct 
{
   People definiton; 
   int idade;
    int sociedade;
    
} Pipa;


int main ()
{
    setlocale(LC_ALL, "");

    // MODO 1 -> Definir o nome da struct para uso
    People nome;
    // MODO 2 -> Definir o nome da struct para uso
    struct People2 nome2;
    
    nome.idade = 35;
    nome.sexo  = 'f';
    // Strings só podem receber um conteúdo no código (sem ser stdin) na declaração da string
    // por isso o uso da função strcpy que não precisa necessariamente de uma variável para 
    // preencher a string.
    strcpy(nome.nomi, "Robson Dantas Walker Felip"); 
    
    printf("\n %d", nome.definiton.idade);

    printf("%s", nome.nomi);







    return 0;
}
