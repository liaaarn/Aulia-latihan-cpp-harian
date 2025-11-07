
// Nama Program : soal10cpp
// Nama         : Aulia Ramdani Nur
// NPM          : 140810240002
// Tanggal buat : 7 November 2025
// Deskripsi    : Bucket sort

#include <iostream>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n) {
    const int bucketCount = 10;
    float buckets[bucketCount][100];
    int bucketSizes[bucketCount] = {0};
    for (int i = 0; i < n; i++) {
        int bucketIndex = bucketCount * arr[i];
        if (bucketIndex >= bucketCount) bucketIndex = bucketCount - 1;
        buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
        bucketSizes[bucketIndex]++;
    }
    for (int i = 0; i < bucketCount; i++) {
        if (bucketSizes[i] > 0) {
            sort(buckets[i], buckets[i] + bucketSizes[i]);
        }
    }
    int index = 0;
    for (int i = 0; i < bucketCount; i++) {
        for (int j = 0; j < bucketSizes[i]; j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

void printArray(float arr[], int n) {
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main() {
    float arr[100];
    int n = 0;
    cout << "Masukkan elemen (pisahkan dengan spasi, akhiri dengan -1): ";
    while (true) {
        float number;
        cin >> number;
        if (number == -1) break;
        arr[n++] = number;
    } 
    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    bucketSort(arr, n);

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}


