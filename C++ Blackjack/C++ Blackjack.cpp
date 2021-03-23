#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char m[10];
    srand(time(NULL));
    int s1 = 0, x, s2 = 0, as = rand() % 11 + 2;
    if (as == 11 || as == 1)
    {
        cout << "Ai primit as. Scrie <<1>> sau <<11>> depinzand de ce valoare vrei adaugata.";
        cin >> as;
    }
    s1 = s1 + as;
    cout << "puncte: " << s1 << ' ' << ". Scrie <<hit>> daca vrei sa mai adaugi sau <<stand>> daca vrei sa te opresti." << ' ';
    cin >> m;
    while (strcmp(m, "hit") == 0 && s1 <= 21)
    {
        x = rand() % 11 + 2;
        if (x == 11 || x == 1)
        {
            cout << "Ai primit as. Scrie <<1>> sau <<11>> depinzand de ce valoare vrei adaugata.";
            cin >> x;
        }
        s1 = s1 + x;
        if (s1 <= 21)
            cout << "puncte: " << s1 << ' ' << ". Scrie <<hit>> daca vrei sa mai adaugi sau <<stand>> daca vrei sa te opresti." << ' ';
        else
            cout << "puncte: " << s1;
        if (s1 > 21)
        {
            cout << endl << "Ai depasit 21 puncte.";
            break;
        }
        cin >> m;
    }
    while (s2 <= 21)
    {
        x = rand() % 11 + 2;
        if ((s2 + x) <= 21)
            s2 = s2 + x;
        else
            break;
    }
    cout << endl << "Tu: " << s1 << endl << "Dealer-ul: " << s2 << endl;
    if ((s1 > s2 && s1 <= 21) || (s1 <= 21 && s2 > 21))
        cout << "Ai castigat!";
    if (s1 == s2)
        cout << "Remiza.";
    if (s1 < s2 || s1>21)
        cout << "Ai pierdut!";
    return 0;
}
