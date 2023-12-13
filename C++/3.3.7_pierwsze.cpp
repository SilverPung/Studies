#include <iostream>
#include <cmath>
using namespace std;
bool pierwsza(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    int sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "podaj liczbe: ";
    cin >> number;

    if (pierwsza(number)) {
        cout << number << " jest to liczba pierwsza" << endl;
    } else {
        cout << number << " nie jest to liczba pierwsza." << endl;
    }

    return 0;
}