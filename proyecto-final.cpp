#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>

using namespace std;


unsigned int menuInicial();

int main() {

    setlocale(LC_ALL, "");

	unsigned int opcion = 0;
	bool resultados[5];

	do {

        opcion = menuInicial();

        switch (opcion) {

            case 1:

                /*for (unsigned int  i = 0; i < 5; i++) {

                    cout<< "Juego #"<< i<< ": \n";
                    resultados[i] = juego1();
                }*/
                break;


            case 2:
                cout<< "El juego mostrara cinco operaciones y/o conceptos matematicos junto a una serie de cuatro posibles respuestas. El juego consiste en escoger la opcion correcta.";
                cout<< "\nAl final del juego se calcularan la cantidad de respuestas correctas. Si logras por lo menos tres respuestas correctas, ganaras.\n\n";
                cout<< "Simple, no es asi?\n\n";
                system("pause");
                system("cls");

                break;

            case 3:
                cout<< "Gracias por jugar. :)";
                return 0;
        }
	}while (opcion == 2);


	return 0;
}


unsigned int menuInicial() {

    unsigned int opcion;

    do {


	cout<< "BIENVENIDOS AL JUEGO MATEMATICO!\n\n";
	cout<< "Seleccione la opcion:\n"<< std::endl;
	cout<< "1. Jugar\n2. Ver las reglas\n3. Salir\n\nSeleccione su opcion: ";
	cin>> opcion;
	system("cls");

	} while (opcion < 1 || opcion > 3);

    return opcion;
}
