## Estrutura básica de um programa em C - tópico 2
**Declaração de função principal**

A declaração da função principal **(main)** é uma parte fundamental da linguagem de programação C. É através dela que o programa começa a ser executado. A função main() é o ponto de entrada para a execução do programa em C.

Aqui está um exemplo de como a declaração da função main() é escrita em C:

```c
#include <stdio.h>

int main() {
    printf("Hello, world!");
    return 0;
}
```

O trecho acima inclui a biblioteca "stdio.h", que é necessária para imprimir texto na tela usando a função printf(). Em seguida, declara-se a função main() com um tipo de retorno **"int"**, que significa que a função retornará um **inteiro**.

Dentro da função main(), o código "printf("Hello, world!");" é usado para imprimir o texto "Hello, world!" na tela. O comando "return 0;" é usado para indicar que o programa foi executado com sucesso.

A função main() sempre deve retornar um valor inteiro. O valor retornado pelo programa é usado como um código de retorno para indicar se o programa foi executado com sucesso ou não. Um valor de retorno de 0 indica que o programa foi executado com sucesso.

Se houver algum erro ou problema no programa, você pode retornar um valor diferente de 0 para indicar que ocorreu um erro. Por exemplo, um valor de retorno de 1 pode indicar que ocorreu um erro no programa.

Em resumo, a declaração da função main() é uma parte fundamental da linguagem de programação C. É a partir dela que o programa começa a ser executado. A função main() deve retornar um valor inteiro e pode ser usada para imprimir texto na tela, bem como executar outras funções e comandos em C.

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu

