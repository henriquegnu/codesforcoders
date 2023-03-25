//ainda em desenvolvimento
//cálculo, segunda lei de Ohm

#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
  
float p, R, L, A;
  
  //R significa: Resistência Elétrica
  //p significa: Resistividade do cobre (em ohm metro)
  //L significa: Comprimento do fio (em metros)
  //A significa: Área da seção transversal do fio (em metros quadrados).
  
    printf("Diga qual a resistividade do cobre:\n",p);
    scanf("%f",&p);

    printf("Diga qual o comprimento do fio (em metros):\n",L);
    scanf("%f",&L);

    printf("Área da seção transversal do fio (em metros quadrados):\n",A);
    scanf("%f",&A);

    //operação que será feita
    R = (p * L) / A;
  
    //printa o valor da operação
    printf("A Resistência Elétrica é igual a:%.2f A\n",R);
}
