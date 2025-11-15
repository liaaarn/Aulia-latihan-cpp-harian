/*
Nama Program : Tugas 2
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Weird Multiply
*/

#include <iostream>
using namespace std;

int weirdMultiply(int a, int b){
    int hasil = a * b;
    if (a < 0 || b < 0){
        hasil *= 2;
    } else if(a > 0 || b > 0){
        hasil -= 3;
    }

    return hasil;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    cout << weirdMultiply(a,b);
    return 0;
}