#include <iostream>
using namespace std;

int main() {
	int x, y, tambah, kali, bagi;
	
	cout << "Masukkan bilangan satu: ";
	cin >> x;
	cout << "Masukkan bilangan dua: ";
	cin >> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x:y;
	modulo = x%y;
    
    cout << "Hasil penjumlahan x dan y adalah " << tambah << endl;
    cout << "Hasil pengurangan x dan y adalah " << kurang << endl;
    cout << "Hasil perkalian x dan y adalah " << kali << endl; 
	cout << "Hasil pembagian x dan y adalah " << bagi << endl;
	cout << "Hasil sisa bagi x dan y adalah " << modulo << endl;   
	
    return 0;
}
