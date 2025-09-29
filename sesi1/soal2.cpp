#include <iostream>
using namespace std;

void input(float &arus, float &tahanan){
    cout << "Masukkan arus : ";
    cin >> arus;
    cout << "Masukkan tahanan  : ";
    cin >> tahanan;
}

float tegangan(float arus, float tahanan){
    return arus * tahanan;
}

int main(){
    float arus, tahanan;
    input(arus, tahanan);
    cout << "Jadi, tegangannya = " << tegangan (arus, tahanan) << " volt" << endl;
    cout << endl;

    return 0;
}