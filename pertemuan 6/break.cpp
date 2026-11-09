#include <iostream>

using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    // Membersihkan layar (opsional, pengganti clrscr)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "Bil-A\t| Bil-B\t| Bil-C" << endl;
    cout << "-----------------------" << endl;

    // Perulangan FOR dengan kondisi break
    for (bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << a << "\t| " << b << "\t| " << c << endl;

        // Jika nilai c sama dengan 13, hentikan perulangan
        if (c == 13) {
            break;
        }
    }

    return 0;
}
