#include <iostream>

using namespace std;

void sortowaniePrzezWstawianie(int tablica[], int n) {
    for (int i = 1; i < n; ++i) {
        int klucz = tablica[i];
        int j = i - 1;
        while (j >= 0 && tablica[j] > klucz) {
            tablica[j + 1] = tablica[j];
            --j;
        }
        tablica[j + 1] = klucz;
    }
}

int main() {
    const int MAX_SIZE = 100;
    int tablica[MAX_SIZE];
    int liczba;
    int n = 0;
    
    cout << "Podaj liczby do posortowania (wpisz -1 aby zakonczyc): ";
    while (cin >> liczba && liczba != -1) {
        tablica[n++] = liczba;
    }
    
    sortowaniePrzezWstawianie(tablica, n);
    
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    
    return 0;
}
