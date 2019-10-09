/**
 * Automção com Arduino
 * @author José de Assis
 */

// criando uma variável que irá receber um caractere
char leitor;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    leitor = Serial.read();
    if (leitor == 'a'){
      digitalWrite(13, HIGH);
    }
    if (leitor == 's'){
      digitalWrite(13, LOW);
    }
    if (leitor == 'q'){
      digitalWrite(12, HIGH);
    }
    if (leitor == 'w'){
      digitalWrite(12, LOW);
    }
  }
}
