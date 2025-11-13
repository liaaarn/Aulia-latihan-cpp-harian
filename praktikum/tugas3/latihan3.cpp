/*
Nama Program : Looping
Nama         : Aulia Ramdani Nir
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025
Deskripsi    : Mencetak angka mundur sebanyak n yang diinput
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    // i-- mundur, sampai 1
    for(int i = n; i >= 1; i--){
        cout << i << " ";
    }
    return 0;
}