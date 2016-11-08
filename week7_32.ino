int currentBrightness;
int lastBrightness ;
int B=255;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int UP = digitalRead(13);
  int DOWN = digitalRead(5);



  if (millis() % 3000 == 0) {

    if (0 < B < 255) {
      B=0;
    } else {
      B=lastBrightness;
    }
    analogWrite(10, B);

    delay(1);
  }
}
/*
  if (UP == 0) {

    B += 5;
  
  }


  if (DOWN == 0) {
    B -= 5;
  }

  B = lastBrightness;
  //Serial.println(UP);
    Serial.println(B);
}
/*
