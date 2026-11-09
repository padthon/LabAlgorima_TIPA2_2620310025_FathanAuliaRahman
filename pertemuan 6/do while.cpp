#include <iostream>

using namespace std;

int main() {
    int a, b;
    char lagi;

    // Menggunakan do-while loop untuk menggantikan fungsi 'goto atas'
    do {
        // Membersihkan layar (opsional, pengganti clrscr)
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        cout << "Masukkan Bilangan = ";
        cin >> a;
        
        b = a % 2;

        cout << "Nilai " << a << " % 2 adalah = " << b << endl;
        
        cout << "\nIngin Hitung Lagi [Y/T] : ";
        cin >> lagi;

    // Perulangan akan terus berjalan selama user menginput 'Y' atau 'y'
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}
