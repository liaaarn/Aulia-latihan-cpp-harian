/*
Nama Program : latihan_2
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : 7 Oktober 2025
Deskripsi    : Teka-teki lampu
putaran 1 = toggle lampu kelipatan 1 (1,2,3,4, ... 100)
putaran 2 = toggle lampu kelipatan 2 (2,4,6,8, ... 100)
putaran 3 = toggle lampu kelipatan 3 (3,6,9,12, .... 100)
*/

#include <iostream>
using namespace std;

const int jumlahLampu = 100;
const int batas = 10;
bool lampu[jumlahLampu + 1];

void nyalaLampu(int jumlahLampu, int batas, bool lampu[]){
    for(int i = 0; i <= jumlahLampu ; i++){
        lampu[i] = false;
    }
    for(int jam = 1; jam <= batas; jam++){
        for(int i = jam; i <= jumlahLampu; i++){
            lampu[i] =! lampu[i];
        }
    }

    int nyala = 0;
    for(int i = 1; i <= jumlahLampu; i++){
        if(lampu[i]){
            nyala++;
        }
    }

    cout << nyala << endl;
}

int main(){
    nyalaLampu(jumlahLampu, batas, lampu);

    return 0;
}



