#include <iostream>
using namespace std;

void input(string &nama, int &jamKerja){
    cout << "Masukkan nama pegawai   : ";
    cin >> nama;
    cout << "Masukkan lama jam kerja : ";
    cin >> jamKerja;
}

int totalUpah(int jamKerja){
    int upahPerjam = 5000;
    return upahPerjam * jamKerja;
}

int main(){
    string nama;
    int jamKerja;

    input(nama, jamKerja);
    cout << "Nama pegawai  : " << nama << endl;
    cout << "Honor pegawai : " << totalUpah(jamKerja) << endl;
    cout << endl;
}