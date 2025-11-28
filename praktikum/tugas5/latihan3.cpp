/*
Nama Program : latihan_3
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : 7 Oktober 2025
Deskripsi    : Stok gudang 
*/

#include <iostream>
using namespace std;

void stokGudang(){
    int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

    int totalSisa = 0;

    for(int i =0; i < 10; i++){
        totalSisa += beli[i] - jual[i];
    }

    cout << totalSisa;
}

int main(){
    stokGudang();

    return 0;
}
