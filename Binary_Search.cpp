#include <iostream>
using namespace std;

int main()
{
    int scenariusze, elementow, ilDoWysz, dane[10000], poszukiwane[10000], rosnacy;

    cin >> scenariusze;
    while (scenariusze > 0)
    {

        cin >> elementow;
        for (int i = 0; i < elementow; i++)
        {
            cin >> dane[i];
        }
        cin >> ilDoWysz;
        for (int i = 0; i < ilDoWysz; i++)
        {
            cin >> poszukiwane[i];
        }
        if (dane[1] > dane[0])
        {
            rosnacy = 1;
        }
        else
        {
            rosnacy = 0;
        }

        for (int i = 0; i < ilDoWysz; i++) {
            int end = 0;
            int lewy = 0;
            int prawy = elementow - 1;
            int srodek = (lewy + prawy) / 2;

            while (!end) {
                if (dane[srodek] == poszukiwane[i]) {
                    cout << srodek << "\n";
                    end = 1;
                }
                else {
                    if ((poszukiwane[i] > dane[srodek]) && (rosnacy)) {
                        lewy = srodek + 1;
                    }
                    else if ((poszukiwane[i] > dane[srodek]) && (rosnacy == 0)) {
                        prawy = srodek - 1;
                    }
                    else if ((poszukiwane[i] < dane[srodek]) && (rosnacy)) {
                        prawy = srodek - 1;
                    }
                    else if ((poszukiwane[i] < dane[srodek]) && (rosnacy == 0)) {
                        lewy = srodek + 1;
                    }
                    srodek = (lewy + prawy) / 2;
                }

                if (lewy == prawy) {
                    if (dane[srodek] == poszukiwane[i]) {
                        cout << srodek << "\n";

                    }
                    else {
                        cout << -1 << "\n";
                    }
                    end = 1;
                }
                else if (prawy < lewy) {
                    end = 1;
                    cout << -1 << "\n";
                }
            }
        }
        scenariusze--;
    }
}