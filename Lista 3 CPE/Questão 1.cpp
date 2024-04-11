#include<iostream>
using namespace std;

int main(){
	float km;
	float litros;
	
	cout << "insira o numero de quilometros rodados com um tanque cheio: " << endl;
	cin >> km;
	
	cout << "agora insira quantos litros o seu carro possui com um tanque cheio: " << endl;
	cin >> litros;
	
	cout << "a media do consumo de cada tanque e de: " << km/litros << "km/litro(s).";	
	
	return 0;
}
