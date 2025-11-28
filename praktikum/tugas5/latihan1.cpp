/*
Nama Program : latihan_1
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : 6 Oktober 2025
Deskripsi    : Pemulihan string
*/

#include <iostream>
using namespace std;

void input(string &kalimat, int &n){
    cin >> kalimat;
    cin >> n;
}

void perbaikan(string kalimat, int n){
    if (n < 0 || n > kalimat.length()){
        cout << "Jumlah karakter sampah tidak valid" << endl;
    } else {
        string depan = kalimat.substr(0, n);
        string belakang = kalimat.substr(n);

        string hasil = belakang + depan;

        cout << hasil << endl;
    }
}

int main(){
    string kalimat;
    int n;

    input(kalimat, n);
    perbaikan(kalimat,n);

    return 0;
}

