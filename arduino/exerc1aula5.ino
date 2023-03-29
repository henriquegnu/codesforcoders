//Crie um sistema que bote dois nomes na serial e troque eles 

#include <LiquidCrystal.h>
//importa lib


LiquidCrystal lcd(13,12,5,4,3,2);
//portas utilizadas para fazer comunicação com a placa serial



void setup()
{
	
}

void loop()
{
 	lcd.begin(16,2); //numéro de colucas e linhas respectivamente
  	lcd.setCursor(0,0); //posição onde será feito
  	lcd.print("HENRIQUE BRAGA"); //printa o nome
  
  
  	lcd.setCursor(0,1); //indica a posição
  	lcd.print("IFSC-TUB"); //printa a primeira frase do loop
	delay(2000); //tempo para mudar oque está escrito
  	lcd.clear();
  
  	lcd.setCursor(0,2); //indica a posição
  	lcd.print("PROG SIST. EMB."); //printa a segunda frase do loop
  	delay(2000); //tempo para mudar oque está escrito
}
