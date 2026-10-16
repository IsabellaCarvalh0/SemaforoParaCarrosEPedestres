# 🚦 Simulador de Semáforo com Arduino

Projeto em Arduino que simula o funcionamento de um semáforo de cruzamento, com sinais para **veículos** (verde, amarelo e vermelho) e para **pedestres** (verde e vermelho), operando de forma sincronizada.

## 📋 Descrição

O código controla 5 LEDs em um ciclo contínuo. Enquanto os carros têm sinal verde ou amarelo, os pedestres ficam com o sinal vermelho. Quando os carros param (vermelho), os pedestres podem atravessar (verde).

## 🧰 Componentes necessários

| Quantidade | Componente |
|-----------|------------|
| 1 | Arduino (Uno, Nano, Mega ou compatível) |
| 2 | LEDs verdes (carros e pedestres) |
| 2 | LEDs vermelhos (carros e pedestres) |
| 1 | LED amarelo |
| 5 | Resistores de 220 Ω a 330 Ω |
| 1 | Protoboard |
| - | Jumpers / fios |

## 🔌 Ligações (pinagem)

| Pino | LED | Função |
|------|-----|--------|
| 9 | Verde | Pedestres |
| 10 | Vermelho | Pedestres |
| 11 | Verde | Carros |
| 12 | Amarelo | Carros |
| 13 | Vermelho | Carros |

> Cada LED deve ser ligado ao pino correspondente através de um resistor (em série), com o outro terminal ao **GND**.

## ⏱️ Ciclo de funcionamento

| Etapa | Carros | Pedestres | Duração |
|-------|--------|-----------|---------|
| 1 | 🟢 Verde | 🔴 Vermelho | 3 segundos |
| 2 | 🟡 Amarelo | 🔴 Vermelho | 2 segundos |
| 3 | 🔴 Vermelho | 🟢 Verde | 5 segundos |

Após a etapa 3, o ciclo reinicia automaticamente.

## ▶️ Como usar

1. Monte o circuito conforme a tabela de pinagem.
2. Abra a **Arduino IDE** (ou use um simulador como o [Tinkercad Circuits](https://www.tinkercad.com/circuits)).
3. Copie o código para um novo sketch.
4. Selecione a placa e a porta corretas em **Ferramentas**.
5. Clique em **Carregar** (Upload).

## 💻 Como o código funciona

- **`setup()`**: configura os pinos 9 a 13 como saída (`OUTPUT`).
- **`loop()`**: repete indefinidamente as três etapas do ciclo, usando `digitalWrite()` para ligar (`HIGH`) ou desligar (`LOW`) cada LED e `delay()` para definir o tempo de cada etapa.

## 🔧 Personalização

Para alterar a duração de cada etapa, modifique os valores de `delay()` (em milissegundos):

```cpp
delay(3000); // Carros verde: 3 s
delay(2000); // Carros amarelo: 2 s
delay(5000); // Pedestres verde: 5 s
```

## 💡 Ideias de melhoria

- Adicionar um **botão** para o pedestre solicitar a travessia.
- Incluir um **buzzer** que avise quando o sinal de pedestres estiver aberto.
- Fazer o LED verde de pedestres **piscar** antes de fechar.
- Substituir `delay()` por `millis()` para permitir outras tarefas em paralelo.
- Usar constantes (`const int`) ou `#define` para nomear os pinos e tornar o código mais legível.

## 📄 Licença

Projeto de uso livre para fins educacionais.
