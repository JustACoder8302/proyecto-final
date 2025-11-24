#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;


unsigned int menuInicial();
bool juego();
bool bonus1();
bool bonus2();

int main() {

    setlocale(LC_ALL, "");

	unsigned int opcion = 0, puntos = 0;
	bool resultados[7];

	do {

        opcion = menuInicial();

        switch (opcion) {

            case 1:

                for (unsigned int  i = 0; i < 5; i++) {

				cout<< "Juego #"<< i<< ": \n";
				resultados[i] = juego();
                }

                cout<< "BONUS #1:\n";
                resultados[5] = bonus1();

                cout<< "BONUS #2:\n";
                resultados[6] = bonus2();

                system("pause");

                break;

            case 2:
                cout<< "El juego mostrará operaciones y/o conceptos matemáticos junto a una serie de cuatro posibles respuestas. El juego consiste en escoger la opción correcta.";
                cout<< "\nAl final del juego, se calcularán la cantidad de respuestas correctas. Si logras por lo menos tres respuestas correctas, ganarás.\n\n";
                cout<< "Simple, no es asi?\n\n";
                system("pause");
                system("cls");

                break;

            case 3:
                cout<< "Gracias por jugar. :)";
                return 0;
        }
	}while (opcion == 2);

	for (unsigned int i = 0; i < 7; i++) {

        if (resultados[i] == true) {

            puntos++;
        }
	}

    system("cls");
    std::cout<< "Fueron muy buenos intentos. Veamos tu puntaje:\n\nPUNTAJE FINAL: "<< puntos<< "\n"<< std::endl;

    if (puntos < 3) {

        std::cout<< "Oh, no. :( Parece que esta vez no lo lograste. Pero no te preocupes, puedes volver a ejecutar este juego cuantas veces quieras para demostrar lo que sabes.";
    }
    else {

        std::cout<< "¡FELICIDADES! LO HAZ LOGRADO. Buen juego. Esperamos verte de regreso pronto. :)/";
    }



	return 0;
}


unsigned int menuInicial() {

    unsigned int opcion;

    do {


	cout<< "BIENVENIDO A MATHS FOR DOOMIES!\n\n";
	cout<< "Seleccione la opcion:\n"<< std::endl;
	cout<< "1. Jugar\n2. Ver las reglas\n3. Salir\n\nSeleccione su opcion: ";
	cin>> opcion;
	system("cls");

	} while (opcion < 1 || opcion > 3);

    return opcion;
}


bool juego() {

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
        cout << "\n ¡Correcto!\n\n";
        return true;
    } else {
        cout << "\n Incorrecto. La respuesta correcta era: " << opciones[correcta] << "\n\n";
        return false;
    }
}

bool bonus1() {

    cout<<"Un triángulo equilatero es aquél...\n\n";
    cout<<"1. En el que todos sus lados son iguales"<< endl;
    cout<<"2. Que tiene un ángulo igual a 90 grados"<< endl;
    cout<<"3. Que tiene dos ángulos iguales"<< endl;
    cout<<"4. Que no es un triángulo"<< endl;

    int respuesta;
    cout << "\nSeleccione su respuesta (1-4): ";
    cin >> respuesta;

    if (respuesta == 1) {
        cout << "\n ¡Correcto!\n\n";
        return true;
    } else {
        cout << "\n Incorrecto. La respuesta correcta era: En el que todos sus lados son iguales."<< "\n\n";
        return false;
    }
}

bool bonus2 () {

    cout<<"La primera derivada de 5 es igual a:\n\n";
    cout<<"1. 2X"<< endl;
    cout<<"2. 7"<< endl;
    cout<<"3. 0"<< endl;
    cout<<"4. 5X"<< endl;;

    int respuesta;
    cout << "\nSeleccione su respuesta (1-4): ";
    cin >> respuesta;

    if (respuesta == 3) {
        cout << "\n ¡Correcto!\n\n";
        return true;
    } else {
        cout << "\n Incorrecto. La respuesta correcta era: 0."<< "\n\n";
        return false;
    }
}
