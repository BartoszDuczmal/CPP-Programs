#include <iostream>
#include <string>

using namespace std;

struct Student {
    string imie;
    int punkty;
};

// Funkcja obliczająca ocenę
int obliczOcene(double procent) {
    if (procent >= 90) return 6;
    if (procent >= 80) return 5;
    if (procent >= 70) return 4;
    if (procent >= 60) return 3;
    if (procent >= 50) return 2;
    return 1;
}

int main() {
    int maksPunkty;
    
    cout << "Podaj maksymalna liczbe punktow mozliwa do zdobycia: ";
    cin >> maksPunkty;

    // Inicjalizacja dynamicznej tablicy na początek o rozmiarze 1
    int rozmiar = 1;
    Student* studenci = new Student[rozmiar];
    int liczbaStudentow = 0;
    
    while (true) {
        string imie;
        int punkty;

        cout << "Podaj imie studenta (lub wpisz 0, aby zakonczyc): ";
        cin >> imie;

        if (imie == "0") {
            break;
        }

        cout << "Podaj liczbe punktow zdobyta przez " << imie << ": ";
        cin >> punkty;

        // Sprawdzenie czy jest miejsce
        if (liczbaStudentow == rozmiar) {
            
            // Tworzenie wiekszej tablicy
            rozmiar *= 2;
            Student* nowaTablica = new Student[rozmiar];

            for (int i = 0; i < liczbaStudentow; ++i) {
                nowaTablica[i] = studenci[i];
            }

            delete[] studenci;
            studenci = nowaTablica;
        }

        // Dodanie nowego studenta do tablicy
        studenci[liczbaStudentow].imie = imie;
        studenci[liczbaStudentow].punkty = punkty;
        liczbaStudentow++;
    }

    // Wyświetlenie wyników
    cout << "Imie\tPunkty\tProcent\tOcena\n";
    cout << "------------------------------\n";

    for (int i = 0; i < liczbaStudentow; ++i) {
        double procent = (double)studenci[i].punkty / maksPunkty * 100;
        int ocena = obliczOcene(procent);
        cout << studenci[i].imie << "\t" << studenci[i].punkty << "\t" << procent << "%\t" << ocena << endl;
    }

    // Zwolnienie pamięci
    delete[] studenci;

    return 0;
}
