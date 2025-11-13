/*
Nama Program : Membaca bilangan bulat 4 digit
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : program yang membaca sebuah bilangan bulat dan menentukan apakah bilangan tersebut memiliki tepat 4 digit. Bilangan negatif tetap dihitung digitnya tanpa tanda minus.
*/

#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

void digit(int n){
    if (n >= 1000 && n <= 9999){
        cout << "Ya" << endl;
    } else {
        cout << "Tidak" << endl;
    }
}

int main(){
    int n;
    input(n);

    digit(n);

    return 0;
}