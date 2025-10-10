// Nama Program : sesi 6 - (5)-10/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Faktorial
// Dengan fungsi main, inputBilangan, hitungFaktorial, cetakFaktorial

#include <iostream>
using namespace std;

void inputBilangan(int &n){
    cout << "Masukkan bilangan untuk dihitung faktorialnya (Maks 256)  : ";
    cin >> n;
}

long long hitungFaktorial(int n){
    long long faktorial = 1;
    for (int i = 1; i <= n; i++){
        faktorial *= i;
    }
    return faktorial;
}

void cetakFaktorial(int n){
    cout << "Faktorial dari " << n << " adalah : " << hitungFaktorial(n) << endl;
}

int main(){
    int n;
    inputBilangan(n);
    cetakFaktorial(n);

    return 0;
}