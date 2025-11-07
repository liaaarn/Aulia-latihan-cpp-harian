// Nama Program : soal2.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 4 November 2025
// Deskripsi    : Struct -> jumlah biaya parkir

#include <iostream>
using namespace std;

struct Waktu {
    int jam;
    int menit;
    int detik;
};

void inputWaktu(Waktu &w) {
    cout << "Jam   : ";
    cin >> w.jam;
    cout << "Menit : ";
    cin >> w.menit;
    cout << "Detik : ";
    cin >> w.detik;
}

Waktu hitungSelisihWaktu(Waktu datang, Waktu pulang) {
    Waktu selisih;

    int totalDatang = datang.jam * 3600 + datang.menit * 60 + datang.detik;
    int totalPulang = pulang.jam * 3600 + pulang.menit * 60 + pulang.detik;
    int totalSelisih = totalPulang - totalDatang;

    selisih.jam = totalSelisih / 3600;
    totalSelisih %= 3600;
    selisih.menit = totalSelisih / 60;
    selisih.detik = totalSelisih % 60; 

    return selisih;
}

void printSelisih(Waktu s) {
    cout << s.jam << " : " << s.menit << " : " << s.detik << endl;

}

string jenisKendaraan() {
    string jenis;
    cout << "Jenis kendaraan (Mobil/Motor) : ";
    cin >> jenis;
    return jenis;
}

int hitungBiaya(Waktu lama, string jenis) {
    int bayar = 0;
    int jam = lama.jam;

    if (lama.menit > 0 || lama.detik > 0) {
        jam += 1;
    }

    if (jenis == "Mobil" || jenis == "mobil") {
        bayar = 3000 * jam;
    } 
    else if (jenis == "Motor" || jenis == "motor") {
        bayar = 2000 * jam;
    }

    return bayar;
}


int main() {
    Waktu datang, pulang, lama;
    string jenis;
    int bayar;

    cout << "Jam Datang";
    cout << endl;
    inputWaktu(datang);
    cout << endl;

    cout << "Jam Pulang";
    cout << endl;
    inputWaktu(pulang);
    cout << endl;

    lama = hitungSelisihWaktu(datang, pulang);

    cout << "Lama parkir = ";
    printSelisih(lama);

    jenis = jenisKendaraan();
    bayar = hitungBiaya(lama, jenis);

    cout << "Bayar = Rp. " << bayar << endl;

    return 0;
}