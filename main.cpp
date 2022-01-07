#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, delta;
    double pierwiastek_z_delty, x_1, x_2;

    cout << " Podaj a: ";
    cin >> a;

    cout << " Podaj b: ";
    cin >> b;

    cout << " Podaj c: ";
    cin >> c;

    if(a==0)
        cout << "\n To nie jest rownanie kwadratowe" << endl;

    else
    {
        delta = (b*b)-(4*a*c);
        pierwiastek_z_delty = sqrt(delta);

        cout << "\n delta = " << delta << endl;
        cout << "\n pierwiastek z delty = " << pierwiastek_z_delty << endl;

        if(delta < 0)
            cout << "\n Nie ma miejsc zerowych (nie ma rozwiazania)" << endl;

        else if(delta == 0)
            cout << "\n Miejsce zerowe = " << (-b)/(2*a) << endl;

        else
            {
                x_1 = (-b-sqrt(delta))/(2*a);
                x_2 = (-b+sqrt(delta))/(2*a);

                cout << endl;

                cout << " x_1 = " << x_1 << endl;
                cout << " x_2 = " << x_2 << endl;
            }
        }

    return 0;
}
