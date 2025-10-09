// Nama Program : sesi 5 - (3)-08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Polindrom


#include <iostream>
#include <string>
using namespace std;

void input(string &kata){
    cout << "Masukkan kata : ";
    cin >> kata;
}

void cetak(string kata){
    bool polindrom= true;
    int panjang = kata.length();

    for (int i = 0; i < panjang/2; i++){
        if(kata [i] != kata[panjang - 1 - i]){
            polindrom = false;
            break;
        }
    }

    if (polindrom){
        cout << kata << " adalah polindrom." << endl;
    } else {
        cout << kata << " bukan polindrom." << endl;
    }
}

int main(){
    string kata;

    input(kata);
    cetak(kata);

    return 0;
}