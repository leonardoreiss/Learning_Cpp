#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int n1, n2, n3, resultado;
	char opc;
	
	inicio:
	
	system ("cls");
	
		
	cout <<"Digite a nota 1= ";
	cin >> n1;
    cout <<"Digite a nota 2= ";
	cin >> n2;
	cout <<"Digite a nota 3= ";
	cin >> n3;
	
	resultado=n1+n2+n3;
	
	if (resultado >=60){
		cout <<"Aluno aprovado \n\n";
	}
	else if (resultado >=40){
		cout <<"Aluno recuperacao \n\n";
	}	
		else{
			cout <<"Aluno de reprovado \n\n";
		}
		
		cout <<"Digitar outras notas? [s / n] =" ;
		cin >> opc;
		
		if (opc == 's' or opc == 'S'){
			goto inicio;
			
		}
		else {
			cout << " \n Ok, ate mais";
		}
		
	return 0;
}
