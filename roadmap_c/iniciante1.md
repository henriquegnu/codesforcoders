## Estrutura básica de um programa em C - tópico 1
**Declaração de bibliotecas**

Em programação, uma **biblioteca** é um conjunto de ferramentas prontas que podemos usar em nosso código para facilitar o nosso trabalho. Por exemplo, uma biblioteca de funções matemáticas pode incluir fórmulas para cálculos como raiz quadrada, seno e cosseno.

Para usar uma biblioteca em nosso programa em C, precisamos dizer ao compilador que queremos usá-la. Existem duas maneiras de fazer isso:

A primeira é usar o **comando #include** no início do nosso programa. Isso diz ao compilador para incluir as funções da biblioteca no nosso programa. É como se estivéssemos dizendo "Ei, compilador, precisamos dessas funções. Por favor, inclua-as".

A segunda maneira é usar o comando de compilação **-l**. Isso diz ao compilador para procurar a biblioteca que queremos usar e incluí-la no nosso programa. É como se estivéssemos dizendo "Ei, compilador, eu quero usar esta biblioteca. Por favor, encontre-a e a inclua no meu programa".

Ambas as maneiras são fáceis de usar. Tudo o que precisamos fazer é escolher a biblioteca que queremos usar e decidir qual maneira queremos usar para incluí-la no nosso programa. Depois disso, podemos usar as funções da biblioteca em nosso código como se as tivéssemos escrito nós mesmos.

Por exemplo, digamos que queremos calcular a raiz quadrada de um número em nosso programa. Podemos usar a biblioteca math.h, que já possui uma função pronta para fazer esse cálculo. Tudo o que precisamos fazer é incluir a biblioteca no nosso código e usar a função sqrt() para calcular a raiz quadrada.

**Exemplo de código onde a biblioteca é inclusa**
```c
#include <stdio.h> // inclui a biblioteca padrão de entrada/saída
#include <math.h> // inclui a biblioteca de funções matemáticas

int main() {
  double x = 4.0;
  double resultado = sqrt(x); // chama a função sqrt() da biblioteca math.h
  printf("A raiz quadrada de %lf é %lf.\n", x, resultado); // chama a função printf() da biblioteca stdio.h
  return 0;
}
```

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu

