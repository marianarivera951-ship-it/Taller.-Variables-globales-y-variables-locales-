#include <iostream>
using namespace std;

int main() {
    const int MAX = 20;
    char vocales[MAX];
    char consonantes[MAX];
    int contVocales = 0;
    int contConsonantes = 0;
    char c;

    cout << "Ingresa letras (x o X para terminar):\n";

    do {
        cin >> c;

        if (c == 'x' || c == 'X') {
            break;
        }

        // Solo aceptar letras y clasificar
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            if (contVocales < MAX) {
                vocales[contVocales++] = c;
            }
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (contConsonantes < MAX) {
                consonantes[contConsonantes++] = c;
            }
        }
        // números y símbolos se ignoran

    } while (true);

    cout << "Vocales: ";
    for (int i = 0; i < contVocales; i++) {
        cout << vocales[i] << " ";
    }
    cout << "\nConsonantes: ";
    for (int i = 0; i < contConsonantes; i++) {
        cout << consonantes[i] << " ";
    }
    cout << endl;

    return 0;
}