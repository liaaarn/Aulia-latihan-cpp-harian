/*
Nama Program : Max and Min
Nama         : Aulia Ramdnai Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : Menentukan bilangan maksimum dan minimum
*/

#include <iostream>
using namespace std;

void input(int &a, int &b, int &c){
    cin >> a;
    cin >> b;
    cin >> c;
}

void maxmin(int a, int b, int c){
    int max = a;
    if (b > max){
        max = b;
    } if (c > max){
        max = c;
    }

    int min = a;
    if(b < min){
        min = b;
    } if ( c < min){
        min = c;
    }

    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
}

int main(){
    int a, b, c;
    input (a, b, c);

    maxmin(a, b, c);

    return 0;
}

