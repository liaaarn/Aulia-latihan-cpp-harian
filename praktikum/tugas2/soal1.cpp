/*
Nama Program : Fizz Buzz
Nama         : Aulia Ramdani Nur
NPM          : 140810240002
Tanggal Buat : Jumat, 5 September 2025
Deskripsi    : Pemainan sederhana bernama FizzBuzz
FizzBuzz --> habis dibagi 3 dan habis dibagi 5
Fizz --> habis dibagi 3
Buzz --> habis dibagi 5
angka sendiri --> tidak habis dibagi 3 dan 5
*/

#include <iostream>
using namespace std;

void input(int &n){
    cin >> n;
}

void game(int n){
    if (n%3 == 0 && n%5 == 0){
        cout << "FizzBuzz" << endl;
    } else if(n % 3 == 0){
        cout << "Fizz" << endl;
    } else if(n %5 == 0){
        cout << "Buzz" << endl;
    } else {
        cout << n << endl;
    }
} 

int main(){
    int n;
    
    input(n);
    game(n);

    return 0;
}