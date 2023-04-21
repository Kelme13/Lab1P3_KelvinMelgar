#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Lab 1 Progra 3 \n\n";

    cout << "1. Error Numerico. \n";
    cout << "2. Division en 2 Entradas. \n\n";
    cout << "3. Salir.\n\n";

    cout << "Ingrese una opcion: ";
    int opcion;
    cin >> opcion;

    do
    {
        switch (opcion)
        {
        case 1:
        {
            cout << "Ingrese el valor de N: ";
            int n;
            cin >> n;

            float float_x = 1.0f / n;
            double double_x = 1.0 / n;
            long double longD_x = 1.0L / n;

            float float_s = 0.0f;
            double double_s = 0.0;
            long double longD_s = 0.0L;

            for (int i = 0; i < n; i++)
            {
                float_s += float_x;
                double_s += double_x;
                longD_s += longD_x;
            }

            double d = abs(1.0 - double_s);
            float f = abs(1.0f - float_s);
            long double ld = abs(1.0L - longD_s);

            cout << "Error Numerico usando Double: " << d << endl;
            cout << "Error Numerico usando Float: " << f << endl;
            cout << "Error Numerico usando Long Double: " << ld << endl;
            cout << "\n\n";
        }
        break;

        case 2:
        {

            cout << "Ingrese P: ";
            int p;
            cin >> p;

            cout << "Ingrese A: ";
            int a;
            cin >> a;

            cout << "Ingrese B: ";
            int b;
            cin >> b;

            int m = 0;

            for (int i = p; i > 0; i--)
            {
                if (b > 0)
                {
                    m += a/b;
                }
                
                b--;
            }
            
            cout << "\nM = " << m << "\n";

            break;
        }

        case 3:
            cout << "\nSaliendo\n\n";
            break;

        default:
            cout << "\nOpcion invalida\n\n";
            break;
        }

        cout << "--------------------------------";
        cout << "\n\n1. Error Numerico. \n";
        cout << "2. Division en 2 Entradas. \n\n";
        cout << "3. Salir.\n\n";

        cout << "Ingrese una opcion: ";
        opcion;
        cin >> opcion;

    } while (opcion != 3);

    return 0;
}
