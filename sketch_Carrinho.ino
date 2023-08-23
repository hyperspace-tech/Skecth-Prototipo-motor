  // Lembre-se de conectar o motor apropriado à saída PWM (por exemplo, pino 9) do Arduino
  const int motorPin = 9;
  const int pinoConexao1 = 0;
  const int pinoConexao2 = 0;

  void setup() {
    pinMode(motorPin, OUTPUT);
    digitalWrite(motorPin, LOW);  // Mantém o motor desligado no início
  }

  void loop() {
    // Verifica se as conexões elétricas estão sendo feitas (substitua as condições pelos pinos corretos)
    analogWrite(motorPin, 255);
    delay(50);
    analogWrite(motorPin, 0);
    delay(50);
  }