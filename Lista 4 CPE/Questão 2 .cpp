#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";

    int espacos = 0;
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= espacos; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << "\n";
        ++espacos;
    }

    cout << "\n";

    espacos = 0;
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= espacos; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << "\n";
        --espacos;
    }

    return 0;
}
