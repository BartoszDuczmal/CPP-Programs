#include <iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;

int iterations = 0;

bool isPrime(int p) {
    if (p < 2) return false;
    if (p == 2) return true;
    if (p % 2 == 0) return false;

    for (int i = 3; i * i <= p; i += 2) {
        iterations++;
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}
bool isPrime_v1(int p) {
    //if (p < 2) return false;
    for (int i = 2; i < p; ++i) {
        iterations++;
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}
bool isPrime_v2(int p) {
    //if (p <= 1) return false;
    
    for (int i = 2; i * i <= p; i += 1) {
        iterations++;
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}
bool isPrime_v3(int p) {
    //if (p < 2) return false;

    for (int i = 2; i * i <= p; i += 1) {
        iterations++;
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int number;
    cout << "Podaj liczbe do sprawdzenia: ";
    cin >> number;
    //------------------------------------------------------------------------------------
    auto start = high_resolution_clock::now();

    bool result = isPrime(number);
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);

    cout << "Czy liczba " << number << " jest pierwsza? " << (result ? "Tak" : "Nie") << endl;
    cout << "Czas wykonania: " << duration.count() << " nanosekund." << endl;
    cout << "Liczba iteracji: " << iterations << endl << endl;
    iterations = 0;
    //------------------------------------------------------------------------------------
    auto start1 = high_resolution_clock::now();

    bool result1 = isPrime_v1(number);
    
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(end1 - start1);

    cout << "Czy liczba " << number << " jest pierwsza? " << (result1 ? "Tak" : "Nie") << endl;
    cout << "Czas wykonania: " << duration1.count() << " nanosekund." << endl;
    cout << "Liczba iteracji: " << iterations << endl << endl;
    iterations = 0;
    //------------------------------------------------------------------------------------
    auto start2 = high_resolution_clock::now();

    bool result2 = isPrime_v2(number);
    
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(end2 - start2);

    cout << "Czy liczba " << number << " jest pierwsza? " << (result2 ? "Tak" : "Nie") << endl;
    cout << "Czas wykonania: " << duration2.count() << " nanosekund." << endl;
    cout << "Liczba iteracji: " << iterations << endl << endl;
    iterations = 0;
    //------------------------------------------------------------------------------------
    auto start3 = high_resolution_clock::now();

    bool result3 = isPrime_v3(number);
    
    auto end3 = high_resolution_clock::now();
    auto duration3 = duration_cast<nanoseconds>(end3 - start3);

    cout << "Czy liczba " << number << " jest pierwsza? " << (result3 ? "Tak" : "Nie") << endl;
    cout << "Czas wykonania: " << duration3.count() << " nanosekund." << endl;
    cout << "Liczba iteracji: " << iterations << endl << endl;

    return 0;
}
