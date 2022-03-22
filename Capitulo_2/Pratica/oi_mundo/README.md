# Prática

1.	Vá para o Apêndice C e siga os passos necessários para iniciar um projeto. Configure um projeto de console C++ vazio, chamado de oi_mundo.

2.	Digite oi_mundo.cpp, exatamente como especificado abaixo, salve em seu diretório de práticas e inclua em seu projeto oi_mundo.
```cpp
    #include "std_lib_facilities.h"
    int main() // O programa C++ inicia executando a função main
    {
        cout << "Oi, Mundo!\n"; // escreve “Oi, Mundo!” na saída
        keep_window_open(); // aguarda a entrada de um caractere
        return 0;
    }
```
    A chamada para keep_window_open() é necessária em algumas máquinas Windows para evitar que elas fechem a janela antes que se possa ler a saída. Esta é uma peculiaridade / característica do Windows, não de C++. Definimos keep_window_open() em std_lib_facilities.h para simplificar a escrita de programas simples de texto.
    Como você encontra a std_lib_facilites.h? Se você está em um curso, pergunte ao instrutor. Se não, baixe de nosso site de apoio www.stroustrup.com/Programming . Mas, e se você não tem um instrutor nem acesso à Web? Neste caso (e apenas nesse caso), substitua a diretiva #include por:

        #include<iostream>
        #include<string>
        #include<vector>
        #include<algorithm>
        #include<cmath>
    using namespace std;
    inline void keep_window_open() { char ch; cin>>ch; }

    Trata-se de um uso direto da biblioteca padrão, o que permitirá que você progrida até o Capítulo 5; o tema será explicado em detalhes mais adiante(§8.7).

3.	Compile e execute o programa “Oi, Mundo!”. É bem provável que algo não funcione bem. É muito raro ter êxito já na primeira tentativa de usar uma nova linguagem de programação, um novo ambiente de programação. Encontre o problema e o corrija! Este é um ponto onde pedir ajuda a uma pessoa mais experiente é sensato, mas antes, de prosseguir, tenha certeza de que entendeu o que lhe disseram, de modo que você possa fazer sozinho.

4.	Até agora, você provavelmente encontrou alguns erros e teve que corrigi-los. Agora é o momento de ficar um pouco mais fa,iliarizado com as facilidades de detecção e indicação de erros de seu compilador! Experimente os seis erros do §2.3 para ver como o seu ambiente de programação reage. Pense em pelo menos cinco erros mais que você poderia ter cometido ao digitar o programa (por ex., omita keep_window_open(), ative a tecla Caps Lock ao digitar uma palavra ou digite uma vírgula em lugar de um ponto e vírgula) e teste cada um deles para ver o que acontece quando você tenta compilar e executar estas versões.
