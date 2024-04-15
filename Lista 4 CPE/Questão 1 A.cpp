#include <iostream>
using namespace std;

unsigned long long calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long resultado = 1;
        for (int i = 2; i <= n; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int numero;
    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Número inválido. Por favor, insira um número não negativo." << endl;
        return 1;
    }

    unsigned long long fatorial = calcularFatorial(numero);

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}