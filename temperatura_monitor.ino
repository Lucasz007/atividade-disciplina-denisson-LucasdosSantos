/*
 * Sistema de Monitoramento de Temperatura
 * Disciplina: Fundamentos de Programação e Estruturas de Dados
 * Professor: Prof. Me. Denisson Paulo de Albuquerque
 * Aluno: Lucas dos Santos Marins do Monte
 * 
 * Descrição: Este programa monitora a temperatura ambiente usando um sensor NTC
 * e aciona um LED quando a temperatura ultrapassa um limite pré-definido.
 */

// Definições de pinos
const int SENSOR_PIN = A0;      // Pino analógico para o sensor NTC
const int LED_PIN = 13;         // Pino digital para o LED
const int TEMPERATURA_LIMITE = 30; // Limite de temperatura em graus Celsius

// Variáveis globais
float temperatura_atual = 0;
float tensao_leitura = 0;

void setup() {
  // Inicializa a comunicação serial para monitoramento
  Serial.begin(9600);
  
  // Configura os pinos
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  Serial.println("Sistema de Monitoramento de Temperatura Iniciado");
  Serial.println("================================================");
}

void loop() {
  // Lê a tensão do sensor NTC
  tensao_leitura = analogRead(SENSOR_PIN);
  
  // Converte a leitura analógica em temperatura
  // Fórmula simplificada para conversão de tensão em temperatura
  // Valor em mV: (tensao_leitura / 1023) * 5000
  // Temperatura aproximada em °C: (tensao_leitura - offset) * escala
  temperatura_atual = (tensao_leitura / 1023.0) * 100.0 - 50.0;
  
  // Exibe a temperatura no serial monitor
  Serial.print("Temperatura: ");
  Serial.print(temperatura_atual);
  Serial.print("°C | LED: ");
  
  // Verifica se a temperatura ultrapassou o limite
  if (temperatura_atual > TEMPERATURA_LIMITE) {
    digitalWrite(LED_PIN, HIGH);  // Aciona o LED
    Serial.println("LIGADO");
  } else {
    digitalWrite(LED_PIN, LOW);   // Desliga o LED
    Serial.println("DESLIGADO");
  }
  
  // Aguarda 1 segundo antes da próxima leitura
  delay(1000);
}
