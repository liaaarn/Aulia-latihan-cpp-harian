// Nama Program : soal7.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Radix sort

#include <iostream>
using namespace std;

int getDigit(int num, int digitPlace) {
    return (num / digitPlace) % 10;
}

void countingSort(int arr[], int n, int digitPlace) {
    int output[n]; 
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
        int digit = getDigit(arr[i], digitPlace);
        count[digit]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int digit = getDigit(arr[i], digitPlace);
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int getMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void radixSort(int arr[], int n) {
    int maxVal = getMax(arr, n);
    for (int digitPlace = 1; maxVal / digitPlace > 0; digitPlace *= 10) {
        countingSort(arr, n, digitPlace);
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

    radixSort(arr, n);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    
    return 0;
}
