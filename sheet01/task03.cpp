#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, const char **argv)
{
    cout << "Aufgabe 3: Exponentialfunktion\n" << endl;

    float x;
    if (argc < 2)
    {
        cout << "Input: ";
        cin >> x;
    }
    else
    {
        x = atof(argv[1]);
    }

    cout << "exp(" << x << ") = " << exp(x) << endl;

    return 0;
} //main
