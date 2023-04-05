## Controle de fluxo (condicionais e loops) - tópico 5
**Estrutura de Repetição (for)**


**Exemplo de código onde um for é incluído**

```c
#include <stdio.h>

int main(void){
  int contador;     //declara o "contador" como varíavel int
  
  for(contador = 0; contador <= 10; contador++)     //sintaxe: for(inicialização, condição, iteração) {faça isso com o código}
  {
    printf("%d ", contador);        //printa o resultado encontrado no laço for
  }

  return(0);        //finaliza o programa
}
```

Outro exemplo seria o de um balanço trimestral da empresa, onde criamos esse exemplo que repete a capturação de dados mensais, segue exemplo abaixo:

```c
#include <stdio.h>

int main(void){
  float receita, despesa, balanco=0;
  
  for(int i=0;i<3;i++){
    printf("\nDigite a receita do mês: ");
    scanf("%f",&receita);

    printf("Digite a despesa do mês: ");
    scanf("%f",&despesa);

    balanco=balanco+(receita-despesa);
    
    printf("Balanco mensal: %.2f\n",balanco);
  }

  printf("\n\nBalanco trimestral: %.2f",balanco);

  return(0);
}
```



Ficou claro?


Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
