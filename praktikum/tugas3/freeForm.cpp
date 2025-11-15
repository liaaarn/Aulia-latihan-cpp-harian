/*
Nama Program : Asterik
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025
Deskripsi    : Pola berbasis asterik
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 0){
        n++;
    }
    int tengah = n/2;

    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i + j == n-1 || i == tengah || j == tengah){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}