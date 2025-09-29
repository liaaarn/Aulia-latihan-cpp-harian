#include <iostream>
using namespace std;

void input(float &diameter){
    cout << "Masukkan diameter lingkaran : ";
    cin >> diameter;
}

float kelilingLingkaran(float diameter){
    float phi = 3.14159;
    return phi * diameter;
}

int main(){
    float diameter;
    input(diameter);
    cout << "Jadi, hasil keliling lingkatan = " << kelilingLingkaran(diameter) << endl;
    cout << endl;

    return 0;
}