#include <iostream>

using namespace std;

int main() {
    
    //Deklaracje
    
    int liczbaOcen;
    float oceny[100];
    float ocena, suma = 0.0;
    float najwyzszaOcena, najnizszaOcena;

    // Tablica dopuszczalnych ocen
    float dopuszczalneOceny[] = {1.0, 1.5, 1.75, 2.0, 2.5, 2.75, 3.0, 3.5, 3.75, 4.0, 4.5, 4.75, 5.0, 5.5, 5.75, 6.0};
    int liczbaDopuszczalnychOcen = sizeof(dopuszczalneOceny) / sizeof(dopuszczalneOceny[0]);
    
    int liczbaWystapien[16] = {0};

    // Pobranie liczby ocen od użytkownika
    cout << "Podaj liczbe ocen (od 3 do 100): ";
    cin >> liczbaOcen;

    // Walidacja
    if (liczbaOcen < 3 || liczbaOcen > 100) {
        cout << "Niepoprawna liczba ocen. Program zakonczy dzialanie." << endl;
        return 1; // Zakończenie programu z błędem
    }

    // Pobranie ocen od użytkownika
    for (int i = 0; i < liczbaOcen; i++) {
        bool poprawnaOcena = false;

        // Walidacja
        while (!poprawnaOcena) {
            cout << "Podaj ocene nr " << i+1 << ": ";
            cin >> ocena;

            for (int j = 0; j < liczbaDopuszczalnychOcen; j++) {
                if (ocena == dopuszczalneOceny[j]) {
                    oceny[i] = ocena;
                    suma += ocena;

                    liczbaWystapien[j]++;

                    if (i == 0) {
                        najwyzszaOcena = ocena;
                        najnizszaOcena = ocena;
                    }

                    if (ocena > najwyzszaOcena) najwyzszaOcena = ocena;
                    if (ocena < najnizszaOcena) najnizszaOcena = ocena;

                    poprawnaOcena = true;
                    break;
                }
            }

            if (!poprawnaOcena) {
                cout << "Niepoprawna ocena! Sprobuj ponownie." << endl;
            }
        }
    }

    // Obliczanie średniej ocen
    float srednia = suma / liczbaOcen;
    cout << "Srednia ocen: " << srednia << endl;

    // Wyświetlanie najwyższej i najniższej oceny
    cout << "Najwyzsza ocena: " << najwyzszaOcena << endl;
    cout << "Najnizsza ocena: " << najnizszaOcena << endl;

    // Wyświetlanie liczby wystąpień każdej oceny
    cout << "Liczba wystapien poszczegolnych ocen:" << endl;
    for (int i = 0; i < liczbaDopuszczalnychOcen; i++) {
        if (liczbaWystapien[i] > 0) {
            cout << dopuszczalneOceny[i] << ": " << liczbaWystapien[i] << " razy" << endl;
        }
    }

    return 0;
}
