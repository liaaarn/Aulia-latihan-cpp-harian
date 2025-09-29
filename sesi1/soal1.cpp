#include <iostream>
using namespace std;

void input(float &a, float &b, float &c){
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    cout << "Masukkan nilai c : ";
    cin >> c;
}

float rerata(float a, float b, float c){
    return (a+b+c)/3;
}

int main(){
    float a,b,c;
    input(a, b, c);
    cout << "Jadi, rata-rata dari 3 buah bilangan yang diinput = " << rerata(a, b, c) << endl;
    cout << endl;

    return 0;
}