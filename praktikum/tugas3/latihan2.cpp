/*
Nama Program : Looping
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025
Deskripsi    : Mencetak angka sebnayak n, namun apabila > 4, cetak 4 mundur
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n > 4){
        for(int i = n-3; i<=n; i++){
            cout << i << " ";
        }
    } else {
        for (int i = 1; i<=n; i++){
            cout << i << " ";
        }
    }
}