//Cálculo da média

include <Arduino.h>

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    float nota1, nota2, nota3, media = 0;

    Serial.print("Informe a nota 1: ");
  	while(Serial.available() == 0){}
  	nota1 = Serial.parseFloat();
  	Serial.println(nota1);

    Serial.print("Informe a nota 2: ");
  	while(Serial.available() == 0){}
  	nota2 = Serial.parseFloat();
  	Serial.println(nota2);
  
  	Serial.print("Informe a nota 3: ");
    while(Serial.available() == 0){}
    nota3 = Serial.parseFloat();
    Serial.println(nota3);
	
  	media = (nota1+nota2+nota3)/3;
  
  	Serial.println(media);
    if(media >= 7){
      Serial.println("Aprovado");
    }else{
      Serial.println("Reprovado");
    }
}