//Crie um sistema que bote um nome na linha de cima da serial e troque os dois da linha de baixo.

#include <LiquidCrystal.h>
//importa lib


LiquidCrystal lcd(13,12,5,4,3,2);
//portas utilizadas para fazer comunicação com a placa serial



void setup()
{
	lcd.begin(16,2);//numéro de colucas e linhas respectivamente
  	lcd.clear();
  	Serial.begin(115200);
}

void loop()
{
  	int valor = 0;
  	
  	lcd.setCursor(0,0);
  	lcd.print("HENRIQUE BRAGA");
  	lcd.setCursor(0,1);
 	lcd.print("IFSC-TUB"); //printa a primeira frase do loop
  	delay(2000); //tempo para mudar oque está escrito
  	lcd.clear();
  	
  	lcd.setCursor(0,0); //posição onde será feito
  	lcd.print("HENRIQUE BRAGA"); //printa o nome
  	lcd.setCursor(0,1);
  	lcd.print("PROG SIST. EMB."); //printa a segunda frase do loop
  	delay(2000); //tempo para mudar oque está escrito
  	lcd.clear();
}
