// Nama Program : sesi 5 - (2)-08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Asterik


#include <iostream>
using namespace std;

void input(int &n){
    cout << "Input : ";
    cin >> n;
}

void cetak(int n){
    for(int i = 0; i < n; i++){
        int angka = 1;
        for (int j = 0; j <= i; j++){
            cout << angka << " ";
            angka = angka * (i - j)/ (j+1);
        }
        cout << endl;
    }
}

int main(){
    int n;
    input(n);
    cout << endl;
    cout << "Output : " << endl;
    cetak(n);

    return 0;
}