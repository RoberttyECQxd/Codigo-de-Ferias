#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

vector<int> converter(int value){
    vector<int> aux, result;
    for (int i = 0; i < 8; i++){
        aux.push_back(value % 2);
        value /= 2;
    }
    for (int i = 0; i < 8; i++)
        result[i] = aux[7 - i];
    return result;
}

int main()
{
    char op;

    cin >> op;

    vector<int> result, vetA, vetB;
    int value;

    for (int i = 0; i < 8; i++){
        cin >> value;
        vetA.push_back(value);
    }

    for (int i = 0; i < 8; i++){
        cin >> value;
        vetB.push_back(value);
    }

    int valor1 = 0;
    int valor2 = 0;

    for (int i = 0; i < 8; i++){
        valor1 += vetA[i] * pow(2,i);
        valor2 += vetB[i] * pow(2,i);
    }

    if(op == '+')
        result = converter(valor1 + valor2);
    if(op == '-')
        result = converter(valor1 - valor2);
    if(op == '*')
        result = converter(valor1 * valor2);
    if(op == '/')
        result = converter(valor1 / valor2);
    if(op == '%')
        result = converter(valor1 % valor2);

    for (int i = 0; i < 8; i++)
        cout << result[i];
    cout << endl;
    return 0;
}

