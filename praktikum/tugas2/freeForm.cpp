/*
Nama Program : Floor and Ceiling
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : Menentukan nilai floor dan ceiling dari bilangan real N.
Nilai floor   : bilangan bulat terbesar yang masih lebih kecil daripada atau sama dengan bilangan tersebut.
Nilai ceiling : bilangan bulat terkecil yang masih lebih besar daripada atau sama dengan bilangan tersebut.
*/

#include <iostream>
using namespace std;

void input(double &n){
    cout << "Masukkan angka : ";
    cin >> n;
}

void floorAndCeiling(double n){
     long long t = (long long) n;
    long long floorVal, ceilVal;

    if (n == t){
        floorVal = t;
        ceilVal = t;
    } else if (n>0){
        floorVal = t;
        ceilVal = t + 1;
    } else {
        floorVal = t - 1;
        ceilVal = t;
    }
    cout << "Floor: " << floorVal << endl;
    cout << "Ceiling: " << ceilVal << endl;
}

int main(){
    double n;
    input(n);
    floorAndCeiling(n);

    return 0;
}
