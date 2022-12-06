Algoritmo "e4"

Var
      promo, arma, quant, somi, dimi, paga: inteiro  // Exercício Nº4
      talv: caracter                                 // Exercício Nº4
Inicio
                                                     // Menu
  escreval("* Fast Food Do a Barrell Roll *")
escreval // espaço
  escreval("Estamos com 3 promoções")
escreval // espaço
  escreval("1 - Big Burger")      // Grande  (1)
  escreval("2 - Average Burger")  // Médio   (2)
  escreval("3 - Little Burger")   // Pequeno (3)
escreval
repita // Repetição para impedir que escolha outro valor sem ser 1, 2 ou 3
  escreva("Qual você quer ver? ")
leia(promo)
ate (promo = 1) ou (promo = 2) ou (promo = 3) // Fim da repetição

escolha promo  // Exibição das descrições das promoções
   caso 1
escreval
  arma <- 40  // Variável que recebe o valor que vai ser (*) pelo dinheiro
limpatela
   escreval("Big Burger")
   escreval("A promoção custa R$ 40,00 e contém: ")
   escreval("1 hamburguer especial, 1 batata frita e 1 refrigerante")
   
   caso 2
escreval
  arma <- 30 // Variável que recebe o valor que vai ser (*) pelo dinheiro
limpatela
   escreval("Average Burger")
   escreval("A promoção custa R$ 30,00 e contém: ")
   escreval("1 hamburguer e 1 refrigerante")

   caso 3
escreval
  arma <- 15 // Variável que recebe o valor que vai ser (*) pelo dinheiro
limpatela
   escreval("Little Burger")
   escreval("A promoção custa R$ 15,00 e contém: ")
   escreval("1 misto quente e 1 suco")
   escreval("Você quer ver outra promoção?")

              fimescolha
                                        // Fim do menu
escreval // Espaço
       escreva("Quantos itens você vai querer? ")
  leia(quant) // Variável que ira multiplicar a variável "arma"
  
somi <- quant * arma   // Variável que vai dizer o valor total

escreval               // Mostra a nota
       limpatela
       escreval("> Resumo do produto:")
escreval
       escreval("Quantidade: ", quant)
       escreval("Promoção Nº: ", promo)
       escreval("Valor total a pagar: R$", somi)
escreval
       escreva("Digite o Valor que você pagará: ")
       leia(paga)
escreval

se (paga >= somi) e (promo = 1) entao  // Ver se tem dinheiro e dar o
       limpatela                            // troco ou não como no caso "a"
   escreval("Obrigado pela preferência!")
escreval
    escreval("Seu troco foi de R$",paga-somi)
   senao
       se (paga >= somi) e (promo = 2) entao
       limpatela
   escreval("Obrigado pela preferência!")
escreval
     escreval("Seu troco foi de R$",paga-somi)
   senao
       se (paga >= somi) e (promo = 3) entao
       limpatela
   escreval("Obrigado pela preferência!")
escreval
     escreval("Seu troco foi de R$",paga-somi)
   senao
   limpatela
      escreval("Você não tem dinheiro!")    // Caso "a"
   escreval
      escreval("Faça o pedido novamente com o valor certo!")
fimse
 fimse
  fimse



Fimalgoritmo
