// Nama Program : sesi 6 - (2)-09/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 9 Oktober 2025
// Deskripsi    : Asterik
// Dengan fungsi main, inputJumlahBaris, cetakSegitigaPascal

#include <iostream>
using namespace std;

void inputJumlahBaris(int &n){
    cout << "Input : ";
    cin >> n;
}

void cetakSegitigaPascal(int n){
    for(int i = 0; i < n; i++){
        int angka = 1;
        for(int j = 0; j <= i; j++){
            cout << angka << " ";
            angka = angka * (i - j)/(j + 1);
        }
        cout << endl;
    }
}

int main(){
    int n;
    inputJumlahBaris(n);
    cetakSegitigaPascal(n);

    return 0;
}