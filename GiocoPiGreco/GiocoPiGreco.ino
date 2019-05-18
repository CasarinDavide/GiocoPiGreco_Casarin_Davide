#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16 , 2); 

// numero casuale dove comparirà il PiGreco
int casualePiGreco = random (0,4);

byte Cuore[8] = {
        B00000,
        B01010,
        B11111,
        B11111,
        B11111,
        B01110,
        B00100,
        B00000
};

byte Omega[8] = {
        B00000,
        B01110,
        B10001,
        B10001,
        B10001,
        B01010,
        B11011,
        B00000
};


// inizializzo i componenti
int btnRecord;
int btnStart;
int btn0;
int btn1;
int btn2;
int btn3;
int btn4;

//componenti led lcd 

int rs; 
int en; 
int d4; 
int d5; 
int d6; 
int d7;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


// vite e punti

int vite;
int punti;


// record 

int record;

// aumento la difficoltà

int durataTempo;
int TempoPassato;

void setup() {
  
  // put your setup code here, to run once:
  
  btnRecord = 0;
  btnStart = 1;
  btn0 = 3;
  btn1 = 4;
  btn2 = 5;
  btn3 = 6 ;
  btn4 = 7;
  vite = 4 ;
  punti = 0;
  record = 0;
  durataTempo = 5000;
  TempoPassato = 0;

  //lcd 
  rs = 13; 
  en = 12; 
  d4 = 11; 
  d5 = 10; 
  d6 = 9; 
  d7 = 8;
  lcd.init();
  lcd.backlight();

  // input 

  pinMode(btnRecord,INPUT);
  pinMode(btnStart,INPUT);
  pinMode(btn0,INPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
  
   //set up the LCD's number of columns and rows:
   lcd.begin(16, 2);
   //Print a message to the LCD.
   lcd.print("hello, world!");
    


  

}

void loop() {
  // put your main code here, to run repeatedly:

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  if (btnStart == HIGH)
  {
    
    

    


  
 
  }


void InserisciPiGrecO(int btn, casualePiGreco)
{
  while (TempoPassato <= durataTempo)
  {
   TempoPassato = 0 ;
   TempoPassato++;
   lcd.setCursor(1, casualePiGreco);
  
      lcd-.print("P");
      
      if(btn != btn0 && digitalRead(btn0) == HIGH && casualePiGreco == 0 ||btn != btn1 && digitalRead(btn1) == HIGH && casualePiGreco == 1 ||btn != btn2 && digitalRead(btn2) == HIGH && casualePiGreco == 2 ||btn != btn3 && digitalRead(btn3) == HIGH && casualePiGreco == 3 ||btn != btn4 && digitalRead(btn4) == HIGH && casualePiGreco == 4 )
      {
        durataTempo = durataTempo - 100;
        punti++; 
      }
      else
      {
        vite--;
        
      }

  }
  if(TempoPassato > durataTempo)
  {
    vite--;
  }
}
