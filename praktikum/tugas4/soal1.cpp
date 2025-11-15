/*
Nama Program : Tugas 1
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 19 September 2025
Deskripsi    : Convert Temperature
*/

#include <iostream>
using namespace std;

double toCelcius(double f){
    return (f-32) * 5.0/9.0;
}

double toFahrenheit(double c){
    return (9.0/5.0 * c) + 32;
}

double toKelvin(double c){
    return c + 273.15;
}

int main(){
    double suhu;
    char tipe;
    cin >> suhu >> tipe;

    if (tipe == 'C' || tipe == 'c'){
        cout << "Fahrenheit: " << toFahrenheit(suhu) << endl;
        cout << "Kelvin: " << toKelvin(suhu);
    } else if (tipe == 'F' || tipe == 'f'){
        double c = toCelcius(suhu);
        cout << "Celsius: " << c << endl;
        cout << "Kelvin: " << toKelvin(c);
    } else if (tipe == 'K' || tipe == 'k'){
        double c = suhu - 273.15;
        cout << "Celsius: " << c << endl;
        cout << "Fahrenheit: " << toFahrenheit(c);
    }

    return 0;
}