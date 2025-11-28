// Nama Program : sesi 4 - 08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Total gaji pokok tahunan


#include <iostream>
using namespace std;

void input(int &tahun, int &masaKerja, int &golongan){
    cout << "Masukkan tahun : ";
    cin >> tahun;

    cout << "Masukkan masa kerja (bulan) : ";
    cin >> masaKerja;

    cout << "Masukkan golongan : ";
    cin >> golongan;
}

void gaji(int tahun, int golongan, int masaKerja){
    int total;
    if (tahun < 2024 && (golongan == 0 || golongan == 1)){
        total = masaKerja * 2597400;
    } else if(tahun < 2024 && (golongan == 2 || golongan == 3)){
        total = masaKerja * 2660700;
    } else if(tahun < 2024 &&  (golongan == 4 || golongan == 5)){
        total = masaKerja * 2744500;
    } else if(tahun < 2024 &&  (golongan == 6 || golongan == 7)){
        total = masaKerja * 2830900;
    } else if(tahun < 2024 &&  (golongan == 8 || golongan == 9)){
        total = masaKerja * 2920100;
    } else if(tahun >= 2024 && (golongan == 0 || golongan == 1)){
        total = masaKerja * 2785700;
    } else if(tahun >= 2024 &&  (golongan == 2 || golongan == 3)){
        total = masaKerja * 2873500;
    } else if(tahun >= 2024 &&  (golongan == 4 || golongan == 5)){
        total = masaKerja * 2964000;
    } else if(tahun >= 2024 &&  (golongan == 6 || golongan == 7)){
        total = masaKerja * 3057300;
    } else if(tahun >= 2024 &&  (golongan == 8 || golongan == 9)){
        total = masaKerja * 3153600;
    } else {
        cout << "Input tidak valid!" << endl;
    }
    cout << "Total gaji pokok tahun " << tahun << " Rp. " << total << endl;
}

int main(){
    int tahun, golongan, masaKerja;

    input(tahun, masaKerja, golongan);
    gaji(tahun, golongan, masaKerja);

    return 0;
}