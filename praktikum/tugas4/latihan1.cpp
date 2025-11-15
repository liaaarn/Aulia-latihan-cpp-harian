/*
Nama Program : Latihan 1 
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Menghitung jam
*/

#include <iostream>
using namespace std;

void input(int &h, int &m){
    cin >> h; // jam 
    cin >> m; // menit
}

void ubahVariabel(int &h, int &m){
    h = h + 8; // 8 jam kemudian
    m = m + 30; // 30 menit kemudian
    if(m >= 60){
        h = h + (m/60);
        m = m % 60;
    } if (h >= 24){
        h = h % 24;
    }
}

int main(){
    int h, m;
    input(h, m);
    ubahVariabel(h, m);
    cout << h << " " << m;

    return 0;
}