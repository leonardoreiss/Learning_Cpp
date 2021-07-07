#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	n= -1;
	
	while(n++<20){
		
		cout << "Contagem " << n <<"\n";
		
		if(n == 20){
			break;
		}
	}
		cout << "\nPrograma finalizado \n";
		
	return 0;
}
