#include <LiquidCrystal.h>

// numero casuale dove comparirà il PiGreco
int casualePiGreco = random (0,4);

// inizializzo i componenti
int btnRecord;
int btnStart;
int btn0;
int btn1;
int btn2;
int btn3;
int btn4;

// led lcd 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


// vite e punti

int vite;
int punti;


// record 

int record;

// aumento la difficoltà

int durataTempo;

void setup() {
  // put your setup code here, to run once:

  // set up del lcd del numero di colonne e di righe:
  lcd.begin(16, 2);

  vite = 4 ;
  punti = 0;
  record = 0;
  durataTempo = 5000;

  // input 

  pinMode(btnRecord,INPUT);
  pinMode(btnStart,INPUT);
  pinMode(btn0,INPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);

  // output 
    
  

}

void loop() {
  // put your main code here, to run repeatedly:
  while (vite > 0)
{
  
  if (digitalRead(btnStart) == HIGH){
    
    // Print le vite ed i punti
    lcd.print("vite:" + vite + "Punti:" + punti);

    if(casualePiGreco == 0)
    {
      
    }
    
    
    
    
    
    
    }
    

    

    
    
    }
    else if (digitalRead(btnRecord) == HIGH){
      return "";
    }

}
