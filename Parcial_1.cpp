#include <iostream>

using namespace std;

int pedirNumero() {
    int numeroEntero;
    cout << "Ingrese un numero: ";
    cin >> numeroEntero;

    return numeroEntero;
}

void anioBisiesto() {
    int numero = pedirNumero();
    int resto4, resto100, resto400;

    resto4 = numero % 4;
    resto100 = numero % 100;
    resto400 = numero % 400;

    if (resto4 == 0 && resto100 !=0) {
        cout << numero << " es un anio bisiesto.";
    } else if (resto4 == 0 && resto100 == 0 && resto400 == 0) {
        cout << numero << " es un anio bisiesto.";
    } else {
        cout << numero << " NO es un anio bisiesto.";
    }

}

void tablaMultiplicarInversa() {
    int numero = pedirNumero();
    int producto;

    for (int i = 10; i>0; --i) {
        producto = numero * i;
        cout << numero << " X " << i << " = " << producto << endl;
    }

}

void fizzBuzz(){
    int numero, resto3, resto5;

    cout << "Ingrese un numero (mayor o igual a 15): ";
    cin >> numero;

    if (numero >= 15) {
      for (int i = 1; i <= numero; ++i) {

        resto3 = i % 3;
        resto5 = i % 5;

        if (resto3 == 0 && resto5 == 0) {
            cout << "FizzBuzz";
            cout << endl;
        } else if (resto3 == 0 && resto5 !=0) {
            cout << "Fizz";
            cout << endl;
        } else if (resto3 != 0 && resto5 ==0) {
            cout << "Buzz";
            cout << endl;
        } else {
            cout << i;
            cout << endl;
        }

        }
    } else {
        cout << "Ingrese un numero mayor a 15";
    }


}

int main() {
    int opcion;

    do {
        cout << "Menu de Opciones\n\n";
        cout << "1. Anio Bisiesto\n";
        cout << "2. Tabla de Multiplciar Inversa\n";
        cout << "3. Fizz Buzz\n";
        cout << "4. Salir\n";
        cin >> opcion;
        cout << endl;

        switch (opcion) {

            case 1:
                cout << "Anio Bisiesto\n\n";
                anioBisiesto();
                cout << endl;
                break;

            case 2:
                cout << "Tabla de Multiplicar Inversa\n\n";
                tablaMultiplicarInversa();
                break;

            case 3:
                cout << "Fizz Buzz\n\n";
                fizzBuzz();
                break;

            case 4:
                cout << "Hasta la proxima";
                break;

            default:
                cout << "Opcion no valida\n";
                break;

        }
    cout << endl;

    } while (opcion != 4);

    return 0;
}
