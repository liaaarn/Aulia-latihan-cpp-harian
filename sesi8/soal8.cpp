// Nama Program : soal8.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Counting sort


#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int output[n];
    int count[100] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i < 100; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100];
    int n = 0;
    cout << "Masukkan elemen (pisahkan dengan spasi, akhiri dengan -1): ";
    while (true) {
        int number;
        cin >> number;
        if (number == -1) break;
        arr[n++] = number;
    }
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    countingSort(arr, n);

    cout << "Array setelah diurutkan: ";

    printArray(arr, n);

    return 0;
}


