algoritmo "Algoritimo Completo"

 // Discente: Allison Dantas Rocha de Souza Júnior
 // Docente: Ana Paula Freitas Vilela BoaVentura
 // Disciplina: Algoritmos e Progração 1
 // Lista de Exercício Nº 5

var

   // Exercício Nº 1 / MENU PARA ESCOLHA DO PSEÚDO-CÓDIGO
   
                           entrada: caractere
   
   // Variáveis usadas no Exercício Nº 2

      ent_a, ent_b: inteiro
                op: caractere
   
   // Variáveis usadas no Exercício Nº 3
   
      ent_ai, ent_bi, ent_c: real
                         ai: caractere
                     hammod: real
   
   // Variáveis usadas no Exercício Nº 4
   
      promo, arma, quant, somi, dimi, paga: inteiro
                              burger, talv: caracter
   
   // Variáveis usadas no Exercício Nº 5
   
      ano, bis, val: inteiro
         mes, fever: caractere
   
   // Variáveis usadas no Exercício Nº 6

      au, bu, opera, res, br, igu, pri: real
      
   // Total de VAR usadas = 28 variáveis
   
inicio
      escreval ("Seja Bem-Vinda Professora Ana Paula!")  // INFO
escreval // espaço
      escreval("Os Pseúdo-Códigos Executáveis São os Seguintes:")
escreval // espaço
      escreval("1 – Calculadora com 2 números.")
      escreval("2 - Cálcular Médias.")
      escreval("3 - Atendimento de Fast Food.")
      escreval("4 - Contabilizar quantos dias tem um mês, baseando-se no ano.")
      escreval("5 - Execução de algumas operações com dois valores.")
escreval // espaço

 repita // Uso do repita para não precisar usar "outrocaso" fazendo o console
        // fechar
 
escreva("Qual Você Deseja Executar? ")
                              leia(entrada)
 ate (entrada = "1") ou (entrada = "2") ou (entrada = "3") ou (entrada = "4") ou (entrada = "5")

// O uso do até faz com que a variável entrada só aceite 1, 2, 3, 4, 5

escreval // espaço

limpatela // Excluir tudo escrito acima dessa linha

                   // A partir daqui o código aumenta grotescamente
                   // por que aqui vão estar todos os códigos
  escolha entrada
  
         caso "1"
         
// Início da Execução da Cálculadora

    escreval("Cálculadora em Portugol")
escreval
    escreva("Digite o 1ª número: ")      // entrada nº1
 leia(ent_a)    // varíavel do valor 1
        escreva("Digite o 2º Número: ")  // entrada nº2
 leia(ent_b)    // varíavel do valor 2

escreval                   //espaço
     escreval("(*) - Multiplicar")
     escreval("(/) - Dividir")
     escreval("(-) - Subtrair")
     escreval("(+) - Somar")
escreval                   //espaço
escreva("O que você quer fazer? ")
leia(op) // variável que vai definir se vai somar, dividir...

 limpatela // Excluir o que já apareceu

    escolha op // Execução da calculadora usando casos

    caso "*"
    escreval("Calculadora em Portugol")
escreval
      escreval("Resultado Da Multiplicação = ",ent_a * ent_b)

    caso "+"
    escreval("Calculadora em Portugol")
escreval
      escreval("Resultado Da Soma = ",ent_a + ent_b)

    caso "/"
    escreval("Calculadora em Portugol")
escreval
      escreval("Resultado Da Divisão = ",ent_a / ent_b:1:2)

    caso "-"
    escreval("Calculadora em Portugol")
escreval
      escreval("Resultado Da Subtração = ",ent_a - ent_b)

    outrocaso
    escreval("Calculadora em Portugol")
escreval
      escreval("Entrada Inválida! Use (+), (-), (/), (*)")
  fimescolha

// Fim da execução da cálculadora
         
         caso "2"
         
// Início da execução do cálculo das médias

escreval("Profª Ana paula, insira as notas do aluno.") // Calcular as médias
escreval // espaço
       escreva("Qual é a 1ª nota? ")
leia(ent_ai)                        // Nota 1
escreval // espaço
       escreva("Qual é a 2ª Nota? ")
leia(ent_bi)                        // Nota 2
escreval // espaço
       escreva("Qual é a 3ª Nota? ")
leia(ent_c)                        // Nota 3
escreval // espaço
       escreval("1 - Aritmética")
       escreval("2 - Ponderada (Pesos Aplicados = 3, 3, 4)")
       escreval("3 - Harmônica")
escreval // espaço
                      leia(ai) // Varíavel que determina o tipo de média
escreval
hammod <- (3) / ((1 / ent_ai) + (1 / ent_bi) + (1 / ent_c))
   // hammod = cálculo da fórmula Harmônica que foi feita previamente
   // para evitar que a linha fique muito grande nos casos

limpatela // limpar o texto já escrito

    escolha ai // cálculos e exibição das médias

    caso "1"
    escreval("> Média Aritmética")
escreval
    escreval("A média do aluno é igual = ",(ent_ai + ent_bi + ent_c) / 3:1:1)

    caso "2"
    escreval("> Média Ponderada")
escreval
    escreval("A média do aluno é igual = ",((ent_ai * 3) + (ent_bi * 3) + (ent_c * 4)) / 3:1:1)

    caso "3"
    escreval("> Média Harmônica")
escreval
    escreval("A média do aluno é igual = ",hammod:1:1)

 outrocaso
       escreval("Entrada inválida!") // não usei o repita
    fimescolha

// Fim da execução do cálculo das médias

         caso "3"
         
// Inicío da execução do Atendimento Fast Food

// OBS.: Não consegui fazer com que caso você queira ver outra promoção
// você poder voltar para olhar outra

  escreval("* Fast Food Do a Barrell Roll *")      // Menu
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
  burger <- "Big Burger!"
limpatela
   escreval("Big Burger!")
   escreval("A promoção custa R$ 40,00 e contém: ")
   escreval("1 hamburguer especial, 1 batata frita e 1 refrigerante")

   caso 2
escreval
  arma <- 30 // Variável que recebe o valor que vai ser (*) pelo dinheiro
  burger <- "Average Burger!"
limpatela
   escreval("Average Burger!")
   escreval("A promoção custa R$ 30,00 e contém: ")
   escreval("1 hamburguer e 1 refrigerante")

   caso 3
escreval
  arma <- 15 // Variável que recebe o valor que vai ser (*) pelo dinheiro
  burger <- "Little Burger!"
limpatela
   escreval("Little Burger!")
   escreval("A promoção custa R$ 15,00 e contém: ")
   escreval("1 misto quente e 1 suco")

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
       escreval("• Quantidade: ", quant)
       escreval("• Promoção Nº: ", promo)
       escreval("• Valor total a pagar: R$", somi)
escreval
       escreva("Digite o Valor que você pagará: R$ ")
       leia(paga)
escreval
       se (paga >= somi) e (promo = 1) entao  // Ver se tem dinheiro e dar o
       limpatela                             // troco ou não como no caso "a"
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

// Fim da execução do Atendimento Fast Food

         caso "4"
         
// Inicío da execução do "Mês pelo ano"

escreval("> Sabedor se dias do mês pelo ano em Portugol!") // nome

escreval // espaço

                           repita // Impedir que o user coloque outro valor
   escreva("Qual o ano: ")
leia(ano)  // entrada do dado referente ao ano
bis <- ano % 4   // Define se o ano é bissexto. EX.: Se bis = 0 entao o ano é
                 // bissexto caso contrário ele não é! :) kkkkk
                           ate (ano >= 1000) e (ano <= 2022) // fim do repita
escreval // espaço
   escreva("Escreva o mês: ")
leia(mes) // entrada do dado referente ao mes

// validação para poder usar escolha caso mais facilmente sem erros, pq não
// consegui usar o escolha caso diretamente com o valor da variável "mes"

se (mes = "janeiro") ou (mes = "Janeiro") ou (mes = "jan") entao
  val <- 1
                        senao
se (mes = "fevereiro") ou (mes = "Fevereiro") ou (mes = "fev") entao
  val <- 2
                        senao
se (mes = "março") ou (mes = "Março") ou (mes = "mar") entao
  val <- 3
                        senao
se (mes = "abril") ou (mes = "Abril") ou (mes = "abr") entao
  val <- 4
                        senao
se (mes = "maio") ou (mes = "Maio") ou (mes = "mai") entao
  val <- 5
                        senao
se (mes = "junho") ou (mes = "Junho") ou (mes = "jun") entao
  val <- 6
                        senao
se (mes = "julho") ou (mes = "Julho") ou (mes = "jul") entao
  val <- 7
                        senao
se (mes = "agosto") ou (mes = "Agosto") ou (mes = "ago") entao
  val <- 8
                        senao
se (mes = "setembro") ou (mes = "Setembro") ou (mes = "set") entao
  val <- 9
                        senao
se (mes = "outubro") ou (mes = "Outubro") ou (mes = "out") entao
  val <- 10
                        senao
se (mes = "novembro") ou (mes = "Novembro") ou (mes = "nov") entao
  val <- 11
                        senao
se (mes = "dezembro") ou (mes = "Dezembro") ou (mes = "dez") entao
  val <- 12

// fim da aplicação dos valores ^ para a variável que determina o caso


fimse                  // jan
 fimse                 // fev
  fimse                // mar
   fimse               // abr
    fimse              // mai
     fimse             // jun
      fimse            // jul
       fimse           // ago
        fimse          // set
         fimse         // out
          fimse        // nov
           fimse       // dez

// Saída dos dados

se (bis = 0) entao                     // se para dizer se é bissexto
  fever <- "29 dias e o ano é bissexto!"
senao
  fever <- "28 dias!"
fimse


escolha val

 caso 1
escreval
     escreval("Janeiro tem 31 dias!")

 caso 2
escreval
     escreval("Fevereiro tem ",fever)

 caso 3
escreval
     escreval("Março tem 31 dias!")

 caso 4
escreval
     escreval("Abril tem 30 dias!")

 caso 5
escreval
     escreval("Maio tem 31 dias!")

 caso 6
escreval
     escreval("Junho tem 30 dias!")

 caso 7
escreval
     escreval("Julho tem 31 dias!")

 caso 8
escreval
     escreval("Agosto tem 31 dias!")

 caso 9
escreval
     escreval("Setembro tem 30 dias!")

 caso 10
escreval
     escreval("Outubro tem 31 dias!")

 caso 11
escreval
     escreval("Novembro tem 30 dias!")

 caso 12
escreval
     escreval("Dezembro tem 31 dias!")

 outrocaso
escreval
   escreval("Valor inválido!")

fimescolha // fim da saída

// Fim da execução do "Mês pelo ano"

         caso "5"
         
// Inicío da execução do Operações com 2 valores

escreval("> Execução de algumas Operações baseado nas suas 2 entradas Profª")
                                        escreval // Espaço
escreval("OBS.: A divisão dos dois valores não pode ser = 0") // info pro user
                                        escreval // Espaço

repita  // Loop para impedir que coloque valores que na divisão deem = 0
   escreva("Escreva o primeiro valor (inteiro ou decimal): ")
leia(au)   // Valor 1

   escreva("Escreva o segundo valor (inteiro ou decimal): ")
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

// Fim da execução de Operações com 2 valores

fimescolha
      
fimalgoritmo
