#include <iostream>
using namespace std;

int n1, n2; //Variaveis globais 

int main (){
	
	//Operadores Matematicos + - / * %
	
	int n3,n4; //Variaveis locais.
	int res1, res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1=n1/n2;
	res2=n1%n2; //operdor para resto.
	
	cout <<"Resultado = " <<res1<< "\n\n";
	cout <<"Resto = " <<res2<< "\n\n";
	
	return 0;
}
