// Nama Program : sesi 6 - (3)-09/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 9 Oktober 2025
// Deskripsi    : Palindrom
// Dengan fungsi main, inputKata, isPalindrom

#include <iostream>
using namespace std;

void inputKata(string &kata){
    cout << "Masukkan kata : ";
    cin >> kata;
}

void isPalindrom(string kata){
    bool palindrom = true;
    int panjang = kata.length();
    for(int i = 0; i < panjang/2; i++){
        if(kata[i] != kata[panjang - 1- i]){
            palindrom = false;
            break;
        }
    }

    if(palindrom){
        cout << kata << " adalah palindrom." << endl;
    } else {
        cout << kata << " bukan palindrom." << endl; 
    }
}

int main(){
    string kata;

    inputKata(kata);
    isPalindrom(kata);
}

