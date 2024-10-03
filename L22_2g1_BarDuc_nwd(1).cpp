#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    while (a != b) {
        if (a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
    }

    cout << "NWD: " << a << endl;

    return 0;
}
