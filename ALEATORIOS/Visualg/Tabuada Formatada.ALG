Algoritmo "questão 1"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

executar, fator, resultado, j , fazer: inteiro

kaj : inteiro

Inicio
                   escreval("                           [ Lista 09 ]")
escreval // espaço.
                   escreval(" 1ª) Questão.")
escreval // espaço.

                   escreva(" Na lista 6 e 7, fizemos este mesmo exercício usando enquanto e repita enquanto, respectivamente. Reescreva")
                   escreva("o algoritmo em que o usuário digita um determinado valor e, usando o laço (para), calcule a “tabuada” de 1 a 10.")
                   escreva("Fiquem atentos à formatação, ou seja, unidade embaixo de unidade e dezena embaixo de dezena. Exemplo:")

// o uso desses escreval é para evitar um bug de que o leia aparecia em cima do texto
escreval // espaço.
escreval // espaço.
escreval(" Pressione qualquer tecla para continuar...")
escreval
escreval
escreval
escreval
escreval // espaço.
leia(executar)
limpatela
escreval // espaço.

kaj <- 0
j <- 0

/////////////////////////////////// APP ////////////////////////////////////////

repita
                   escreval("                  _ _ _ Tabuada Formatada _ _ _")
escreval // espaço.

repita            // do while começo < IMPEDIR ALGUMA ENTRADA ERRADA>
limpatela
                   escreval("                  _ _ _ Tabuada Formatada _ _ _")
escreval // espaço.
                   escreva("Escreva um número de 1 até 10: ")
                   leia(fator)
                   
escreval
                   
ate (fator >= 1) e (fator <= 10) // do while fim < IMPEDIR ALGUMA ENTRADA ERRADA>

para kaj de 9 ate 1 passo -1 faca

j <- j + 1
resultado <- fator * j


escreval(fator, " x", j," =", resultado:4)
fimpara

resultado <- fator * 10

escreval(fator, " x",10,"=", resultado:4)



escreval
escreva(" Pressione qualquer tecla para continuar...    ")
 leia(executar)
 
limpatela

escreval(" O que você quer fazer agora?")
escreval(" [ 1 ] Sair")
escreval(" [ 2 ] Executar novamente.")
leia(fazer)
 
 
 ate (fazer = 1)
                   






Fimalgoritmo
