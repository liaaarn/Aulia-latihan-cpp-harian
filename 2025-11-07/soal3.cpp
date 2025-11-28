// Nama Program : soal3.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Insertion sort

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
        arr[n++] = number;
    }

    cout << "Array sebelum diurutkan : ";
    printArray(arr, n);

    insertionSort (arr, n);

    cout << "Array setelah diurutkan : ";
    printArray(arr, n);

    return 0;
}