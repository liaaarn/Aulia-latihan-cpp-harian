/*
Nama Program : Berbagi bebek
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 28 Agustus 2025
Deskripsi    : Membagi bebek dan mengitun sisa. 
*/

#include <iostream>
using namespace std;

void input(int &n, int &m){
    cin >> n; // banyaknya bebek;
    cin >> m; // banyaknya orang yang akan mendapatkan bebek 
}

void bagi(int n, int m){
    int masing = n/m;
    int sisa = n%m;

    cout << "Masing-masing " << masing << endl;
    cout << "Bersisa " << sisa << endl;
}

int main(){
    int n, m;
    input(n,m);

    bagi(n,m);

    return 0;
}