
/* LINGUAGEM C */

#include <LiquidCrystal.h> // carrega a biblioteca do display LCD.
#define Luz_Fundo  4 // informa pino da luz de fundo.
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // informa os pinos de conexão.

void setup() 
{  
    lcd.begin(16, 2); // informa o tamanho do display.
    pinMode(Luz_Fundo, OUTPUT); // define este como pino de saida.
    digitalWrite(Luz_Fundo, HIGH); // libera energia para acender o display.
    Serial.begin(9600); // abre a serial na velocidade 9600.
}

void loop()  
{
    String palavra = "";
    while(Serial.available() > 0) // enquanto a serial tiver linha não-vazia. 
        palavra = Serial.readStringUntil('\n'); // lê a linha da serial.

    if (palavra != ""){ // verifica se não é uma string vazia.
        lcd.clear(); // apaga strings do display.
        lcd.setCursor(0,0); // move cursor para a posição 0x0.
        lcd.print(palavra); // imprime string no display.
    }
}


