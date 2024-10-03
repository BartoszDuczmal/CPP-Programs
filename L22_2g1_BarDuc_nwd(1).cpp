#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Kr01: Pobranie liczb a, b
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    // Kr02: Dopóki a != b, wykonuj krok Kr03
    while (a != b) {
        // Kr03: Jeśli a < b, to b <- b - a, w przeciwnym razie a <- a - b
        if (a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
    }

    // Kr04: Wypisz zawartość zmiennej a (lub b) - to jest NWD
    cout << "NWD: " << a << endl;

    // Kr05: KONIEC
    return 0;
}
