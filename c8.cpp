// convert decimal to binary,hexa,octa
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <limits>
#include <vector>
#include <iomanip>
using namespace std;

void gotoxy(int x, int y)
{
    const int centerx = 40;
    const int centery = 5;
    COORD coordinate;
    coordinate.X = centerx + x;
    coordinate.Y = centery + y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
void clr()
{
    system("cls");
}
void box()
{
    int x = 35;
    int y = 10;
    gotoxy(0, 0);
    for (int row = 0; row < 1; row++)
    {
        cout << "+"; // this will print the top-left corner
    }
    for (int a = 1; a < x; a++)
    {
        cout << "-"; // this will print the top border line
    }
    for (int row = 0; row < 1; row++)
    {
        cout << "+" << endl; // this will print the top-right corner
    }
    for (int b = 1; b <= y; b++)
    {
        gotoxy(0, b);
        cout << "|"; // this will print the left border line
        for (int c = 1; c < x; c++)
        {
            cout << " "; // this will print the gap spaces
        }
        cout << "|" << endl; // this will print the right border line
    }
    gotoxy(0, 10);
    for (int row = 0; row < 1; row++)
    {
        cout << "+";
    }
    for (int a = 1; a < x; a++)
    {
        cout << "-";
    }
    cout << "+";
    cout << endl;
}
int menu()
{
    int chs;
    while (true)
    {
        box();
        gotoxy(13, 1);
        cout << "Main Menu";
        gotoxy(10, 2);
        cout << "Conversion Program";
        gotoxy(8, 3);
        cout << "[1] Decimal to Binary";
        gotoxy(8, 4);
        cout << "[2] Decimal to Octa";
        gotoxy(8, 5);
        cout << "[3] Decimal to Hexa";
        gotoxy(8, 6);
        cout << "[4] Exit";
        gotoxy(8, 8);
        cout << "Choose a number:[ ]";
        gotoxy(25, 8);
        cin >> chs;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            gotoxy(8, 11);
            cout << "Enter a valid number.";
            _getch();
            clr();
            continue;
        }
        return chs;
    }
}
void dtoBinary(int n)
{
    vector<int> binary;

    if (n == 0)
    {
        gotoxy(5, 5);
        cout << "Binary Form: 0" << endl;
        return;
    }
    while (n > 0)
    {
        binary.push_back(n % 2);
        n /= 2;
    }
    gotoxy(5, 5);
    cout << "Binary: ";
    for (int a = binary.size() - 1; a >= 0; a--)
    {
        cout << binary[a];
    }
    cout << endl;
}
void dtoOcta(int n)
{
    vector<int> octa;

    if (n == 0)
    {
        gotoxy(5, 5);
        cout << "Octal Form: 0" << endl;
        return;
    }

    while (n > 0)
    {
        octa.push_back(n % 8);
        n /= 8;
    }

    gotoxy(5, 5);
    cout << "Octal: ";
    for (int a = octa.size() - 1; a >= 0; a--)
    {
        cout << octa[a];
    }
    cout << endl;
}
void dtoHexa(int n)
{
    if (n == 0)
    {
        gotoxy(5, 5);
        cout << "Hexadecimal Form: 0" << endl;
        return;
    }

    gotoxy(5, 5);
    cout << "Hexadecimal: " << hex << uppercase << n << endl;
}
int main()
{
    clr();
    int chs;
    while (true)
    {
        int chs = menu();
        if (chs == 4)
        {
            gotoxy(10,12); cout << "Exiting program." << endl;
            _getch();
            clr();
            break;
        }
        else if (chs > 4 || chs == 0)
        {
            clr();
            box();
            gotoxy(11, 4);
            cout << "Invalid choice." << endl;
            gotoxy(7, 5);
            cout << "Press any key to Restart \n";
            gotoxy(12, 6);
            cout << "the program.";
            _getch();
            continue;
        }

        int number;
        clr();
        box();
        gotoxy(5, 3);
        cout << "Enter a decimal number: ";
        cin >> number;

        if (chs == 1)
        {
            dtoBinary(number);
        }
        else if (chs == 2)
        {
            dtoOcta(number);
        }
        else if (chs == 3)
        {
            dtoHexa(number);
        }
        gotoxy(5, 8);
        cout << "Press any key to continue...";
        _getch();
        clr();
    }

    return 0;
}