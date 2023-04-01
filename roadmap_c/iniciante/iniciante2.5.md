## Variáveis e constantes - tópico 3

**Declaração de variáveis**

Linguagem de programação em C, declaramos variáveis em uma das etapas fundamentais para a criação de um programa. Uma variável é um espaço na memória do computador destinado a armazenar um valor específico, que pode ser um número inteiro, um número com ponto flutuante, um caractere, um valor lógico (booleano), como vimos no Tópico 2 (tipos de dados básicos).

Para declarar uma variável em C, é necessário **primeiro** definir o seu tipo e dar um nome a ela (variável). Existem diversos tipos de dados básicos em C, como int (inteiros), float e double (ponto flutuante), char (caracteres) e bool (valores lógicos booleanos 0 ou 1).

Por exemplo, para declarar uma variável do tipo int chamada "idade", seria isso:

```c
int idade; //variável declara, sem dados dentro, normalmente utilizada para receber o dado
```

Onde "int" é o tipo de dado e "idade" é o nome dado à variável.

Para atribuir um valor a essa variável, podemos utilizar o operador de atribuição "=", como no exemplo a seguir:

```c
idade = 30; //variável declara, com dados (30) dentro
```

Podemos também fazer a declaração e atribuição na mesma linha, exemplo abaixo:

```c
int idade = 30;
```

Para variáveis do tipo booleano, utilizamos o tipo de dado "bool". Ele pode assumir apenas dois valores: true (verdadeiro) ou false (falso). Código abaixo:

```c
bool resultado = true;
```

Caso queira você também poderá utilizar operadores lógicos para atribuir valores booleanos, abaixo:

```c
bool resultado = (10 > 5); //resultado será true
```

No final das contas, declaramos variáveis em C de forma que precisamos definir o tipo de dado e do nome da variável. É importante escolher um nome com sentido para a variável, que ajude a entender o seu propósito no código. 

Ficou claro?

Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
