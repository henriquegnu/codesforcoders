## Tipos de dados básicos - tópico 2

**Caracteres (char)**

O tipo de dado **char** é utilizado para armazenar **caracteres individuais**, como letras, números, sinais de pontuação, entre outros. Em C, cada caractere é armazenado em um byte de memória, permitindo a representação de até 256 caracteres diferentes.

**Exemplo de código onde um dado do tipo char é incluído**

```c
#include <stdio.h>

int main() {
    char letra; //declara a variável do tipo char, com o nome de "letra".
    
    printf("Digite uma letra: "); //printa uma mensagem para ser feito um input
    scanf("%c", &letra); //coleta o input na variável
    
    printf("A letra digitada foi: %c", letra); // printa o input com o tipo %c, que é caractere.
    
    return 0; //finaliza o código
}
```

É importante notar que, ao utilizar a função scanf para coletar um caractere, é necessário incluir um espaço antes do especificador de formato (%c), para que o programa consiga capturar o caractere corretamente.

Além disso, é possível realizar operações matemáticas com caracteres, já que a linguagem C utiliza a tabela ASCII para representá-los. Por exemplo, ao somar um caractere com um número inteiro, o resultado será o caractere que estiver na posição correspondente à soma dos valores na tabela ASCII.

Ficou claro?

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
