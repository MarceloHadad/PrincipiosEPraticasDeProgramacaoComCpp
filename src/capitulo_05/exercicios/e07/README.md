# Exercícios 7

Equações do segundo grau têm a forma

    ```cpp
    a . x² + b . x + c = 0
    ```

Para resolvê-las, se usa a fórmula de Báskara:

    ```cpp
        x = -  b ± √b² - 4ac
            __________________
                    2a   
    ```

Porém, existe um problema: se b²-4ac é menor do que zero, ela vai falhar. Escreva um programa que possa calcular x usando a fórmula de Báskara. Crie uma função que, dados a, b, c, imprima as raízes de uma equação do segundo grau e lance uma exceção se b²-4ac for menor do que zero. Faça a função main() chamar a sua função. Quando o programa detectar uma equação sem raízes reais, ela deve imprimir uma mensagem. Como você sabe se os seus resultados são plausíveis? Você pode verificar se estão corretos?
