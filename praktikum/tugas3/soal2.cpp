/*
Nama Program : Segitiga asterik
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025 
Deskripsi    : Mencetak segitiga asterik sebesar n yang diinput
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for(int j = 0; j < 1; j++){
            cout << "*";
        } if (1 != n){
            cout << endl;
        }
    }

    return 0;
}

