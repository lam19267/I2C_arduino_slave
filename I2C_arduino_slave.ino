// Declaración de puertos y variables

// Pushbottons para player1
int PBP1_UP    = 2;     // up
int PBP1_DOWN  = 3;     // down
int PBP1_RIGHT = 4;     // derecha
int PBP1_LEFT  = 5;     // izquierda
int PBP1_SHOOT = 6;     // bomba
int valP1;              //
int valP2;              //
int valP3;              //
int valP4;              //
int valP5;              //

// Pushbottons para player2
int PBP2_UP    = 7;     // up
int PBP2_DOWN  = 8;     // down
int PBP2_RIGHT = 9;     // derecha
int PBP2_LEFT  = 10;    // izquierda
int PBP2_SHOOT = 11;    // bomba
int valP6;
int valP7;
int valP8;
int valP9;
int valP10;

// Buzzer para efectos de sonido
int buzz = A0;

void setup() {
  // initialize both serial ports:
  Serial.begin(9600);

pinMode(PBP1_UP   , INPUT_PULLUP);
pinMode(PBP1_DOWN , INPUT_PULLUP);
pinMode(PBP1_RIGHT, INPUT_PULLUP);
pinMode(PBP1_LEFT , INPUT_PULLUP);
pinMode(PBP1_SHOOT, INPUT_PULLUP);
pinMode(PBP2_UP   , INPUT_PULLUP);
pinMode(PBP2_DOWN , INPUT_PULLUP);
pinMode(PBP2_RIGHT, INPUT_PULLUP);
pinMode(PBP2_LEFT , INPUT_PULLUP);
pinMode(PBP2_SHOOT, INPUT_PULLUP);
pinMode(buzz      , OUTPUT);

}

void loop() {
  // read from port 1, send to port 0:
  delay(500);

// Variables que leen PBS de player1
  valP1 = digitalRead(PBP1_UP);
  valP2 = digitalRead(PBP1_DOWN);
  valP3 = digitalRead(PBP1_RIGHT);
  valP4 = digitalRead(PBP1_LEFT);
  valP5 = digitalRead(PBP1_SHOOT);

// Variables que leen PBS de player2
  valP6  = digitalRead(PBP2_UP);
  valP7  = digitalRead(PBP2_DOWN);
  valP8  = digitalRead(PBP2_RIGHT);
  valP9  = digitalRead(PBP2_LEFT);
  valP10 = digitalRead(PBP2_SHOOT);

  if (valP1 == 0) {
    Serial.write("0");
  }

  if (valP2 == 0) {
    Serial.write("1");
  }

  if (valP3 == 0) {
    Serial.write("2");
  }

  if (valP4 == 0) {
    Serial.write("3");
  }

  if (valP5 == 0) {
    Serial.write("4");
  }
  if (valP6 == 0) {
    Serial.write("5");
  }

  if (valP7 == 0) {
    Serial.write("6");
  }

  if (valP8 == 0) {
    Serial.write("7");
  }

  if (valP9 == 0) {
    Serial.write("8");
  }

  if (valP10 == 0) {
    Serial.write("9");
  }
}
