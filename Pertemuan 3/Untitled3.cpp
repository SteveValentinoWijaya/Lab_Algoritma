#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 5;
	
	cout << "Nilai A adalah " << a << endl; // 10
	cout << "Nilai ++A adalah " << ++a << endl; //11
	cout << "Nilai B adalah " << b << endl; //5
	cout << "Nilai B-- adalah " << b--<< endl; //5
	cout << "Nilai B adalah " << b << endl; //4 
    cout << "Nilai ++B adalah " << ++b << endl; //5
    cout << "Nilai A+1 adalah " << a+5 << endl; // 16
    cout << "Nilai 5+A adalah " << 5+a << endl; // 16
	cout << "Nilai a fixnya adalah " << a << endl; //11
		
	return 0;
}   //kenapa gak ngambil dari A+1 atau 5+A karena termasuk operasi aritmatika bukan operasi C++nya
