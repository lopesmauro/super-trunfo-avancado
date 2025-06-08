# 🃏 Super Trunfo - Comparações Avançadas com Atributos Múltiplos em C

Este programa implementa a lógica avançada de comparação de cartas de países no estilo Super Trunfo, permitindo a seleção dinâmica de dois atributos diferentes para comparação entre duas cartas.

---

## 🚀 Funcionalidades

- Leitura de dados pré-cadastrados de dois países (nome, população, área, PIB, densidade populacional).
- Menus interativos para seleção de dois atributos diferentes.
- Regras de comparação específicas:
  - **Maior valor vence** para todos os atributos, exceto **Densidade Demográfica**, onde o **menor valor vence**.
- Soma dos dois atributos escolhidos e comparação da soma.
- Identificação do vencedor ou declaração de empate.
- Exibição detalhada do resultado com:
  - Nomes dos países
  - Atributos comparados e seus valores
  - Soma dos atributos
  - Resultado final
- Validação de entrada e tratamento de erros com `switch` e `default`.

---

## 🧠 Conceitos abordados

- Estrutura de dados com `struct` em C  
- Menus dinâmicos com `switch`  
- Uso do operador ternário (`? :`)  
- Controle de fluxo com `if-else` aninhado  
- Funções separadas para cálculos e exibição  
- Tratamento de entradas inválidas  
- Interface clara e orientada ao usuário  

---

## 🛠️ Como compilar e rodar

1. Clone este repositório:
```bash
git clone https://github.com/seu-usuario/super-trunfo-avancado.git
cd super-trunfo-avancado
```

2. Compile o programa:
```bash
gcc super_trunfo_avancado.c -o super_trunfo_avancado
```

3. Execute o programa:
```bash
./super_trunfo_avancado
```

---

## ✅ Requisitos atendidos

- Escolha de dois atributos distintos via menus dinâmicos

- Comparação correta com regra especial para densidade

- Soma dos dois atributos e comparação final

- Mensagens claras e estrutura visual do resultado

- Código modular, bem comentado e legível

- Validação e tratamento de entradas inválidas

---

## 🧑‍💻 Autor

Nome: Mauro Felipe Souza Lopes

Curso: Engenharia de Software - Estácio

Desafio: Super Trunfo - Nível Avançado
