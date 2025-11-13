/*
Nama Program : Pencarian bilangan prima
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Kamis, 11 September 2025 
Deskripsi    : Mencetak angka-angka prima dari angka n yang diinput
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i =2; i <= n; i++){
        int j;
        for(int k = 2;j < i; i++){
            if(i%j == 0){
                break;
            }
        } if (j == 1){
            cout << i << " ";
        }
    } return 0;
}