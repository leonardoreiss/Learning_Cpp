#include <iostream>

using namespace std;

// ? = if
// : = else

int main(){
	
	int n1, n2, nota, x;
	string res;

	inicio:
	
	 x=5;
	 
	 cout <<"Digite um numero: ";
	 cin >> n1;
	 
	 (n1 >= 10) ? x++ : x--;
	 cout <<"Resultado: " << x <<" \n\n\n ";
	 
	/*
	cout << "Digite uma nota: ";
	cin >> n1;
	cout << "Digite outra nota: ";
	cin >> n2;
	
	nota = n1 + n2;
	
	(nota >=60) ? res= "Aprovado" : res= "Reprovado";
	cout << "\nSituação do aluno: " <<res << "\n";
	*/
	
	goto inicio;
	
	return 0;
}
