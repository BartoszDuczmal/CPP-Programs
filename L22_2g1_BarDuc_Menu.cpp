#include <iostream>

using namespace std;

void nwd_01() {
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
}

void nwd_02() {
    
    int tmp;
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    cout << "Najwiekszy wspolny dzielnik to: " << tmp << endl;

}

int main() {
    int x;
    cout << "+--------------------------------+" << endl;
    cout << "|        Dostępne zadania        |" << endl;
    cout << "+--------------------------------+" << endl;
    cout << "| 1 - NWD ( Wersja odejmowania ) |" << endl;
    cout << "| 2 - NWD ( Wersja modulo )      |" << endl;
    cout << "+--------------------------------+" << endl << endl;
    cout << "Podaj numer zadania: ";
    cin >> x;
    switch(x) {
        case 1:
            cout << endl << "Włączanie zadania nwd ( wersja odejmowania )..." << endl << endl;
            nwd_01();
            break;
        case 2:
            cout << endl<< "Włączanie zadania nwd ( wersja modulo )..." << endl << endl;
            nwd_02();
            break;
        default:
            cout << endl << "Nieprawidlowe numer zadania!" << endl << endl;
            main();
            break;
    
    }
    return 0;
}
