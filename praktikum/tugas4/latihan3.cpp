/*
Nama Program : Latihan 3
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Pangkat 4
*/

#include <iostream>
using namespace std;

bool pangkat(int n){
    if(n < 1){
        return false;
    } while (n%4 == 0){
        n /= 4;
    } 
    return n == 1;
}

int main(){
    int n;
    cin >> n;

    if(pangkat(n)){
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}

