#include <iostream>
using namespace std;

// Funkcja do zamiany dwóch elementów
void zamien(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Funkcja partycjonująca, która umieszcza element osiowy na swojej właściwej pozycji
int partycjonuj(int arr[], int left, int right) {
    int osiowy = arr[right];
    int i =  (left - 1);

    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < osiowy) {
            i++;
            zamien(&arr[i], &arr[j]);
        }
    }
    zamien(&arr[i + 1], &arr[right]);
    return (i + 1);
}

// Funkcja sortująca Quick Sort
void quickSort(int arr[], int left, int right) {
    if  (left < right) {
        int pi = partycjonuj(arr, left, right);

        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

// Funkcja do wyświetlania tablicy
void wyswietlTablice(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Kod główny
int main() {
    int arr[] = { 8, 5, 1, 0, 3, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Tablica pierwotna: ";
    wyswietlTablice(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Tablica posortowana: ";
    wyswietlTablice(arr, n);

    return 0;
}
