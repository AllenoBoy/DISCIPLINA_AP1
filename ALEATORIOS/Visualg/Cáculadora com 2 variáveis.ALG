Algoritmo "comando caso"
Var
       ent_a, ent_b: inteiro   // Exercício Nº2
       op: caractere           // Exercício Nº2
Inicio

    escreval("Calculadora em Portugol")
escreval // espaço
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

escreval("Calculadora em Portugol")
escreval // espaço

    escolha op // Execução da calculadora usando casos
    caso "*"
      escreval("Resultado Da Multiplicação = ",ent_a * ent_b)
    caso "+"
      escreval("Resultado Da Soma = ",ent_a + ent_b)
    caso "/"
      escreval("Resultado Da Divisão = ",ent_a / ent_b)
    caso "-"
      escreval("Resultado Da Subtração = ",ent_a - ent_b)
    outrocaso
      escreval("Só Pode Essas Quatro Oprerações . . .!")
  fimescolha
Fimalgoritmo
