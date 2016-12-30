#include <iostream>
#include <vector>
using namespace std;

void ordenar(vector<int> &idades){
    int tam = idades.size();
    for (int i = 1; i < tam; i++) {
        for (int j = i; j > 0; j--) {
            if(idades[j] < idades[j - 1]){
                int aux = idades[j];
                idades[j] = idades[j - 1];
                idades[j - 1] = aux;
            }else
                break;
        }
    }
}

int main()
{
    int qtdConvidados = 0, aux = 0;

    cin >> qtdConvidados;

    vector<int> idademulheres;
    vector<int> idadehomens;


    for (int i = 0; i < qtdConvidados; i++) {
        cin >> aux;
        if(aux % 2 == 0)
            idademulheres.push_back(aux);
        else
            idadehomens.push_back(aux);
    }

    if(idademulheres.size() > idadehomens.size()){
        cout << "F" << endl;
        return 0;
    }

    ordenar(idadehomens);
    ordenar(idademulheres);

    int tam = idademulheres.size();

    for (int i = 0; i < tam; i++) {
        if(idadehomens.back() <= idademulheres.back()){
            break;
        }else{
            idadehomens.pop_back();
            idademulheres.pop_back();
        }
    }

    if(idademulheres.size() == 0)
        cout << "S" << endl;
    else
        cout << "F" << endl;

    return 0;
}

