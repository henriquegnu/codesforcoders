## Tipos de dados básicos - tópico 2

**Booleanos (bool)**

O tipo de dado **bool** é utilizado para representar valores **verdadeiros ou falsos (0 ou 1)**. Em C, o tipo bool é definido como um tipo inteiro de tamanho 1 byte, sendo capaz de armazenar apenas dois valores: **0 (falso) ou 1 (verdadeiro)**.

**Exemplo de código onde um dado do tipo bool é incluído:**

```c
#include <stdio.h>
#include <stdbool.h> //essa é biblioteca necessária para usar o dado tipo bool

int main() {
    bool variavel; //declara a variável do tipo bool, com o nome de "variavel".
    
    printf("Digite 0 para falso ou 1 para verdadeiro: "); //printa uma mensagem para ser feito um input
    scanf("%d", &variavel); //coleta o input na variável, perceba o %d, que é igual ao utilizado no tipo de dado int
    
    printf("O valor digitado foi: %d", variavel); //printa o input com o tipo %d, que é inteiro, mas representa um valor booleano
    
    return 0; //finaliza o código
}
```

Podemos usar também operadores lógicos como AND (&&), OR (||) e NOT (!) **(Falaremos deles logo)** realizando comparações e tomada de decisões baseado em valores booleanos.

```c
#include <stdio.h>
#include <stdbool.h> //inclui a biblioteca necessária para utilizar o tipo bool

int main() {
    bool variavel1 = true; //declara a primeira variável bool, com o nome de "variavel1", e atribui o valor verdadeiro (true) a ela.
    bool variavel2 = false; //declara a segunda variável bool, com o nome de "variavel2", e atribui o valor falso (false) a ela.
    
    if (variavel1 && variavel2) { //verifica se ambas as variáveis são verdadeiras
        printf("As duas variaveis sao verdadeiras.");
    } else if (variavel1 || variavel2) { //verifica se ao menos uma das variáveis é verdadeira
        printf("Ao menos uma das variaveis e verdadeira.");
    } else { //caso nenhuma das condições acima seja atendida
        printf("Nenhuma das variaveis e verdadeira.");
    }
    
    return 0; //finaliza o código
}
```


Ficou claro?

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
