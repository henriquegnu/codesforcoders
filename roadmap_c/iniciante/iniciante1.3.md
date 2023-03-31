## Estrutura básica de um programa em C - tópico 3
**Instruções de entrada e saída (scanf, printf)**

Abaixo veremos instruções de entrada e saída em C! Essas instruções nos permitem ler e imprimir dados em um programa.

A primeira instrução é a scanf, que é usada para ler dados de entrada, como do teclado. Para usar a scanf, precisamos declarar a variável em que o valor lido será armazenado e informar o tipo de dado que estamos lendo.

Por exemplo, se quisermos ler um número inteiro digitado pelo usuário, podemos escrever o seguinte código:

```c

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("O numero digitado foi: %d", numero);
    
    return 0;
}

```
Na primeira linha, estamos incluindo a biblioteca de entrada e saída padrão. Em seguida, declaramos uma variável inteira chamada "numero". Depois, usamos a função printf para imprimir uma mensagem na tela pedindo para o usuário digitar um número inteiro.

Em seguida, usamos a função scanf para ler o número digitado pelo usuário e armazená-lo na variável "numero". Observe que estamos usando o símbolo "&" antes do nome da variável "numero" para informar o endereço de memória da variável para a função scanf.

Por fim, usamos a função printf novamente para imprimir o número que foi digitado pelo usuário.

A segunda instrução é a printf, que é usada para imprimir dados na tela ou em um arquivo de saída. Para usar a printf, precisamos informar o tipo de dado que estamos imprimindo e o valor que queremos imprimir.

Por exemplo, se quisermos imprimir uma mensagem de boas-vindas na tela, podemos escrever o seguinte código:

```c

#include <stdio.h>

int main() {
    printf("Bem-vindo ao mundo da programação em C!");
    
    return 0;
}

```
Neste exemplo, estamos usando a função printf para imprimir uma mensagem na tela. Observe que não precisamos informar nenhum valor depois da mensagem porque estamos apenas imprimindo um texto.

Com essas duas instruções, podemos ler e imprimir dados em nossos programas em C. Espero que isso tenha sido útil para você começar a aprender sobre a linguagem C!

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu

