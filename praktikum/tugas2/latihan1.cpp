/*
Nama Program : Membaca sebuah bilangan bulat
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : membuat program yang membaca sebuah bilangan bulat, lalu menampilkan apakah bilangan tersebut Positif, Negatif, atau Nol.
*/

#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

void kondisi(int n){
    if (n > 0){
        cout << "Positif" << endl;
    } else if(n < 0){
        cout << "Negatif" << endl;
    } else {
        cout << "Nol" << endl;
    }
}

int main(){
    int n;
    input(n);
    kondisi(n);

    return 0;
}