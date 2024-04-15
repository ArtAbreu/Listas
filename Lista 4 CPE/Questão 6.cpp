#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroPensado = rand() % 100 + 1;
    cout << "Pense em um número entre 1 e 100. Vou tentar adivinhar." << endl;

    int tentativa;
    int limiteInferior = 1;
    int limiteSuperior = 100;

    for (int i = 1; i <= 7; ++i) {
        tentativa = (limiteInferior + limiteSuperior) / 2;

        cout << "Minha tentativa " << i << ": O número que você pensou é " << tentativa << "?" << endl;
        
        char resposta;
        cout << "Responda com 's' se for menor, 'm' se for maior, ou 'c' se for igual: ";
        cin >> resposta;
        if (resposta == 's') {
            limiteSuperior = tentativa - 1;
        } else if (resposta == 'm') {
            limiteInferior = tentativa + 1;
        } else if (resposta == 'c') {
            cout << "Consegui adivinhar seu número xD" << endl;
            break;
        } else {
            cout << "Resposta inválida. Por favor, responda com 's', 'm' ou 'c'." << endl;
            --i; 
        }
    }

    return 0;
}
