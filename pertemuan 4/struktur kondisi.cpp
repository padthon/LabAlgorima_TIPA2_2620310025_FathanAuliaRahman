#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string namaSiswa;
    float nilai1, nilai2, nilai3, rataRata;

    // LAYAR MASUKKAN
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nama Siswa : ";
    getline(cin, namaSiswa); // Menggunakan getline agar bisa membaca spasi pada nama
    
    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;
    
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    
    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    // Menghitung Nilai Rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // LAYAR KELUARAN
    cout << "\n----------------------------------------" << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya." << endl;
    
    // Menentukan Hadiah Berdasarkan Nilai Rata-rata
    if (rataRata >= 85) {
        cout << "Hadiah yang didapat adalah Komputer Core i5" << endl;
    } else if (rataRata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000" << endl;
    } else {
        cout << "Hadiah yang didapat adalah Hadiah Hiburan" << endl;
    }

    return 0;
}
