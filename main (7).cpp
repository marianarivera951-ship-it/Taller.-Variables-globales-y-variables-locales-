#include <iostream>
using namespace std;

int main() {
    int catA = 0, catB = 0, catC = 0, catD = 0;
    double peso, talla;

    cout << "Clasificación de 6 alumnos:\n";

    for (int i = 0; i < 6; i++) {
        cout << "Alumno " << i + 1 << " peso (kg): ";
        cin >> peso;
        cout << "Talla (m): ";
        cin >> talla;

        if (peso < 40.0 && talla < 1.55) {
            catA++;
        } else if (peso >= 40.0 && peso <= 50.0 && talla >= 1.55 && talla <= 1.65) {
            catB++;
        } else if (peso > 50.0 && peso < 60.0 && talla >= 1.65 && talla <= 1.70) {
            catC++;
        } else if (peso >= 60.0 && talla > 1.70) {
            catD++;
        }
    }

    cout << "\nCategorías:\n";
    cout << "A: " << catA << "\n";
    cout << "B: " << catB << "\n";
    cout << "C: " << catC << "\n";
    cout << "D: " << catD << "\n";

    return 0;
}