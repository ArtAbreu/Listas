#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	
	cout<< "por favor, digite dois numeros para saber se o primeiro e multiplo do segundo: \n";
	cin >> a >> b;
	
	if(a == b){
		cout << "sim, e multiplo\n";
	}
	if(a%b == 0){
		cout << "sim, e multiplo\n";
	}
	if(a%b != 0){
		cout << "nao e multiplo\n";
	}
	
	return 0;
}