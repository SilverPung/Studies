#include <iostream>
#include <string>
using namespace std;

string zaszyfrujCezar(const string& wiadomosc, int przesuniecie) {
    string zaszyfrowanaWiadomosc = "";
    for (char c : wiadomosc) {
        if (isalpha(c)) {
            char podstawa = isupper(c) ? 'A' : 'a';
            zaszyfrowanaWiadomosc += ((c - podstawa + przesuniecie) % 26 + podstawa);
        } else {
            zaszyfrowanaWiadomosc += c;
        }
    }
    return zaszyfrowanaWiadomosc;
}

string odszyfrujCezar(const string& zaszyfrowanaWiadomosc, int przesuniecie) {
    string odszyfrowanaWiadomosc = "";
    for (char c : zaszyfrowanaWiadomosc) {
        if (isalpha(c)) {
            char podstawa = isupper(c) ? 'A' : 'a';
            odszyfrowanaWiadomosc += ((c - podstawa - przesuniecie + 26) % 26 + podstawa);
        } else {
            odszyfrowanaWiadomosc += c;
        }
    }
    return odszyfrowanaWiadomosc;
}
int main() {
    string wiadomosc = "Hello, World!";
    int przesuniecie = 3;
    string zaszyfrowanaWiadomosc = zaszyfrujCezar(wiadomosc, przesuniecie);
    cout << "Zaszyfrowana wiadomość: " << zaszyfrowanaWiadomosc <<endl;
    string odszyfrowanaWiadomosc = odszyfrujCezar(zaszyfrowanaWiadomosc, przesuniecie);
    cout << "Odszyfrowana wiadomość: " << odszyfrowanaWiadomosc <<endl;
    return 0;
}

