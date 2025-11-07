// Nama Program : soal5.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Quick sort

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    while (true){
        int number;
        cin >> number;
        if (number == -1) {
            break;
        }
        arr[n++] = number;
    }
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    
    cout << "Array setelah diurutkan: ";
    printArray(arr, n);
    
    return 0;
}