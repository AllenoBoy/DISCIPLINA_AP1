Algoritmo "e6"
Var

  au, bu, opera, res, br, igu, pri: real // Exercício Nº6

Inicio

escreval("> Execução de algumas Operações baseado nas 2 entradas do user!")
                                        escreval // Espaço
escreval("OBS.: A divisão dos dois valores não pode ser = 0") // info pro user
                                        escreval // Espaço
                                        
repita  // Loop para impedir que coloque valores que na divisão deem = 0
   escreva("Escreva o primeiro valor: ")
leia(au)   // Valor 1

   escreva("Escreva o segundo valor: ")
leia(bu)   // Valor 2

res <- (au / bu)         // Caso 4 usa a variável res

      ate (res <> 0)  // fim do loop

                      // Caso 2 usa a variável br
se (au > bu) entao
    br <- au - bu
   senao
se (au < bu) entao
   br <- bu - au
   senao
se (au = bu) entao
   br <- au - bu
fimse
   fimse
       fimse         // Fim do Caso 2
       
igu <- au * bu         // Caso 3 usa a variável igu

                                        escreval // Espaço
escreval("< Operações >")
                                        escreval // Espaço
escreval("1 - Média entre os valores digitador")
escreval("2 - Diferença do maior pelo menor")
escreval("3 - Produto entre os números digitados")
escreval("4 - Divisão do primeiro pelo segundo")
                                        escreval // Espaço
escreva("O que o que você quer fazer: ")
 leia(opera)  // Entrada do valor para decisão da operação
                                        escreval // Espaço

escolha opera  // Escolha para responder os casos possíveis

caso 1
     pri <- ((au + bu) / 2)   // Caso 1 usa a variável pri
    escreval("Seguindo a operação o resultado é: ", pri:1:1)

caso 2
    escreval("Seguindo a operação o resultado é: ", br:1:1)
    
caso 3
    escreval("Seguindo a operação o resultado é: ", igu:1:1)
    
caso 4
    escreval("Seguindo a operação o resultado é: ", res:1:2)
outrocaso
    escreval("Entrada Inválida!")
fimescolha

                                        


Fimalgoritmo
