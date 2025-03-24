// Laboratorio8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
// Función recursiva para calcular el factorial
int factorial(int n) {
	if (n < 0) {
		throw invalid_argument("Error: Factorial de un número negativo no está definido.");
	}
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}
int main() {
	try {
		int numero;
		cout << "Introduce un numero para calcular el factorial: ";
		cin >> numero;
		int resultado = factorial(numero);
		cout << "El factorial de " << numero << " es: " << resultado << endl;
	}
	catch (const exception& e) {
		cerr << "Excepción capturada: " << e.what() << endl;
	}
	catch (...) {
		cerr << "Se ha producido un error desconocido." << endl;
	}
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
