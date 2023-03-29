## Estrutura básica de um programa em C - tópico 6
**Estrutura de decisão com testes compostos**

A estrutura de decisão em C permite que um programa tome decisões com base em condições. Os testes compostos são usados quando há mais de uma condição que precisa ser avaliada. Em outras palavras, um teste composto é um teste que consiste em duas ou mais condições lógicas combinadas por operadores lógicos.

Aqui está um exemplo de código usando uma estrutura de decisão com testes compostos em C:

```c
#include <stdio.h>

int main() {
   int num;

   printf("Digite um número: ");
   scanf("%d", &num);

   if (num >= 0 && num <= 10)
      printf("O número digitado está entre 0 e 10.\n");
   else if (num > 10 && num <= 20)
      printf("O número digitado está entre 11 e 20.\n");
   else if (num > 20 && num <= 30)
      printf("O número digitado está entre 21 e 30.\n");
   else
      printf("O número digitado é maior que 30 ou menor que 0.\n");

   return 0;
}
```

Neste exemplo, o programa avalia a variável "num" usando um teste composto e exibe mensagens diferentes dependendo do valor digitado pelo usuário.

**Outra exemplo** maneira de combinar múltiplas condições em um teste composto é usando o operador "||", que significa "ou".

Aqui está um exemplo de código usando uma estrutura de decisão com testes compostos utilizando o operador "||" em C:

```c
#include <stdio.h>

int main() {
   int num;

   printf("Digite um número: ");
   scanf("%d", &num);

   if (num < 0 || num > 100) {
      printf("O número digitado está fora do intervalo válido.\n");
   }
   else {
      printf("O número digitado está dentro do intervalo válido.\n");
   }

   return 0;
}
```

Neste exemplo, o programa avalia a variável "num" usando um teste composto com o operador "||" e exibe uma mensagem diferente dependendo do valor digitado pelo usuário.

Se o número digitado pelo usuário for menor que 0 ou maior que 100, o programa exibirá a mensagem "O número digitado está fora do intervalo válido." Caso contrário, se o número digitado pelo usuário estiver entre 0 e 100, o programa exibirá a mensagem "O número digitado está dentro do intervalo válido."

Esse exemplo é simples e demonstra como o operador "||" pode ser usado em testes compostos para avaliar múltiplas condições. É importante notar que, nesse caso, a condição dentro do "if" é avaliada como verdadeira se qualquer uma das condições dentro do teste composto for verdadeira.

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
