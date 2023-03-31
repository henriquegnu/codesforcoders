## Tipos de dados básicos - tópico 2

**Ponto flutuante (float e double)**

**Float:** armazena números com ponto flutuante (reais) com precisão simples. **Double:** armazena números com ponto flutuante, com precisão dupla, ou seja normalmente possui o dobro da capacidade de uma variável do tipo float.

**Exemplo de código onde um dado do tipo float é incluído**

```c
#include <stdio.h>

int main() {
    float num; //declara as varíaveis, no caso, um número do tipo float, com o nome de "num".
    
    printf("Digite um numero float: "); //printa uma mensagem para ser feito um input
    scanf("%f", &num); //coleta o input na varíavel
    
    printf("O numero digitado foi: %.2f", num); // printa o input com o tipo %.2f que é float e utiliza apenas duas casas decimais.
    
    return 0; //finaliza o código
}
```

**Exemplo de código onde um dado do tipo float é incluído**

```c
#include <stdio.h>

int main() {
    double num; //declara as variáveis, no caso, um número do tipo double, com o nome de "num".
    
    printf("Digite um numero double: "); //printa uma mensagem para ser feito um input
    scanf("%lf", &num); //coleta o input na variável
    
    printf("O numero digitado foi: %.2lf", num); // printa o input com o tipo %.2lf que é double e utiliza apenas duas casas decimais.
    
    return 0; //finaliza o código
}
```

**Resumindo:**

**Float** é mais utilizado em situações em que não precisamos tanto de precisão e/ou precisamos otimizar o tempo, o **Double** é utilizado já em casos como: mercado financeiro, cálculos de alta precisão etc. Outra questão é que o tipo **Float** consegue armazenar de 6 a 7 dígitos significativos e o amigo dele o **Double** até 15-16 dígitos significativos.


Ficou claro?

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
