// Nama Program : soal4.cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Merge sort

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid -left + 1;
    int n2 = right - mid;
    int *L = new int[n1];
    int *R = new int[n2];

    for(int i = 0; i < n1; i++) {
        L[i] = arr[left + 1];
    }

    for(int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = R[j];
        j++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n = 0;

    cout << "Masukkan eemen : ";
    while (true) {
        int number;
        cin >> number;
        if(number == -1){
            break;
        }
        arr[n++] = number;
    }

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}