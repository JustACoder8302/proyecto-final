#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

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

			/*for (unsigned int  i = 0; i < 5; i++) {

				cout<< "Juego #"<< i<< ": \n";
				resultados[i] = juego1();
			}*/
			break;


		case 2:
			cout<< "El juego mostrará cinco operaciones y/o conceptos matemáticos junto a una serie de cuatro posibles respuestas. El juego consiste en escoger la opción correcta.";
			cout<< "\nAl final del juego se calcularán la cantidad de respuestas correctas e importantes. Si logras por lo menos tres respuestas correctas, ganarás.\n\n";
			cout<< "Simple, ¿no es así?";
			break;

		case 3:
			cout<< "Gracias por jugar. :)";
			cout<< "Probando nuevo cambio";
			return 0;
	}


	return 0;
}
