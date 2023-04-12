## Controle de fluxo (condicionais e loops) - tópico 5
**Estrutura de Repetição (while)**


**Exemplo de código onde um while é incluído**

```c
// Faça um algoritmo que leia vários números e imprima o dobro deles.
// Pare a repetição quando o usuário digitar -1

#include <stdio.h>

int main(void) {
  double fatorial = 1, numero = 15;
  
    while(numero >= 1){
      fatorial = fatorial * numero;
      numero = numero - 1;
      printf("\n\nFatorial = %2.f",fatorial);
    }
  
    printf("\nFatorial = %2.f", fatorial);
    
  return 0;
}
```

**Outro Exemplo**

```c
// Faça um algoritmo em que se possa digitar uma quantidade indefinida de notas, até que seja digitado 99.
// Some as notas digitadas e mantenha um contador para saber quantas notas foram somadas. Ao fim do programa, calcule a média

#include <stdio.h>

int main(){
  float nota=0, numNotas=0, soma=0, media;

  while(1){
    printf("Digite uma nota: ");
    scanf("%f",&nota);
    if(nota==99){
      break;
    }
    
    soma = soma + nota;
    numNotas = numNotas + 1;
  }
  
    media = soma / numNotas;
    printf("Media: %.1f: ", media);
  
  return(0);
}
```


Ficou claro?


Sugiro que você faça pesquisas por conta, para seu próprio entendimento. @henriquegnu
