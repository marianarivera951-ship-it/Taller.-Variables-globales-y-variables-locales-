#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLEADOS = 20;
    double salarioNeto[NUM_EMPLEADOS];
    double totalSalarios = 0.0;

    cout << "Ejercicio 4: salarios netos de " << NUM_EMPLEADOS << " empleados.\n";

    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        double horas, tarifa;
        cout << "Empleado " << i + 1 << ":\n";
        cout << "Horas trabajadas en la semana: ";
        cin >> horas;
        cout << "Tarifa por hora: ";
        cin >> tarifa;

        double bruto = 0.0;
        if (horas <= 35) {
            bruto = horas * tarifa;
        } else {
            double horasExtra = horas - 35;
            bruto = 35 * tarifa + horasExtra * tarifa * 1.5;
        }

        double sueldoMensual = bruto * 4.0;
        double impuestoMensual = 0.0;

        if (sueldoMensual > 1050000.0) {
            impuestoMensual += (200000.0 * 0.20);
            impuestoMensual += ((sueldoMensual - 1050000.0) * 0.30);
        } else if (sueldoMensual > 850000.0) {
            impuestoMensual += ((sueldoMensual - 850000.0) * 0.20);
        }
        // <=850000: 0% impuesto

        double impuestoSemanal = impuestoMensual / 4.0;
        salarioNeto[i] = bruto - impuestoSemanal;
        totalSalarios += salarioNeto[i];   // sumar al total
    }

    cout << fixed << setprecision(2);
    cout << "\nSalarios netos semanal de cada empleado:\n";
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        cout << "Empleado " << i + 1 << ": $" << salarioNeto[i] << "\n";
    }
    cout << "Total de salarios netos (20 empleados): $" << totalSalarios << endl;

    return 0;
}