#include <iostream>

using namespace std;

int main() {
    int total = 0;

    cout << "Deret Bilangan Genap (10 suku pertama):" << endl;
    
    // Perulangan untuk 10 bilangan genap pertama
    for (int i = 1; i <= 10; i++) {
        int genap = 2 * i; // Rumus bilangan genap
        total += genap;    // Menjumlahkan nilai deret

        cout << genap;
        
        // Menampilkan tanda tambah (+) di antara angka (kecuali angka terakhir)
        if (i < 10) {
            cout << " + ";
        }
    }
    
    // Menampilkan hasil akhir penjumlahan
    cout << " = " << total << endl;

    return 0;
}
