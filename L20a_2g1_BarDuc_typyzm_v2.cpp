#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    //Deklaracje
    double y;
    cout << "Podaj ilość rozegranych rund:" << endl;
    cin >> y;
    int a[(int)y];
    int b[(int)y];
    int c[(int)y];
    float sr[3];
    bool x[3];
    
    //Pobranie wartości od użytkownika
    
    cout << "Podaj punkty drużyny A: \n";
    for(int i = 0;i<y;i++)
    {
        cin>>a[i];
        sr[0] += a[i];
    }
    cout << "Podaj punkty drużyny B: \n";
    for(int i = 0;i<y;i++)
    {
        cin>>b[i];
        sr[1] += b[i];
    }
    cout << "Podaj punkty drużyny C: \n";
    for(int i = 0;i<y;i++)
    {
        cin>>c[i];
        sr[2] += c[i];
    }
    
        //Wyłonienie drużyny, która odpada
    
    if(sr[0] < sr[1] && sr[0] < sr[2])
    {
        x[1] = true;
        x[2] = true;
    } 
    else if(sr[1] < sr[2] && sr[1] < sr[0])
    {
        x[0] = true;
        x[2] = true;
    }
    else if(sr[2] < sr[0] && sr[2] < sr[1])
    {
        x[1] = true;
        x[0] = true;
    }
    else
    {
        x[0] = true;
        x[1] = true;
        x[2] = true;
    }
    
    //Wyświetlenie tabeli
    
    cout << "            |  Druzyna A  |  Druzyna B  |  Druzyna C" << endl;
    cout << " -----------------------------------------------------" << endl;
    
    for(int i = 0;i<y;i++)
    {
        cout << "  Runda " + to_string(i+1) + "   |  " + to_string(a[i]) + "          |  " + to_string(b[i]) + "          |  " + to_string(c[i]) << endl;
    }
    
    sr[0] /= (int)y;
    sr[1] /= (int)y;
    sr[2] /= (int)y;
    
    cout << "  Srednia   |  " + to_string(sr[0]) + "   |  " + to_string(sr[1]) + "   |  " + to_string(sr[2]) << endl;
    
    cout << "  Wyniki    |  " << (x[0] ? "Przechodzi" : "Odpada    ") << " |  " << (x[1] ? "Przechodzi" : "Odpada    ") << " |  " << (x[2] ? "Przechodzi" : "Odpada"); 
    
    return 0;
}