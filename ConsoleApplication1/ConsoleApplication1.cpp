#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string operador, numero1, numero2;
    int n1, n2, resultado;
    
    getline(cin, operador, ' ');

    getline(cin, numero1, ' ');
    getline(cin, numero2);

    n1 = stoi(numero1);
    n2 = stoi(numero2);

    if (operador == "soma")
        resultado = n1 + n2;
    else if (operador == "subtracao")
        resultado = n1 - n2;
    else if (operador == "multiplicacao")
        resultado = n1 * n2;
    else if (operador == "divisao")
        resultado = n1 / n2;
    else if (operador == "quit")
        return 0;


    printf("%d", resultado);



}
