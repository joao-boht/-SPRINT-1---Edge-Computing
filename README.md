# Projeto IoT para Fórmula E

## Descrição do Projeto
Este projeto utiliza um sistema embarcado com Arduino Uno, um sensor ultrassônico, um display LCD e um LED para capturar e exibir o tempo de volta dos carros em uma corrida de Fórmula E. O objetivo é coletar dados de maneira criativa e acessível, permitindo que pessoas de todas as idades e níveis de conhecimento sobre automobilismo se envolvam e se emocionem com a competição.

## Componentes Utilizados

Arduino Uno R3
Sensor Ultrassônico HC-SR04
Display LCD 16x2 com I2C
LED
Resistor de 220Ω (ou outro próximo, como 330Ω ou 470Ω)
Breadboard e Fios de Conexão
Montagem do Circuito

1. Sensor Ultrassônico:

Trig: Pino digital 9 do Arduino
Echo: Pino digital 10 do Arduino
VCC: 5V do Arduino
GND: GND do Arduino

2. LED com Resistor:

Anodo do LED: Pino digital 13 do Arduino
Cátodo do LED: Resistor de 220Ω
Resistor: GND do Arduino

3. Display LCD:

SDA: Pino A4 do Arduino
SCL: Pino A5 do Arduino
VCC: 5V do Arduino
GND: GND do Arduino

## Funcionamento do Projeto
Inicialização: O Arduino inicializa o sensor ultrassônico, o display LCD e o LED.
Leitura de Distância: O sensor ultrassônico mede a distância até um objeto à frente.
Detecção de Passagem do Carro:
Se a distância for menor que 20 cm, registra o início da volta e acende o LED.
Quando o carro se afasta (distância maior que 20 cm), registra o fim da volta.
Cálculo e Exibição do Tempo de Volta: A diferença entre o tempo de início e fim da volta é calculada e exibida no display LCD e no monitor serial.

## Aplicação na Fórmula E
Este sistema permite monitorar o tempo de volta dos carros em tempo real, fornecendo dados precisos para equipes e espectadores. Pode ser utilizado para análise de desempenho, otimização de estratégias de corrida e engajamento do público através de visualizações interativas.

## Como Rodar
1. Acesse o [Wokwi](https://wokwi.com/).
2. Importe o projeto do GitHub.
3. Execute a simulação para visualizar os dados coletados.
4. acesse o video https://youtu.be/19eE4ixHsas?si=lwB1b8fIWTE2BH7t

## Considerações Finais
Este projeto oferece uma maneira prática e educativa de aplicar tecnologias IoT em eventos esportivos, promovendo maior interação e compreensão das dinâmicas da Fórmula E. Com um desenvolvimento contínuo, é possível expandir as funcionalidades e integrar mais sensores e recursos para uma experiência ainda mais rica.


## RMS

rm  joao boht 558690
rm fabiano 555524
rm erick 556096
rm pedro 556268
rm matheus 556954




