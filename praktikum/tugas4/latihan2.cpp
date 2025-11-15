/*
Nama Program : Latihan 2
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Program sigma yang dapat menghitung nilai 
*/

#include <iostream>
using namespace std;

void input(int &n, int &m, float &c){
    cin >> n;
    cin >> m;
    cin >> c;
}

int pangkat(int n, int m){
    int hasil = 1;
    for(int i = 0; i < m; i++){
        hasil *= n;
    }
    return hasil;
}

float sigma(int n, int m, float c){
    float total = 0;
    for(int i = 0; i <=n; i++){
        total += pangkat(i, m) + c;
    }
    return total;
}

int main(){
    int n, m;
    float c;
    input(n, m, c);
    cout << sigma (n,m,c);

    return 0;
}