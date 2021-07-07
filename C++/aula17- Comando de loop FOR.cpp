#include <iostream>

using namespace std;

	/*
	for (ini ; cond ; inc/dec){
		//comandos	
	}
	*/
	
int main (){
	
	int x, y, z;
	cout << "Tabuada\n" ;
	for(x=0, y=2, z=4; x<=20 && y<=70; x++, y+=3, z+=4){
		cout << x << " - ";
		cout << y << " - ";
		cout << z << " \n";
	}
	return 0;
}
