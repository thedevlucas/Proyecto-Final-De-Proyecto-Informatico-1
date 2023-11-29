int ledPin1 = 2;  
int ledPin2 = 3; 
int buzzerPin = 9;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  
  digitalWrite(ledPin1, HIGH);
  delay(100); 
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(100); 
  digitalWrite(ledPin2, LOW);
  delay(100); 

  
  digitalWrite(ledPin1, HIGH);
  delay(100);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(100); 
  digitalWrite(ledPin2, LOW);
  delay(1000); 
  
  tone(buzzerPin, 1000);  // Tono alto
  delay(500);            // Espera 500 ms
  noTone(buzzerPin);      // Detén el sonido
  delay(500);            // Espera 500 ms
  tone(buzzerPin, 500);   // Tono bajo
  delay(500);            // Espera 500 ms
  noTone(buzzerPin);      // Detén el sonido
  delay(500);            // Espera 500 ms
}