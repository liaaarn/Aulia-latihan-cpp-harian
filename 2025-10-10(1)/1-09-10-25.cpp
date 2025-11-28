// Nama Program : sesi 6 - (1)-09/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 9 Oktober 2025
// Deskripsi    : Input suhu dengan for loop
// Dengan fungsi main, inputSuhuBadan, hitungRataSuhu, cetakRataSuhu

#include <iostream>
using namespace std;

void inputSuhuBadan(int &jumlahData, float &total){
    float suhu;
    total = 0;
    jumlahData = 24;

    for(int i = 0; i < jumlahData; i++){
        cout << "Masukkan suhu badan ke - " << (i+1) << " : ";
        cin >> suhu;
        total += suhu;
    }
}

float hitungRataSuhu(int jumlahData, float total){
    return total/jumlahData;
}

void cetakRataSuhu(int jumlahData, float total){
    cout << "Rata-rata suhu selama 24 jam adalah " << hitungRataSuhu(jumlahData, total) << endl;
}

int main(){
    int jumlahData;
    float total;

    inputSuhuBadan(jumlahData, total);
    hitungRataSuhu(jumlahData, total);
    cetakRataSuhu(jumlahData, total);

    return 0;
}
