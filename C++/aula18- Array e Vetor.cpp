#include <iostream>

using namespace std;

int main(){
	
	int tam = 5;
	int vetor[5] = {10,20,30,40,50};
	int i; 
/*
			OU PODE SER FEITO ASSIM, CASO SEJA POUCAS VARIÁVEIS:
			UMA VARIÁVEL INTEIRA TEM UM VALOR DE 4 BITS, POR ISSO EM SIZE OF TEMOS QUE DIVIDIR POR 4.
	vetor[0]= 10;
	vetor[1]= 20;
	vetor[2]= 30;
	vetor[3]= 40;
	vetor[4]= 50;
*/	
	for (i= 0; i<sizeof(vetor)/4; i++){
		cout << vetor[i] <<"\n";
	}
	return 0;
}
