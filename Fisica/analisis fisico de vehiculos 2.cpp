#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	float masa = 0, presion = 0, volumen = 0, temperatura = 0;
	int vehiculos;
	float promedio_masa = 0;
	
	printf("Ingrese la cantidad de Veh�culos: ");
	scanf("%d", &vehiculos);
	
	int i = 1;
	do {
		masa = 0;
		printf("\nVeh�culo %d: ", i);
		printf("\nIngrese la masa: ");
		scanf("%f", &masa);
		printf("Ingrese la presi�n: ");
		scanf("%f", &presion);
		printf("Ingrese el volumen: ");
		scanf("%f", &volumen);
		printf("Ingrese la temperatura: ");
		scanf("%f", &temperatura);
		
		masa = (presion*volumen)/(0.37*(temperatura + 460));
		
		promedio_masa += masa;
		printf("La masa del veh�culo es de %.2f\n", masa);
		
		i++;
	} while(i<=vehiculos);
	
	printf("\n\nEl promedio de masa de los %d vehiculos es de: %.2f", vehiculos, (promedio_masa/vehiculos));
	
	return 0;
}

