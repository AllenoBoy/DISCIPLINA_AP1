Algoritmo "semnome"

Var

// menu

  kaj : inteiro

// menu

// tabuada

                               pq, out: inteiro
um, do, tr, qu, ci, ss, st, oi, no, dz: inteiro


// tabuada

// mercado

prod1, prod2, prod3, prod4, prod5, total : real
codigo_prod, prod_101, prod_202, prod_303, prod_404, prod_505 : real
prod_quant_101, prod_quant_202, prod_quant_303, prod_quant_404, prod_quant_505 : inteiro

// mercado

Inicio

escreval("                        < LISTA 08 >")

escreval
escreval("[ 1 ] - Tabuada Formatada")
escreval("[ 2 ] - Caixa de Supermecado")
escreval("[ 3 ] - Fechar o Programa")
escreval

escreva("O que você quer executar? ")
leia(kaj)

escolha (kaj)

caso 1

limpatela
out <- 0

escreval("                  _ _ _ Tabuada Formatada _ _ _")
                                             escreval
                                             repita
escreva("Escreva um número de 1 até 10: ")
                                             leia(pq)
                                             ate (pq >= 1) e (pq <= 10)

// OPERA??ES COM VARI?VEIS AUXIL?ARES

 um <- pq * 1
  do <- pq * 2
   tr <- pq * 3
    qu <- pq * 4
     ci <- pq * 5
      ss <- pq * 6
       st <- pq * 7
        oi <- pq * 8
         no <- pq * 9
          dz <- pq * 10

// OPERA??ES COM VARI?VEIS AUXIL?ARES

// EXIBI??O FORMATADA DOS RESULTADOS

       enquanto (pq >= 1) e (pq <= 10) e (out = 0) faca
limpatela
       escreval("                     _ _ _ Tabuada de ",pq,"_ _ _")
                                                   escreval
escreval(pq," x ","1 =",um:4)
escreval(pq," x ","2 =",do:4)
escreval(pq," x ","3 =",tr:4)
escreval(pq," x ","4 =",qu:4)
escreval(pq," x ","5 =",ci:4)
escreval(pq," x ","6 =",ss:4)
escreval(pq," x ","7 =",st:4)
escreval(pq," x ","8 =",oi:4)
escreval(pq," x ","9 =",no:4)
escreval(pq," x","10 =",dz:4)

out <- 1 // OUT OF THE LOOP

       fimenquanto

// EXIBI??O FORMATADA DOS RESULTADOS

caso 2

// zera a quant dos produtos

prod_101 <- 15.20
prod_202 <- 4.99
prod_303 <- 8.57
prod_404 <- 1.40
prod_505 <- 9.98

   // zera a quant dos produtos


limpatela
repita  //estrutura de do while melhor que linguagem C

limpatela
escreval("_ _ _ _ _ _ _ _ _ _ _ SUPERMECADO CLAUDINHO _ _ _ _ _ _ _ _ _ _ _")
escreval("                          MADE BY ALLEN")
escreval


escreval("                     ( CARRINHO DE COMPRAS )")
escreval

escreva("> [ 1 ] ARROZ PARBOLIZADO.     ")


escreva(prod_quant_101,"x")


escreval

escreva("> [ 2 ] FEIJÃO YELLOW.         ")


escreva(prod_quant_202,"x")


escreval

escreva("> [ 3 ] CUSCUZ DE IMPERATRIZ.  ")


escreva(prod_quant_303,"x")


escreval

escreva("> [ 4 ] AÇÚCAR DE COLECIONADOR.")

escreva(prod_quant_404,"x")


escreval

escreva("> [ 5 ] NOTEBOOK GAMER DA ACER.")

escreva(prod_quant_505,"x")


escreval

escreval("> [ 6 ] FINALIZAR COMPRAS.")
escreval
escreval
escreva("<@> O QUE VOCÊ QUER COMPRAR: ")

leia(codigo_prod)

se (codigo_prod = 1) entao   // produto 1
prod_quant_101 <- prod_quant_101 + 1
fimse

se (codigo_prod = 2) entao   // produto 2
prod_quant_202 <- prod_quant_202 + 1
fimse

se (codigo_prod = 3) entao   // produto 3
prod_quant_303 <- prod_quant_303 + 1
fimse

se (codigo_prod = 4) entao   // produto 4
prod_quant_404 <- prod_quant_404 + 1
fimse

se (codigo_prod = 5) entao   // produto 4
prod_quant_505 <- prod_quant_505 + 1
fimse

ate (codigo_prod = 6) // condicao para fechamento do do while em visual g

prod1 <- prod_101 * prod_quant_101
prod2 <- prod_202 * prod_quant_202
prod3 <- prod_303 * prod_quant_303
prod4 <- prod_404 * prod_quant_404
prod5 <- prod_505 * prod_quant_505


// finalização



            total <- prod1 + prod2 + prod3 + prod4 + prod5


// finalização





limpatela
escreval("_ _ _ _ _ _ _ _ _ _ _ SUPERMECADO CLAUDINHO _ _ _ _ _ _ _ _ _ _ _")
escreval("                          MADE BY ALLEN")
escreval

escreval("                        ( TOTAL A PAGAR )")
escreval
escreval

se (total > 0) entao

escreval(" <@> PAGUE AO CAIXA R$",total)
escreval
senao
escreval(" <@> Não quis comprar nada? ok. Obrigado pela visita!")
escreval
fimse

fimescolha


Fimalgoritmo
