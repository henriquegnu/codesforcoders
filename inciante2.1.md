## Tipos de dados básicos - tópico 2
**Inteiros (int)**


O tipo inteiro, conhecido como int em C consegue funcionar em um intervalo de -32.768 e 32.767.

**Exemplo de código onde um dado do tipo int é incluído**

```c
#include <stdio.h>

int main() {
    int num; //declara as varíaveis, no caso, um número do tipo inteiro, com o nome de "num".
    
    printf("Digite um numero inteiro: "); //printa uma mensagem para ser feito um input
    scanf("%d", &num); //coleta o input na varíavel
    
    printf("O numero digitado foi: %d", num); // printa o input com o tipo %d, que é inteiro.
    
    return 0; //finaliza o código
}
```

Ficou claro?


Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
