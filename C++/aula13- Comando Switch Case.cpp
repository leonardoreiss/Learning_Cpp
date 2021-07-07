#include <iostream>

using namespace std;

int main(){
	
	int val;
	
	cout << "Selecione um transporte: \n [1] Carro, [2] Moto, [3] Aviao, [4] Helicoptero. \n";
	cin >> val;
	
	switch(val){
		case 1:
		case 2:
			cout << "\nTransporte terrestre \n";
				switch(val){
					case 1:
						cout << "Carro selecionado";
						break;
					case 2:
						cout << "Moto selecionada";
						break;
				}
			break;
		case 3:
		case 4:
			cout << "Transporte aereo \n";
				switch (val){
					case 3:
						cout << "Aviao selecionado";
						break;
					case 4:
						cout << "Helicoptero selecionado";
						break;
				}
			break;
		default:
			cout << "Valor selecionado invalido! \n";
			break;
	}
	
	return 0;
}
