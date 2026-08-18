// ============================================
// SMART SAFETY MONITORING SYSTEM
// ============================================

// ---------- Sensors ----------
const int gasPin = A0;
const int tempPin = A1;

// ---------- Ultrasonic ----------
const int trigPin = 9;
const int echoPin = 10;

// ---------- LEDs ----------
const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;

// ---------- Buzzer ----------
const int buzzer = 6;

// ---------- Safety Thresholds ----------
const int GAS_THRESHOLD = 300;
const float TEMP_THRESHOLD = 35.0;
const float DISTANCE_THRESHOLD = 15.0;

// ---------- Blinking ----------
unsigned long previousMillis = 0;
const unsigned long blinkInterval = 500;
bool blinkState = false;


// ============================================
// SETUP
// ============================================

void setup() {

  Serial.begin(9600);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Start with SAFE condition
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  noTone(buzzer);

  Serial.println("======================================");
  Serial.println("   SMART SAFETY MONITORING SYSTEM");
  Serial.println("======================================");
}


// ============================================
// LOOP
// ============================================

void loop() {

  // ------------------------------------------
  // GAS SENSOR
  // ------------------------------------------

  int gasValue = analogRead(gasPin);


  // ------------------------------------------
  // TEMPERATURE SENSOR - TMP36
  // ------------------------------------------

  int tempReading = analogRead(tempPin);

  float voltage = tempReading * (5.0 / 1024.0);

  float temperature = (voltage - 0.5) * 100.0;


  // ------------------------------------------
  // ULTRASONIC SENSOR
  // ------------------------------------------

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  float distance = duration * 0.0343 / 2.0;


  // ------------------------------------------
  // DISPLAY SENSOR VALUES
  // ------------------------------------------

  Serial.print("Gas: ");
  Serial.print(gasValue);

  Serial.print(" | Temperature: ");
  Serial.print(temperature);
  Serial.print(" C");

  Serial.print(" | Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  // ==========================================
  // GAS LEAK DETECTED
  // ==========================================

  if (gasValue > GAS_THRESHOLD) {

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);

    tone(buzzer, 1000);

    Serial.println("STATUS : GAS LEAK DETECTED");

    blinkLED(redLED);
  }


  // ==========================================
  // HIGH TEMPERATURE
  // ==========================================

  else if (temperature > TEMP_THRESHOLD) {

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);

    tone(buzzer, 800);

    Serial.println("STATUS : HIGH TEMPERATURE");

    blinkLED(yellowLED);
  }


  // ==========================================
  // OBJECT DETECTED
  // ==========================================

  else if (distance > 0 && distance < DISTANCE_THRESHOLD) {

    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);

    tone(buzzer, 1200);

    Serial.println("STATUS : OBJECT DETECTED");

    blinkLED(redLED);
  }


  // ==========================================
  // SAFE
  // ==========================================

  else {

    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    noTone(buzzer);

    // Reset blinking
    blinkState = false;
    previousMillis = millis();

    Serial.println("STATUS : SAFE");
  }


  Serial.println("--------------------------------------");

  delay(100);
}


// ============================================
// BLINK FUNCTION
// ============================================

void blinkLED(int ledPin) {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= blinkInterval) {

    previousMillis = currentMillis;

    blinkState = !blinkState;

    digitalWrite(ledPin, blinkState);
  }
}
