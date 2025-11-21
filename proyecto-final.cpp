#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	unsigned int opcion = 0;
	bool resultados[5];

	do {

	cout<< "�BIENVENIDOS AL JUEGO MATEMATICO\n\n";
	cout<< "Seleccione la opci�n:\n"<< std::endl;
	cout<< "1. Jugar\n2. Ver las reglas\n3. Salir\n\nSeleccione su opci�n: ";
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
			cout<< "El juego mostrar� cinco operaciones y/o conceptos matem�ticos junto a una serie de cuatro posibles respuestas. El juego consiste en escoger la opci�n correcta.";
			cout<< "\nAl final del juego se calcular�n la cantidad de respuestas correctas e importantes. Si logras por lo menos tres respuestas correctas, ganar�s.\n\n";
			cout<< "Simple, �no es as�?";
			break;

		case 3:
			cout<< "Gracias por jugar. :)";
			return 0;
            cout<< "HOla";
	}


	return 0;
}
