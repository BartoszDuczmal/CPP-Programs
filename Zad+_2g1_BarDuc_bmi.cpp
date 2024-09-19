#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Definicje
float bmi = 0.0;
bool gender();
float weight();
float height();

int main() {
    cout << "Zad+ -> Program do obliczania BMI" << endl;
    gender();
    bmi = weight() / (pow(2.0, (height() / 100.0 )));
    cout << "Twoje BMI wynosi " << bmi;
}
bool gender()
{
    char temp;
    cout << "Podaj swoja płeć ( M lub K ): ";
    cin >> temp;
    return ( temp == 'M' || temp == 'm' ) ? true : false;
}
float weight()
{
    float temp;
    cout << "Podaj swoją wagę ( XX.X ): ";
    cin >> temp;
    return temp;
}
float height()
{
    float temp;
    cout << "Podaj swój wzrost ( w centymetrach ): ";
    cin >> temp;
    return temp;
}
