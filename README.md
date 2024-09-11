# Projeto Arduino: Controle de LED com Sensor

Este projeto utiliza um sensor analógico para controlar um LED com uma placa Arduino. O LED acende quando o valor do sensor é menor que um limiar predefinido.

## Descrição

O código a seguir lê o valor de um sensor analógico conectado ao pino `A0` e controla um LED conectado ao pino `3`. Quando o valor lido do sensor é menor que 100, o LED acende; caso contrário, o LED permanece apagado. O valor do sensor também é exibido no monitor serial.

## Componentes

- **Placa Arduino** (Uno, Mega, etc.)
- **Sensor analógico** (ex: potenciômetro, fotossensor, etc.)
- **LED**
- **Resistor** (para limitar a corrente do LED)

## Esquema de Conexão

- **LED**:
  - Pino positivo (ânodo) conectado ao pino `3` do Arduino.
  - Pino negativo (cátodo) conectado a um resistor de 220 ohms e ao GND do Arduino.

- **Sensor**:
  - Saída analógica do sensor conectada ao pino `A0` do Arduino.
  - VCC do sensor conectado ao pino `5V` do Arduino.
  - GND do sensor conectado ao pino `GND` do Arduino.

## Código

```cpp
// C++ code
// Iasmin Angel

int led = 3;
int sensor = A0;
int valorSensor = 0;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  valorSensor = analogRead(sensor);
  Serial.println(valorSensor);
  
  if(valorSensor < 100){
    digitalWrite (led,HIGH);
  } else {
    digitalWrite (led,LOW);
  }
  
  delay(100); 
}
```

## Funcionamento

Inicialização: No início, o pino do LED é configurado como saída e o monitor serial é iniciado com uma taxa de 9600 bps.

Leitura do Sensor: O valor do sensor é lido e impresso no monitor serial.

Controle do LED: Se o valor do sensor for menor que 100, o LED é aceso. Caso contrário, o LED é apagado.

Atualização: O loop é executado continuamente com um atraso de 100 milissegundos entre as iterações.

## Como Usar
  
Conecte os componentes conforme o esquema acima. 

Carregue o código para a sua placa Arduino usando a IDE Arduino.

Abra o monitor serial na IDE Arduino para visualizar os valores do sensor.

Observe o LED acender e apagar com base na leitura do sensor.

## Licença

Este projeto está disponível sob a licença MIT (ou outra licença de sua escolha).

Se você tiver alguma dúvida ou encontrar um problema, sinta-se à vontade para abrir uma issue no repositório do GitHub.

Nota: Substitua https://github.com/usuario/repo pelo link real do seu repositório GitHub, e adicione um arquivo de licença (LICENSE) se necessário.

Certifique-se de substituir o link do repositório e o nome do arquivo de licença, se aplicável, com as informações corretas.
