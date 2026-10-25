#include <iostream>

using namespace std;

int main() {
    // Deklarasi konstanta dan variabel
    const float phi = 3.14159;
    float r, t, luasLingkaran, volumeTabung;

    cout << "=== PROGRAM MENGHITUNG LUAS LINGKARAN DAN VOLUME TABUNG ===" << endl;
    cout << "Masukkan jari-jari (r): ";
    cin >> r;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> t;

    // Menghitung Luas Lingkaran (L = phi * r * r)
    luasLingkaran = phi * r * r;

    // Menghitung Volume Tabung (V = Luas Lingkaran * tinggi)
    volumeTabung = luasLingkaran * t;

    // Menampilkan Hasil
    cout << "\n--- HASIL PERHITUNGAN ---" << endl;
    cout << "Luas Lingkaran : " << luasLingkaran << endl;
    cout << "Volume Tabung  : " << volumeTabung << endl;

    return 0;
}
