#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool juego1();

int main() {

	setlocale(LC_ALL, "");

	unsigned int opcion = 0;
	bool resultados[5];

	do {

	cout<< "¡BIENVENIDOS AL JUEGO MATEMATICO\n\n";
	cout<< "Seleccione la opción:\n"<< std::endl;
	cout<< "1. Jugar\n2. Ver las reglas\n3. Salir\n\nSeleccione su opción: ";
	cin>> opcion;

	system("cls");
	} while (opcion < 1 || opcion > 3);

	switch (opcion) {

		case 1:

			*for (unsigned int  i = 0; i < 5; i++) {

				cout<< "Juego #"<< i<< ": \n";
				resultados[i] = juego1();
			}
			break;

		case 2:
			cout<< "El juego mostrará cinco operaciones y/o conceptos matemáticos junto a una serie de cuatro posibles respuestas. El juego consiste en escoger la opción correcta.";
			cout<< "\nAl final del juego se calcularán la cantidad de respuestas correctas e importantes. Si logras por lo menos tres respuestas correctas, ganarás.\n\n";
			cout<< "Simple, ¿no es así?";
			break;

		case 3:
			cout<< "Gracias por jugar. :)";
			return 0;
	}

	return 0;
}

bool juego1() {

    int a = rand() % 20 + 1;
    int b = rand() % 20 + 1;
    char operadores[] = {'+', '-', '*', '/'};
    char op = operadores[rand() % 4];

    double resultado;

    if (op == '/' && b == 0)
        b = 1;

    switch (op) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/': resultado = (double)a / b; break;
    }

    double opciones[4];
    int correcta = rand() % 4;
    opciones[correcta] = resultado;

    for (int i = 0; i < 4; i++) {
        if (i == correcta) continue;

        double incorrecto;
        do {
            incorrecto = resultado + (rand() % 11 - 5);
        } while (incorrecto == resultado);

        opciones[i] = incorrecto;
    }

    cout << "¿Cuál es el resultado de: " << a << " " << op << " " << b << "?\n\n";

    for (int i = 0; i < 4; i++) {
        cout << i+1 << ". " << opciones[i] << endl;
    }

    int respuesta;
    cout << "\nSeleccione su respuesta (1-4): ";
    cin >> respuesta;

    if (respuesta == correcta + 1) {
        cout << "\n✔ ¡Correcto!\n\n";
        return true;
    } else {
        cout << "\n✘ Incorrecto. La respuesta correcta era: " << opciones[correcta] << "\n\n";
        return false;
    }
}
