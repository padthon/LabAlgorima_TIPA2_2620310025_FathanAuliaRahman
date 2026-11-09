#include <iostream>

using namespace std;

int main() {
    int tinggi;
    cout << "===================================" << endl;
    cout << "~~ Program C++ Segitiga Bintang ~~" << endl;
    cout << "===================================" << endl;
    
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    // Perulangan untuk baris
    for (int i = 1; i <= tinggi; i++) {
        // Perulangan untuk mencetak bintang sebanyak baris saat ini
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
