#include <iostream>
using namespace std;

int main() {
    const int NUM_NUMEROS = 5;
    const int MINIMO = 1;
    const int MAXIMO = 30;
    
    int numeros[NUM_NUMEROS];

   
    cout << "Por favor, insira cinco números entre 1 e 30:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        
        if (numeros[i] < MINIMO || numeros[i] > MAXIMO) {
            cout << "Número inválido. Por favor, insira um número entre 1 e 30." << endl;
            --i;
        }
    }

    cout << "\nBarras de asteriscos:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "Número " << i + 1 << ": ";
        for (int j = 0; j < numeros[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
