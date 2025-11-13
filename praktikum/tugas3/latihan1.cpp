/*
Nama Program : Looping
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025
Deskripsi    : Mencetak angka sebanyak n yang di input (dari 0)
misal in[ut 12 = 0 1 2 3 4 5 6 7 8 9 10 11 12 karen i <= n
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++){
        cout << i << " ";
    }

    return 0;
}