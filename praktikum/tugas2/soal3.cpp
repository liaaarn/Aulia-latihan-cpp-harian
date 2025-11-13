/*
Nama Program : Centarl Park
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : Menghitung parkir
1 = motor --> 2000/jam
2 = monil --> 5000/jam
3 = bus --> 10000/jam
*/

#include <iostream>
using namespace std;

void input(int &jenis, int &jam){
    cin >> jenis;
    cin >> jam;
}

void parkir(int jenis, int jam){
    int harga = 0;
    if (jenis == 1){
        harga = 2000;
    } else if (jenis == 2){
        harga = 5000;
    } else if (jenis == 3){
        harga = 10000;
    }
    int totalParkir = jam * harga;
    cout << "Total parkir : Rp. " << totalParkir << endl;
}

int main(){
    int jenis, jam;

    input(jenis, jam);

    parkir(jenis, jam);

    return 0;
}



