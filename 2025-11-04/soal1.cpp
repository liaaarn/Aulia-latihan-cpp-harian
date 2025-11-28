// Nama Program : soal1.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 4 November 2025
// Deskripsi    : Struct -> Mencari titik tengah dan pencerminan titik di koordinat

#include <iostream>
using namespace std;

struct Koordinat {
    float absis;
    float ordinat;
};

void getTitik(Koordinat &titik) {
    cout << "Masukkan absis = ";
    cin >> titik.absis;
    cout << "Masukkan ordinat = ";
    cin >> titik.ordinat;
}

void printTitik(Koordinat titik) {
    cout << "(" << titik.absis << ", " << titik.ordinat << ")" << endl;  
}

void titikTengah(Koordinat a, Koordinat b) {
    Koordinat T;
    T.absis = (a.absis + b.absis) / 2;
    T.ordinat = (a.ordinat + b.ordinat) / 2;
    cout << "(" << T.absis << ", " << T.ordinat << ")" << endl;  
}

void cerminX(Koordinat a) {
    Koordinat C;
    C.absis = a.absis;
    C.ordinat = -a.ordinat;
    cout << "(" << C.absis << ", " << C.ordinat << ")" << endl;  
}

void cerminY(Koordinat a) {
    Koordinat C;
    C.absis = -a.absis;
    C.ordinat = a.ordinat;
    cout << "(" << C.absis << ", " << C.ordinat << ")" << endl;  
}

int main() {
    Koordinat a, b, c;
    cout << "Input titik a " << endl;
    getTitik(a);
    cout << "Input titik b " << endl;
    getTitik(b);
    cout << "Titik a = ";
    printTitik(a);
    cout << "Titik b = ";
    printTitik(b);

    cout << "Titik tengah = ";
    titikTengah(a,b);

    cout << "Cermin titik a terhadap sumbu X = ";
    cerminX(a);

    cout << "Cermin titik a terhadap sumbu Y = ";
    cerminY(a);

    return 0;
}