// Nama Program : sesi 7 - 10/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Array

#include <iostream>
using namespace std;

void inputNilai(int nilai[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nilai mahasiswa ke - " << i+1 << ": ";
        cin >> nilai[i];
    }
}

void cetakNilai(int nilai[], int n){
    cout << "Nilai mahasiswa: ";
    for(int i = 0; i < n; i++){
        cout << nilai[i] << " ";
    }
    cout << endl;
}

double hitungRata(int nilai[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += nilai[i];
    }
    return (double) total/n;
}

int cariMaks(int nilai[], int n){
    int maks = nilai[0];
    for (int i = 0; i < n; i++){
        if(nilai[i] > maks){
            maks = nilai[i];
        }
    }
    return maks;
}

int cariMin(int nilai[], int n){
    int min = nilai[0];
    for(int i = 0; i < n; i++){
        if(nilai[i] < min){
            min = nilai[i];
        }
    }
    return min;
}

void tampilTertinggiTerendah(int nilai[], int n, int maks, int min){
    cout << "Mahasiswa dengan nilai tertinggi (" << maks << "): ";
    for(int i = 0; i < n; i++){
        if(nilai[i] == maks){
            cout << "Ke - " << i + 1 << " ";
        }
    }
    cout << endl;

    cout << "Mahasiswa dengan nilai terendah (" << min << "): ";
    for(int i = 0; i < n; i++){
        if(nilai[i] == min){
            cout << "Ke - " << i + 1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Masukkan jumlah mahasiswa : ";

    cin >> n;
    int nilai[n];

    inputNilai(nilai, n);
    cetakNilai(nilai, n);

    double rata = hitungRata(nilai, n);
    int maks = cariMaks(nilai, n);
    int min = cariMin(nilai, n);

    cout << "Rata-rata nilai : " << rata << endl;
    cout << "Nilai maksimum  : " << maks << endl;
    cout << "Nilai minimum   : " << min << endl;

    tampilTertinggiTerendah(nilai, n, maks, min);

    return 0;
}

