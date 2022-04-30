/*
* Escriba un programa en c++, usando funciones, que reciba un valor de distancia en metros y/o cm y la devuelva en yardas, pies y pulgadas 
*/
#include <iostream>
using namespace std;

int opcion = 1;
// Declaraci�n de la funci�n
double yardas(double valor);
double pies(double valor);
double pulgadas(double valor);

int main() {
	double distancia;
	cout << "En qu� valor deseas calcular la distancia: \n1. Metros\n2. Cent�metros" << endl;
	cin >> opcion;
	
	cout << "Ingrese la distancia: ";
	cin >> distancia;
	cout << endl;
	
	if (opcion == 1){
		//Metros
		cout << distancia << " metro(s) equivale a: " << endl;
		cout << yardas(distancia) << " yardas" << endl;
		cout << pies(distancia) << " pies" << endl;
		cout << pulgadas(distancia) << " pulgadas" << endl;
	} else if (opcion == 2) {
		// centimetimetros
		cout << distancia << " cent�metro(s) equivale a: " << endl;
		cout << yardas(distancia) << " yardas" << endl;
		cout << pies(distancia) << " pies" << endl;
		cout << pulgadas(distancia) << " pulgadas" << endl;
	} else {
		cout << "NO ha digitado la opci�n correcta.";
	}
	
	return 0;
}

// Definici�n de las funciones
double yardas(double valor){
	const double yardasMetro = 1.09361;
	if (opcion == 1)
		return valor * yardasMetro;
	else if (opcion == 2) {
		return (valor/100)*yardasMetro;
	}
}

double pies(double valor){
	const double piesMetro = 3.28084;
	if (opcion == 1)
		return valor * piesMetro;
	else if (opcion == 2) {
		return (valor/100)*piesMetro;
	}
}

double pulgadas(double valor){
	const double pulgadasMetro = 39.3701;
	if (opcion == 1)
		return valor * pulgadasMetro;
	else if (opcion == 2) {
		return (valor/100)*pulgadasMetro;
	}
}

