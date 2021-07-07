#include <iostream>

using namespace std;

int main (){
	
	//TIPO, NOME;
	//TIPO, NOME = VALOR;
	
	int vidas =0; //10, 25, -15, numeros inteiros
	char letra ='B'; // 'B'
	double decimal =5.2; // 2.4999999 mais preciso fdo que o float
	float decimal2 =5.2; // 2.5
	bool vivo = true; // true= verdadeiro (1) / false= falso (0)
	string nome ="Leonardo"; //"Leonardo"
	
	
	cout << vidas <<"\n";
	cout << letra <<"\n";
	cout << decimal <<"\n";
	cout << decimal2 <<"\n";
	cout << vivo <<"\n";
	cout << nome <<"\n";
	
	cout << "\n"; 
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	cout << "Digite um numero Real: ";
	cin >> decimal;
	
	cout << "Digite outro numero Real: ";
	cin >> decimal2;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	cout << "\n vidas" << vidas << "\n letra: " << letra << "\n numero 1:" << decimal << "\n nemero 2: " << decimal2 << "\n nome: " << nome;
	
	return 0;
}
