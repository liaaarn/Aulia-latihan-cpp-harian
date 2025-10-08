// Nama Program : sesi 5 - (1)-08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Input suhu dengan for loop

#include <iostream>
using namespace std;

void input(int &jumlahData, float &total){
    float suhu;
    total = 0;
    jumlahData = 24;
    for (int i = 0; i < jumlahData; i++){
        cout << "Masukkan suhu badan ke " << (i+1) << " : ";
        cin >> suhu;
        total += suhu;
    }
}

void rerataSuhu(int jumlahData, float total){
    float rerata = total/jumlahData;
    cout << "Rata-rata suhu selama 24 jam adalah " << rerata << endl;
}

int main(){
    float total;
    int jumlahData;

    input(jumlahData, total);
    rerataSuhu(jumlahData, total);

    return 0;
}

