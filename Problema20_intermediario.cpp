#include <iostream>
#include <vector>
using namespace std;


void mostrar(vector<int> &vet){
    int tam = vet.size();
    for (int i = 0; i < tam; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

void insetion_sort(vector<int> &vet){
    int tam = vet.size();
    for (int i = 0; i < tam; i++) {
        for (int j = i; j > 0; j--) {
            if(vet[j] < vet[j - 1]){
                int aux = vet[j];
                vet[j] = vet[j - 1];
                vet[j - 1] = aux;
            }
        }
    }
}

void uniao(vector<int> &A, vector<int> &B, vector<int> &result){
    result = A;

    int tam = B.size();

    for (int i = 0; i < tam; i++) {
        bool presente = false;
        for (int j = 0; j < result.size(); j++) {
            if(B[i] == result[j])
                presente = true;
        }
        if(!presente)
            result.push_back(B[i]);
    }
    insetion_sort(result);
    mostrar(result);
}

void interseccao(vector<int> &A, vector<int> &B, vector<int> &result){
    int tamB = B.size();
    int tamA = A.size();

    for (int i = 0; i < tamB; i++) {
        bool presente = false;
        for (int j = 0; j < tamA; j++) {
            if(B[i] == A[j])
                presente = true;
        }
        if(presente)
            result.push_back(B[i]);
    }
    insetion_sort(result);
    mostrar(result);
}

void diferenca(vector<int> &A, vector<int> &B, vector<int> &result){
    int tamB = B.size();
    int tamA = A.size();

    for (int i = 0; i < tamA; i++) {
        bool presente = false;
        for (int j = 0; j < tamB; j++) {
            if(A[i] == B[j])
                presente = true;
        }
        if(!presente)
            result.push_back(A[i]);
    }
    insetion_sort(result);
    mostrar(result);
}

int main()
{
    int tamA, tamB, value;
    vector<int> A, B, result;
    char op;

    cin >> op;

    cin >> tamA;

    for (int i = 0; i < tamA; i++) {
        cin >> value;
        A.push_back(value);
    }

    cin >> tamB;

    for (int i = 0; i < tamB; i++) {
        cin >> value;
        B.push_back(value);
    }

    if(op == 'u')
        uniao(A, B, result);
    else if(op == 'i')
        interseccao(A, B, result);
    else if(op == 'd')
        diferenca(A, B, result);
    else
        cout << "Operação invalida!" << endl;

    return 0;
}

