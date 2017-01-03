#include <iostream>

using namespace std;

int main()
{
    bool certo = true;

    for (int i = 0; i < 3; i++) {
        string a, b, c;
        int qtd = 0;

        cin >> a >> b >> c;

        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                for (int l = 0; l < 4; l++) {
                    if(a[j] == b[k] && b[k] == c[l])
                        qtd++;
                }
            }
        }

        if(qtd != 1){
            certo = false;
        }
    }
    if(!certo)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}

