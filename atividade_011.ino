#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
 	lcd.begin(16, 2);
}

void loop()
{
  int n = 10, t1 = 0, t2 = 1, proximoTermo = 0;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SEQ. FIBONACCI");
  
  for (int i = 1; i <= n; ++i) {
        if (i == 1) {
          lcd.setCursor(i-1, 1);
          lcd.print(t1);
          delay(3000);
            continue;
        }
        if (i == 2) {
          lcd.setCursor(i-1, 1);
          lcd.print(t2);
          delay(3000);
            continue;
        }
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    	
    	if(i == 9){
          	lcd.setCursor(i, 1);
        	lcd.print(proximoTermo);
        	delay(3000);
        }
    	else if(i == 10){
    		lcd.setCursor(i+1 , 1);
        	lcd.print(proximoTermo);
        	delay(3000);
        }
    	else{
    		lcd.setCursor(i-1, 1);
        	lcd.print(proximoTermo);
        	delay(3000);
        }
    }
}