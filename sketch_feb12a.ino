
int morseA [] =    {0,1,-1};
int morseB [] =    {1,0,0,0,-1};
int morseC [] =    {1,0,1,0,-1};
int morseD [] =    {1,0,0,-1};
int morseE [] =    {0,-1};
int morseF [] =    {0,0,1,0,-1};
int morseG [] =    {1,1,0,-1};
int morseH [] =    {0,0,0,0,-1};
int morseI [] =    {0,0,-1};
int morseJ [] =    {0,1,1,1,-1};
int morseK [] =    {1,0,1,-1};
int morseL [] =    {0,1,0,0,-1};
int morseM [] =    {1,1,-1};
int morseN [] =    {1,0,-1};
int morseO [] =    {1,1,1,-1};
int morseP [] =    {0,1,1,0,-1};
int morseQ [] =    {1,1,0,1,-1};
int morseR [] =    {0,1,0,-1};
int morseS [] =    {0,0,0,-1};
int morseT [] =    {1,-1};
int morseU [] =    {0,0,1,-1};
int morseV [] =    {0,0,0,1,-1};
int morseW [] =    {0,1,1,-1};
int morseX [] =    {1,0,0,1,-1};
int morseY [] =    {1,0,1,1,-1};
int morseZ [] =    {1,1,0,0,-1};
int morse1 [] =    {0,1,1,1,1,-1};
int morse2 [] =    {0,0,1,1,1,-1};
int morse3 [] =    {0,0,0,1,1,-1};
int morse4 [] =    {0,0,0,0,1,-1};
int morse5 [] =    {0,0,0,0,0,-1};
int morse6 [] =    {1,0,0,0,0,-1};
int morse7 [] =    {1,1,0,0,0,-1};
int morse8 [] =    {1,1,1,0,0,-1};
int morse9 [] =    {1,1,1,1,0,-1};
int morse0 [] =    {1,1,1,1,1,-1};
int LED=9;

void setup() {
  // put your setup code here, to run once:
  /* Change LED_BUILTIN to pin #*/
  Serial.begin(9600);
  Serial.println("Enter LED pin number");
  // LED = Serial.parseInt(); USER CHOOSE
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0){
    char tempChar=Serial.read();
    switch(toupper(tempChar)){
      case 'A':
        enCode(morseA);
        break;
      case 'B':
        enCode(morseB);
        break;
      case 'C':
        enCode(morseC);
        break;
      case 'D':
        enCode(morseD);
        break;
      case 'E':
        enCode(morseE);
        break;
      case 'F':
        enCode(morseF);
        break;
      case 'G':
        enCode(morseG);
        break;
      case 'H':
        enCode(morseH);
        break;
      case 'I':
        enCode(morseI);
        break;
      case 'J':
        enCode(morseJ);
        break;
      case 'K':
        enCode(morseK);
        break;
      case 'L':
        enCode(morseL);
        break;
      case 'M':
        enCode(morseM);
        break;
      case 'N':
        enCode(morseN);
        break;
      case 'O':
        enCode(morseO);
        break;
      case 'P':
        enCode(morseP);
        break;
      case 'Q':
        enCode(morseQ);
        break;
      case 'R':
        enCode(morseR);
        break;
      case 'S':
        enCode(morseS);
        break;
      case 'T':
        enCode(morseT);
        break;
      case 'U':
        enCode(morseU);
        break;
      case 'V':
        enCode(morseV);
        break;
      case 'W':
        enCode(morseW);
        break;
      case 'X':
        enCode(morseX);
        break;
      case 'Y':
        enCode(morseY);
        break;
      case 'Z':
        enCode(morseZ);
        break;
      case '1':
        enCode(morse1);
        break;
      case '2':
        enCode(morse2);
        break;
      case '3':
        enCode(morse3);
        break;
      case '4':
        enCode(morse4);
        break;
      case '5':
        enCode(morse5);
        break;
      case '6':
        enCode(morse6);
        break;
      case '7':
        enCode(morse7);
        break;
      case '8':
        enCode(morse8);
        break;
      case '9':
        enCode(morse9);
        break;
      case '0':
        enCode(morse0);
        break;
      case ' ':
        delay(DURATION_WORDS);
        break;
      
    }


    
  }

  
}

void enCode(int code []){
  int i=0;
  while(code[i]!=-1){
    if(code[i]==1){
      digitalWrite(LED,HIGH);
      delay(DURATION_DASH);
      digitalWrite(LED,LOW);
      delay(DURATION_PARTS);
    }else if(code[i]==0){
      digitalWrite(LED,HIGH);
      delay(DURATION_DOT);
      digitalWrite(LED,LOW);
      delay(DURATION_PARTS);
    }
  }
  delay(DURATION_LETTER);
}

