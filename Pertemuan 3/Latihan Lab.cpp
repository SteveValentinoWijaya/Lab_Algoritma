#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	
	cout << "Masukkan nilai A: ";
	cin >> a;
	cout << "Masukkan nilai B: ";
    cin >> b;
    
    c = a % b;
    d = a * b;
    
    cout << "Hasil nilai C dari A % B = " << c << endl;
    cout << "Hasil nilai D dari A * B = " << d << endl;
    
    return 0;
}
