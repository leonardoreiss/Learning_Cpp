#include <iostream>

using namespace std;

int main () {
	
	int cont;
	
	cont = -1;
	
	while (cont <= 1000){
		cout << cont <<"\n";
			if (cont == 500){
				break;
			}	
		cont++;
	}
	return 0;
}
