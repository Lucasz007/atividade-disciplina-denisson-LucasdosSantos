# Atividade Prática — Disciplina do Prof. Denisson
## 📌 Identificação
- **Aluno(a):** Lucas dos Santos Marins do Monte
- **Matrícula:** 2026.13635
- **Curso:** GTI
- **Período:** 1º
- **Disciplina:** Fundamentos de Programação e Estruturas de Dados
- **Professor:** Prof. Me. Denisson Paulo de Albuquerque
- **Instituição:** Faculdade FASUP

## 📖 Descrição do Projeto
Este projeto consiste em um sistema de monitoramento de temperatura utilizando Arduino e sensor NTC. O programa realiza a leitura da temperatura ambiente e aciona um LED quando a temperatura ultrapassa um limite pré-definido de 30°C. O sistema exibe os dados em tempo real através do Serial Monitor da IDE Arduino.

### Funcionamento
1. O sensor NTC realiza leituras contínuas da temperatura
2. A tensão analógica é convertida em valores de temperatura em graus Celsius
3. Quando a temperatura ultrapassa 30°C, o LED é automaticamente acionado
4. Os dados são exibidos no Serial Monitor a cada 1 segundo

## ▶ Como Executar
1. Abrir o projeto na IDE do Arduino
2. Conectar o Arduino ao computador via cabo USB
3. Selecionar a porta COM correta em `Ferramentas > Porta`
4. Fazer o upload do código para a placa (Sketch > Upload)
5. Abrir o Serial Monitor (Ferramentas > Serial Monitor)
6. Verificar as leituras de temperatura em tempo real

## 🛠 Componentes Utilizados
- Arduino Uno
- Sensor NTC (Negative Temperature Coefficient)
- LED 5mm
- Resistor 10kΩ
- Resistor 220Ω (para o LED)
- Protoboard
- Jumpers

## 📁 Arquivos do Projeto
- `README.md` - Este arquivo com documentação completa
- `temperatura_monitor.ino` - Código-fonte da aplicação Arduino

## ⚙️ Configurações
- **Pino do Sensor:** A0 (Entrada Analógica)
- **Pino do LED:** 13 (Saída Digital)
- **Limite de Temperatura:** 30°C
- **Taxa de Atualização:** 1 segundo

## 📅 Data de Entrega
26/05/2026
