#include <iostream>
#include <string>
using namespace std;

//Definicje
int dot = 20; // Minimalnie 20
string names[6] = {"Maciej", "Marcel", "Tymon", "Kuba", "Mateusz", "Michal"};
string surnames[6] = {"Golab", "Kregiel", "Krasinski", "Kasprzyk", "Sznylc", "Glosny"};
string merge(string, string);
string dots(string, string);

string merge(string name, string surname)
{
    string temp;
    bool isDouble = false;
    char doubleLetter;
    for(int i = 0; i < surname.length(); i++)
    {
        if(surname[i] == '-')
        {
            isDouble = true;
            doubleLetter = surname[i+1];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        temp += name[i];
    }
    temp += '.';
    for(int i = 0; i < (isDouble ? 2 : 3); i++)
    {
        temp += surname[i];
    }
    if(isDouble) 
    {
        temp += doubleLetter;
    }
    return temp;
}
string dots(string name, string surname)
{
    int temp1;
    string temp2;
    temp1 = dot - name.length() - surname.length();
    for(int i = 0; i < temp1; i++)
    {
        temp2 += ' ';
    }
    return temp2;
}
//Główna funkcja
int main()
{
    if(dot >= 20) {
        for(int i = 0; i < 6; i++)
        {
            cout << names[i] << ' ' << surnames[i] << dots(names[i], surnames[i]) << ' ' << merge(names[i], surnames[i]) << endl;
        }
    }
    else
    {
        cout << "Nieprawidłowe dane!";
    }
}
