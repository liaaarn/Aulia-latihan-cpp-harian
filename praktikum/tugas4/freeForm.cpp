/*
Nama Program : Tugas 4 freeform
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Fungsi akar kuadrat
*/

#include <iostream>
using namespace std;

double akar(double x){
    double r = x;
    for (int i = 0;  i < 20; i++){
        r = (r+x/r)/2;
    }
    return r;
}

int main(){
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double D = b*b - 4*a*c;

    if(D < 0){
        cout << "Akar imajiner!" << endl;
    } else {
        double x1 = (-b + akar(D)) / (2*a);
        double x2 = (-b - akar(D)) / (2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    return 0;
}
