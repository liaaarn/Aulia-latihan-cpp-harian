// Nama Program : sesi 5 - (4)-08/10/2025
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 8 Oktober 2025
// Deskripsi    : Waktu local UTC

#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){
    time_t sekarang = time(0);
    tm *waktuLokal =  localtime(&sekarang);

    cout << "Tahun : " << 1900 + waktuLokal->tm_year << endl;
    cout << "Bulan : " << 1 + waktuLokal->tm_mon << endl;
    cout << "Hari  : " << waktuLokal->tm_mday << endl;
    cout << "Waktu : " << waktuLokal->tm_hour << ":";
    cout << waktuLokal->tm_min << ":";
    cout << waktuLokal->tm_sec << endl;

    char *tanggalWaktu = ctime(&sekarang);
    cout << "Tanggal dan waktu lokal adalah : " << tanggalWaktu;

    tm *waktuUTC = gmtime(&sekarang);
    tanggalWaktu = asctime(waktuUTC);
    cout << "Tanggal dan waktu UTC adalah   : " << tanggalWaktu;

    #ifdef _WIN32
    Sleep(5000);
    #endif

    return 0;
}
