// Nama Program : soal1.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : BubbleSort 

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped; 
    for (int i = 0; i < n - 1; i++) {
        swapped = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); 
                swapped = true; 
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[100];
    int n = 0;
    cout << "Masukkan elemen : ";
    while (true) {
        int number;
        cin >> number;
        if (number == -1) {
            break;
        }
        arr[n++ ] = number;
    }

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}