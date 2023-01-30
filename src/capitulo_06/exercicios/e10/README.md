# Exercícios 10

Uma permutação é um subconjunto ordenado de um conjunto. Por exemplo, digamos que você quer selecionar uma combinação para um cofre. Existem 60 números possíveis, e você necessita de três números diferentes para a combinação. Existem *P(60,3)* permutações para a combinação, onde *P* é definido pela fórmula

```cpp
P(a,b) =  a!
        _______
        (a-b)!'
```

onde ! é usado como operador de sufixo para fatorial. Por exemplo, 4! é 4\*3\*2\*1. Combinações são similares a permutações, exceto que a ordem dos objetos não importa. Por exemplo, se você estiver fazendo uma *banana split* e quiser colocar três sabores diferentes de sorvete, dentre os cinco que estão disponíveis, você não se importaria de colocar uma colher de sorvete de baunilha no início ou no fim; você ainda estaria pondo sabor baunilha. A fórmula para combinações é:

```cpp
C(a,b) =   P(a,b)
            _________
                b!
```

Projete um programa que peça ao usuário dois números, pergunte se ele quer calcular permutações ou combinações e imprima o resultado. Ele terá várias partes. Faça uma análise dos requisitos anteriores.

Escreva exatamente o que o programa terá que fazer. Depois, vá para a fase do projeto. Escreva pseudocógico para o programa e o divida em subcomponentes. Esse programa deve ter verificação de erros. Assegure-se de que todos os dados de entrada incorretos irão gerar boas mensagens de erro.
