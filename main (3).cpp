#include <iostream>
#include <string>
using namespace std;

void lineDefault(int, int, int, int);
void lineText(string, string, int, int, int);

int main() 
{
    int widthFrame = 100;
    int spaceCharacter = 32;
    int widthCharacter = 45;
    int heightCharacter = 124;
    int cornerCharacter[4] = { 43, 43, 43, 43 };
    
    lineDefault(widthFrame, widthCharacter, cornerCharacter[0], cornerCharacter[1]);
    lineText("Maciej", "Gawron", widthFrame, spaceCharacter, heightCharacter);
    
    return 0;
}

void lineDefault(int widthF, int widthChar, int cornerCharLeft, int cornerCharRight)
{
    string r = "";
    r += (char)cornerCharLeft;
    for(int i = 0; i < (widthF-2); i++)
    {
        r += (char)widthChar;
    }
    r += (char)cornerCharRight;
    cout << r << endl;
}
void lineText(string toLeft, string toRight, int widthF, int spaceChar, int heightChar)
{
    string r = "";
    r += (char)heightChar + " ";
    r += toLeft;
    widthF -= toLeft.length() + toRight.length() + 4;
    for(int i = 0; i < widthF; i++)
    {
        r += (char)spaceChar;
    }
    r += toRight;
    r += " " + (char)heightChar;
    cout << r << endl;
}


