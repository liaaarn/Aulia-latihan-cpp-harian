/*
Nama Program : Tahun kabisat
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 Sepetember 2025
Deskripsi    : Menentukan apakah tahun kabisat atau bukan
Logika kabisat : Habis dibgai 400 atau habis dibagi 4 tapi tidak habis dibagi 100
*/

#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

void tahunKabisat(int n){
    if((n % 400 == 0) || (n % 4 == 0 && n % 50 != 0)){
        cout << "Kabisat" << endl;
    } else {
        cout << "Bukan kabisat" << endl;
    }
}

int main(){
    int n;
    input(n);
    tahunKabisat(n);

    return 0;
}