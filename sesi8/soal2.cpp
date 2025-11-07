// Nama Program : soal2.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : SelectionSort 

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap (arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
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
        arr[n++] = number;
    }

    cout << "Array sebelum diurutkan : ";
    printArray(arr, n);
    selectionSort(arr, n);

    cout << "Array setelah diurutkan : ";
    printArray(arr, n);

    return 0;
}

