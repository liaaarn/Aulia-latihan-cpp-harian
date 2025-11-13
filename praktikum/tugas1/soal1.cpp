/*
Nama Program : Kasir sederhana
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 28 Agustus 2025
Deskripsi    : Program ini akan menghitung total belanja dan kembalian
*/

#include <iostream>
using namespace std;

void input(float &h, float &u){
    cin >> h; // h = harga barang
    cin >> u; // u = uang yang dibayarkan
}

float totalBelanja(float h){
    float ppn = 0.11; // ppn = 11%
    // total setelah ditambah ppn
    float total = h + (ppn * h);
    cout << "Total belanja = " << total << endl;
    return total;
}

void kembalian(float total, float u){
    float kembali = u - total;
    cout << "Kembalian = " << kembali;
}

int main(){
    float h, u;
    input(h, u);

    float total = totalBelanja(h);
    kembalian(u, total);

    return 0;
}

