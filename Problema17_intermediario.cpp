#include <iostream>
#include <vector>
using namespace std;

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

int main()
{
    int n, value;
    vector<int> A, B;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        A.push_back(value);
    }

    for (int i = 0; i < n; i++) {
        cin >> value;
        B.push_back(value);
    }

    insetion_sort(A);

    int result = 0;

    for (int i = 0; i < n; i++) {
        int maior = 0, ind = -1;
        for (int j = 0; j < n; j++) {
            if(B[j] > maior){
                maior = B[j];
                ind = j;
            }
        }
        B[ind] = 0;
        result += maior * A[i];
    }

    cout << result << endl;

    return 0;
}

