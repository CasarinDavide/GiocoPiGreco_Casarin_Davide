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


// vite e punti

int vite;
int punti;


// record 

int record;

// aumento la difficoltà

int durataTempo;

void setup() {
  // put your setup code here, to run once:

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

  if (digitalRead(btnStart) == HIGH){
    

    
    
    }
    else if (digitalRead(btnRecord) == HIGH){
      return "";
    }

}
