#include <iostream>

using namespace std;

// recebe um int n >= 0 e um int d tal que 0 <= d <=9
// e devolve o numero de ocorrencias de d em n.
// por exemplo, se n = 341121 e d = 1, então a sua
// função deve devolver 3.

int cnt_digits(int n, int d) {
  if (n == 0 && d == 0) return 1;
  int c = 0; // no final c é o numero de ocorrencias de d em n
   while (n != 0){
        int r = n % 10; //ultimo digito de n (456 % 10 --> 6)
        if (r == d) ++c;
        n /= 10; //n sem o ultimo digito (456 / --> 45)
    }     
    return c;
}

int main(){
    cout << cnt_digits(1012111, 1) << "\n";
}