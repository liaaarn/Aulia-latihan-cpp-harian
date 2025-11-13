/*
Nama Program : Kalkulator desimal biner
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025
Deskripsi    : Konversi ke biner
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string biner = " ";

    // selama n > 0, lakukan konversinya
    while (n > 0){
        // dihitung dan dikoncersi di sini
        biner = char((n%2) + '0') + biner; // char + binner : ini menyusun urutan yang artinya digit baru ditambahkan di depan string lama. Dengan begitu urutannya jadi benar (MSB di kiri).
        // membagi 2 untuk mengambil digit biner berikutnya
        n/=2;
    }

    cout << biner;
    return 0;
}