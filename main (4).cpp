#include <iostream>
using namespace std;

int main() {
    int total = 0, menores25 = 0, rango25_75 = 0, mayores75 = 0;
    int num;

    cout << "Ingresa números (negativo para terminar):\n";

    do {
        cin >> num;

        if (num < 0) {
            break;
        }

        total++;
        if (num < 25) {
            menores25++;
        } else if (num > 75) {
            mayores75++;
        } else {
            rango25_75++;
        }

    } while (true);

    cout << "Total: " << total << "\n";
    cout << "Menores a 25: " << menores25 << "\n";    cout << "25 a 75: " << rango25_75 << "\n";
    cout << "Mayores a 75: " << mayores75 << "\n";

    return 0;
}