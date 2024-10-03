#include <iostream>
using namespace std;

int nwd(int a, int b) {
    int tmp;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Najwiekszy wspolny dzielnik to: " << nwd(a, b) << endl;

    return 0;
}
