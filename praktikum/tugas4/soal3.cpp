/*
Nama Program : Tugas 3
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Reverse angka
*/

#include <iostream>
using namespace std;

int reverseAngka(int n){
    int rev = 0;
    while (n > 0){
        rev = rev * 10 + (n%10);
        n/=10;
    } return rev;
}

int main(){
    int x, y;
    cin >> x;
    cin >> y;

    int xReverse = reverseAngka(x);
    int yReserve = reverseAngka(y);

    int z = xReverse + yReserve;
    int zReverse = reverseAngka(z);

    cout << zReverse;
    
    return 0;
}
