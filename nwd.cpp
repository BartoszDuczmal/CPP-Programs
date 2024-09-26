#include <iostream>
using namespace std;

int nwd(int a, int b) {
    int tmp;  // Kr03: Zmienna tymczasowa
    // Kr02: Dopóki b != 0
    while (b != 0) {
        // Kr03: tmp <- b
        tmp = b;
        // Kr04: b <- a mod b
        b = a % b;
        // Kr05: a <- tmp
        a = tmp;
    }
    // Kr06: Zwróć zawartość zmiennej a - to jest NWD
    return a;
}

int main() {
    int a, b;
    // Kr01: Pobranie liczb: a, b
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    // Obliczanie NWD i wypisanie wyniku
    cout << "Najwiekszy wspolny dzielnik to: " << nwd(a, b) << endl;

    return 0;  // Kr07: KONIEC
}
