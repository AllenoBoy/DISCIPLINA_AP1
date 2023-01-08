---
### A função free(); pode ser usada das seguintes formas: 
 
- free ( variável );
- free ( vetor [ posição ] );
---
### A diferença das funções referentes a allocação são as seguintes:

- malloc ( quantos * sizeof( tipo ) );
 -> BASICAMENTE ALOCA MEMÓRIA E NÃO REMOVE LIXO ELETRÔNICO!
 
 - calloc ( quantos, sizeof( tipo ) );
   -> BASICAMENTE ALOCA MEMÓRIA E REMOVE O LIXO ELETRÔNICO O SUBSTITUINDO POR 0!
 
 - realloc ( o que?, tamanho );
 -> BASICAMENTE AUMENTA A MEMÓRIA ALOCADA !
---
