#include <iostream>

using namespace std;

int main(){
	/* || = nor
	   &&= and
	   != not
	*/
	inicio:
		
	int num;
	
	cout << "\n Digite um numero: ";
	cin >> num;
	
	if ((num >=3 && num<= 6) || (num > 9 && num <15) || (num >15 && num != 20)) {
		cout << "\n Numero aceito! \n";
	}
		else {
			cout << "\n Numero negado! \n";
		}
			
			goto inicio;
			
	return 0;
}
