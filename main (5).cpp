#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Ingresa número de mes (0 para salir):\n";

    do {
        cin >> mes;

        if (mes == 0) {
            cout << "Adiós.\n";
            break;
        }

        switch (mes) {
            case 1:  cout << "Enero\n"; break;
            case 2:  cout << "Febrero\n"; break;
            case 3:  cout << "Marzo\n"; break;
            case 4:  cout << "Abril\n"; break;
            case 5:  cout << "Mayo\n"; break;
            case 6:  cout << "Junio\n"; break;
            case 7:  cout << "Julio\n"; break;
            case 8:  cout << "Agosto\n"; break;
            case 9:  cout << "Septiembre\n"; break;
            case 10: cout << "Octubre\n"; break;
            case 11: cout << "Noviembre\n"; break;
            case 12: cout << "Diciembre\n"; break;
            default: cout << "Número no válido.\n"; break;
        }

    } while (mes != 0);

    return 0;
}