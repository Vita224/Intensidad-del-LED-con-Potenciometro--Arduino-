int Sensor = A0; //Entrada analogica del potenciometro
int LED = 6; //Entrada digital del LED
int Valor;
int brillo;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  Valor = analogRead(Sensor); //Lectura de los valores que da el potenciometro
  Serial.println(Valor);
  delay(10); // Velocidad en la entrada de datos

  brillo = analogRead(Sensor) / 4; //Se dividen los valores para el LED
  analogWrite(LED, brillo);

}
