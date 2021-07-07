#include <iostream>
using namespace std;

int main(){
	//n1=n1+1;
	//n1=n1+10;		n1=+10;
	//n1=n1-10;		n1=-10;
	//n1=n1*10;		n1=*10;
	//n1=n1/10;		n1=/10;
	//n1++;		    n1=+01;
	
	int n1;

	n1=15;
	
	cout <<n1++<< "\n\n"; //Pós Incremnento
	cout <<n1  << "\n\n";
	
	cout <<++n1<< "\n\n"; //Pré Incremento
	cout <<  n1<< "\n\n";
	
	cout <<n1--<< "\n\n"; //Pós Decremento
	cout <<n1  << "\n\n";
	
	cout <<--n1<< "\n\n"; //Pré Decremento
	cout <<  n1<< "\n\n";
	
	return 0;
}
