#include <iostream>
using namespace std;

int main() {
    int pilihan;
    
    do {
        cout << "========== Selamat Datang ==========" << endl;
        cout << "1. Tentukan Bilangan Genap/Ganjil" << endl;
        cout << "2. Tentukan Bilangan Prima" << endl;
        cout << "0. Hentikan Program" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            int bil;
            cout << "========== Menu Bilangan Genap/Ganjil ==========" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> bil;
            if (bil % 2 == 0) {
                cout << bil << " Bilangan Genap" << endl;
            } else {
                cout << bil << " Bilangan Ganjil" << endl;
            }
            cout << endl;
        } 
        else if (pilihan == 2) {
            int bil;
            int pembagi = 0; // Menggantikan fungsi bool untuk menghitung faktor pembagi
            
            cout << "========== Menu Bilangan Prima ==========" << endl;
            cout << "Masukkan Bilangan : ";
            cin >> bil;
            
            if (bil <= 1) {
                pembagi = 1; // Dianggap bukan prima jika <= 1
            } else {
                for (int i = 2; i * i <= bil; i++) {
                    if (bil % i == 0) {
                        pembagi = 1; // Ditemukan faktor pembagi lain
                        break;
                    }
                }
            }
            
            if (pembagi == 0) {
                cout << bil << " Bilangan Prima" << endl;
            } else {
                cout << bil << " Bukan Bilangan Prima" << endl;
            }
            cout << endl;
        } 
        else if (pilihan == 0) {
            cout << "Program selesai." << endl;
        } 
        else {
            cout << "Pilihan tidak valid!" << endl << endl;
        }
        
    } while (pilihan != 0);

    return 0;
}
