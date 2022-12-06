Algoritmo "K.O"
Var

  ent_ai, ent_bi, ent_c: real  // Exercício Nº3
  ai: caractere               // Exercício Nº3
  hammod: real               // Exercício Nº3
  
Inicio
       escreval("Olá usuário!")    // Calcular as médias
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

Fimalgoritmo
