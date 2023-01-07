# Prática

Abaixo estão 25 fragmentos de código. Cada um se destina a ser inserido neste "esqueleto":

```cpp
#include "std_lib_facilities.h"

int main()
try
{
    << seu código aqui >>
    keep_window_open();
    return 0;
}
catch (exception& e)
{
    cerr << "error:" << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "Ops: unknown exception!\n";
    keep_window_open();
    return 2;
}
```

Cada fragmento tem zero ou mais erros.
Sua tarefa é encontrar e remover todos os erros em cada programa.
Após você ter removido os erros, o programa vai ser compilado, executado e escrever "Success!" Mesmo que você pense que tenha localizado um erro, ainda precisará entrar com o fragmento de programa (original, sem melhorias) e testá-lo;
 você pode ter se enganado sobre onde se encontra o erro, ou podem existir mais erros do que você localizou no fragmento de código. Além disso, um dos objetivos desta prática é mostrar como o compilador reage a diferentes tipos de erros. Não digite o esqueleto 25 vezes – esta é uma tarefa para recortar e colar ou alguma técnica "mecânica" similar. Não corrija problemas simplesmente eliminando um comando; corrija-os alterando, acrescentando ou eliminando alguns caracteres.

```cpp
1. Cout <<"Success!\n";
2. cout <<Success!\n;
3. cout << "Success"<<!\n"
4. cout << success << endl;
5. string res = 7; vector<int> v(10);v[5] = res; cout << "Success!\n";
6. vector<int>v(10);v(5) = 7; if (v(5)!=7) cout << "Success!\n";
7. if (cond) cout << "Success!\n"; else cout << "Failure!\n";
8. bool c = false; if (c) cout <<"Success!\n"; else cout << "Failure!\n";
9. string s = "macaco"; boo c = "bobo"<s; if (c) cout <<"Success!\n";
10. string s = "macaco"; if (s=="bobo") cout << "Success!\n";
11. string s = "macaco"; if (s=="bobo") cout <"Success!\n";
12. string s = "macaco"; if (s+"bobo") cout <"Success!\n";
13. vector<char> v(5); for (int i=0; 0<v.size(); ++i); cout << "Success!\n";
14. vector<char> v(5); for (int i=0; i<=v.size(); ++i); cout <<"Success!\n";
15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout <<s[i];
16. if (true) then cout << "Success!\n"; else cout << "Failure!\n";
17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout <<s[i]
19. vector v(5); for(int i=0; i<v=size(); ++i); cout << "Success!\n";
20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
21. int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout << "Success!\n";
22. string<char> s= "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]
23. int i=0; while (i<10) ++j. if (j<i) cout << "Success!\n";
24. int x = 4; double d = 5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
25. cin << "Success!\n";
```
