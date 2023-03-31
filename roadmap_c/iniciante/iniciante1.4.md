## Estrutura básica de um programa em C - tópico 4

**Sintaxe da função principal (tipo de retorno e argumentos)**

A sintaxe da função principal em linguagem C é bastante simples. A função principal é a função que é executada primeiro quando um programa C é executado e é obrigatória em todos os programas C.

Aqui está a sintaxe da função principal em C:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // corpo da função principal
    return 0;
}
```

Explicando a sintaxe, temos:

int é o tipo de retorno da função principal. Em geral, o valor de retorno da função principal é 0 para indicar que o programa foi executado com sucesso, mas isso pode variar de acordo com a necessidade do programa.

main é o nome da função principal. Todas as funções em C têm um nome, e a função principal é chamada de "main".

int argc e char *argv[] são os argumentos da função principal. argc é um inteiro que representa o número de argumentos passados para o programa na linha de comando, e argv é um array de strings que contém os argumentos propriamente ditos.

O corpo da função principal é colocado entre as chaves { }. Este é o código que será executado quando o programa for executado.

A função principal geralmente termina com a instrução return 0;. Isso indica que o programa foi executado com sucesso.

Vamos agora ver exemplos mais elaborados para ilustrar como esses conceitos funcionam na prática.

Exemplo 1: Função principal com argumentos de linha de comando

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    printf("Número de argumentos: %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    return 0;
}
```

Neste exemplo, a função principal recebe argumentos da linha de comando e os imprime na tela. O primeiro argumento sempre é o nome do programa em si, e os argumentos adicionais são fornecidos pelo usuário. O programa usa um loop para iterar sobre os argumentos e imprimir cada um na tela, juntamente com seu índice.

Exemplo 2: Função principal com funções adicionais

```c
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    int x = 10;
    int y = 5;
    int resultado;

    resultado = soma(x, y);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

Neste exemplo, a função principal chama uma função adicional chamada soma() para calcular a soma de dois números. O resultado é armazenado em uma variável chamada resultado e impresso na tela. Isso demonstra como a função principal pode chamar outras funções para realizar tarefas específicas. Note que a função soma() é definida antes da função principal.

Espero que esses exemplos tenham ajudado a ilustrar como a sintaxe da função principal funciona na prática. Qualquer dúvida, estou à disposição para ajudar!

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
