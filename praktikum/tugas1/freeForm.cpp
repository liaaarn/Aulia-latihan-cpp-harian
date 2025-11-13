/*
Nama Program : Luas dan Keliling Persegi Panjang
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 28 Agustus 2025
Deskripsi    : Membuat program untuk menghitung luas dan keliling persegi panjang.
*/

#include <iostream>
using namespace std;

void input(float &p, float &l){
    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;
}

void luas(float p, float l){
    float luas = p*l;

    cout << "--------------------" << endl;
    cout << "Luas Persegi Panjang" << endl;
    cout << "--------------------" << endl;
    cout << "Luas = " << p << " * " << l << endl;
    cout << "Luas = " << luas << endl;
}

void keliling(float p, float l){
    float keliling = 2*(p+l);

    cout << "------------------------" << endl;
    cout << "Keliling Persegi Panjang" << endl;
    cout << "-------------------------" << endl;
    cout << "Keliling = " << 2 << " * " << "(" << p << "+" << l << ")" << endl;
    cout << "keliling = " << keliling << endl; 
}

int main(){
    float p, l;

    input (p,l);
    luas(p, l);
    keliling(p,l);

    return 0;
}