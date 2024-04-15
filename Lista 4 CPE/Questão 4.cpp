#include <iostream>
using namespace std;

int main() {
    const double precos[] = {2.98, 4.50, 9.98, 4.49, 6.87};

     double totalVendas = 0.0;

    bool continuar = true;
    while (continuar) {
        int numeroProduto;
        int quantidade;

        cout << "Digite o número do produto (1 a 5) ou -1 para encerrar: ";
        cin >> numeroProduto;

        if (numeroProduto == -1) {
            continuar = false; 
        } else if (numeroProduto < 1 || numeroProduto > 5) {
            cout << "Número de produto inválido." << endl;
            continue;
        } else {
            cout << "Digite a quantidade vendida: ";
            cin >> quantidade;
            totalVendas += precos[numeroProduto - 1] * quantidade;
        }
    }
    cout << "O valor total de varejo de todos os produtos vendidos é: R$ " << totalVendas << endl;

    return 0;
}
