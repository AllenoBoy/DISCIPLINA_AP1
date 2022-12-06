Algoritmo "e4"

Var
      ano, bis, val: inteiro        // Exercício Nº5
      mes, fever: caractere      // Exercício Nº5
Inicio
   escreval("> Saber os dias do mês pelo ano em Portugol!") // nome
   
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

fimescolha  // fim da saída

Fimalgoritmo
