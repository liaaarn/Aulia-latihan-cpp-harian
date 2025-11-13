/*
Nama Program : Perpotongan garis dengan sumbu x
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 28 Agustus 2025
Deskripsi    : Sebuah bilangan real x_0, nilai titik x di mana persamaan garis lurus y = mx + c memotong sumbu X.
*/

#include <iostream>
using namespace std;

void input(float &m, float &c){
    cin >> m; // bil real 1
    cin >> c; // bil real 2
}

void hitung(float m, float c){
    if (m == 0){
        cout << "m tidak boleh 0" << endl;
    } else {
        float x = -c/m;
        cout << x;
    }
}

int main(){
    float m, c;
    input(m, c);

    hitung(m,c);

    return 0;
}

