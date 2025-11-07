// Nama Program : soal6.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Heap sort

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    } for (int i = n - 1; i > 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
heapSort(arr, n);

cout << "Array setelah diurutkan: ";
printArray(arr, n);

return 0;
}