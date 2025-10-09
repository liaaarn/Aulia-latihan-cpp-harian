// Nama Program : sesi 5 - (5)-08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Faktorial

#include <iostream>
using namespace std;

void input(int &n){
    cout << "Masukkan bilangan untuk dihitung faktorialnya (Maks 256) : ";
    cin >> n;
}

void faktorial(int n){
    long faktorial = 1;
    for (int i = 1; i <= n; i++){
        faktorial *= i;
    }
    cout << "Faktorial dari " << n << " adalah : " << faktorial << endl; 
}

int main(){
    int n;
    input(n);
    faktorial(n);

    return 0;
}