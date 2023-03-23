//Calcula a corrente elétrica utilizando a operação I = V*R

#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
  
float V, R, I;
  //V significa: Tensão ou Potência Elétrica
  //R significa: Resistência Elétrica
  //I significa: Corrente elétrica
  
    printf("Diga qual a Potência Elétrica:\n",V);
    scanf("%f",&V);

    printf("Diga qual a Resistência Elétrica:\n",R);
    scanf("%f",&R);

    //operação que será feita
    I = V/R;
  
    //printa o valor da operação
    printf("A corrente elétrica é igual a: %.2f A\n",I);
}
