# Respostas - Questões "Para Pensar"

## 1. Divisão em Python vs C
No **Python**, o operador `/` realiza a divisão real (retornando um número decimal `float`), enquanto `//` realiza a divisão inteira (descartando as casas decimais). 

Em **C**, não existe o operador `//`. O comportamento da divisão com `/` é determinado pelos tipos de dados envolvidos: se ambos os operandos forem inteiros (`int`), a divisão `/` será obrigatoriamente inteira; caso pelo menos um seja `float` ou `double`, a divisão será real.

---

## 2. Teste da expressão `c * (9/5)` em C
Ao testar `c * (9/5)` em C, o resultado da conversão fica incorreto. 

Isso acontece porque a expressão `(9/5)` realiza uma divisão entre dois números inteiros. Como resultado, o C descarta as casas decimais e assume o valor `1` (em vez de `1.8`). A conta final passa a ser apenas `c * 1`, ignorando a proporção correta da conversão. Para corrigir em C, deve-se escrever `c * (9.0 / 5.0)` ou `(c * 9) / 5`.

---

## 3. Representação de "Verdadeiro" e "Falso" em C e Python
O **Python** possui o tipo booleano nativo e exibe os valores literais `True` e `False`. 

O **C** (em sua especificação clássica) representa valores lógicos usando números inteiros: o valor **`1`** representa **verdadeiro** e o **`0`** representa **falso**. Isso revela que, internamente em C, expressões lógicas retornam inteiros para indicar o estado de verdade de uma condição.

---

## 4. Análise do código Assembly (`gcc -S`)
Ao compilar um programa em C com a flag `-S` (`gcc -S 01-idade.c`), o compilador gera o arquivo `01-idade.s` contendo as instruções em linguagem Assembly.

Ao abrir o arquivo `.s`, a operação matemática é identificada pelas instruções de máquina do processador. Por exemplo:
* Uma **soma** é representada pela instrução `addl` (ou `add`).
* Uma **multiplicação** é representada pela instrução `imull` (ou `imul`).
* Uma **subtração** é representada pela instrução `subl` (ou `sub`).
