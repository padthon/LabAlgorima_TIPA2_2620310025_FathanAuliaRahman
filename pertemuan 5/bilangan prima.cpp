#include <iostream>

using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "========================================" << endl;
    cout << "~~ Program Pengecekan Bilangan Prima ~~" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan sebuah angka: ";
    cin >> n;

    // Bilangan kurang dari atau sama dengan 1 bukan bilangan prima
    if (n <= 1) {
        isPrime = false;
    } else {
        // Perulangan (FOR) untuk mengecek faktor pembagi dari 2 sampai n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false; // Jika habis dibagi angka lain, bukan prima
                break;           // Keluar perulangan lebih awal
            }
        }
    }

    // Percabangan (IF) untuk menentukan output berdasarkan nilai boolean isPrime
    if (isPrime) {
        cout << n << " Termasuk bilangan PRIMA" << endl;
    } else {
        cout << n << " Bukan termasuk bilangan prima" << endl;
    }

    return 0;
}
