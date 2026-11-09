#include <iostream>

using namespace std;

int main() {
    int total = 0;

    cout << "Deret Bilangan Ganjil (10 suku pertama):" << endl;
    
    // Perulangan untuk 10 bilangan ganjil pertama
    for (int i = 1; i <= 10; i++) {
        int ganjil = 2 * i - 1; // Rumus bilangan ganjil
        total += ganjil;        // Menjumlahkan nilai deret

        cout << ganjil;
        
        // Menampilkan tanda tambah (+) di antara angka (kecuali angka terakhir)
        if (i < 10) {
            cout << " + ";
        }
    }
    
    // Menampilkan hasil akhir penjumlahan
    cout << " = " << total << endl;

    return 0;
}
