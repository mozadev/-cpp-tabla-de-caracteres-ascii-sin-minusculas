/*
Mostrar la tabla de caracteres ASCII a partir del Código
32 (el espacio en blanco) hasta el Código 164 (o sea la ñ) sin incluir 
las minúsculas (rango del 97 al 122).

Datos de entrada: Ninguno
Datos de salida: Impresión de algunos caracteres ASCII
Restricciones: Ninguna

*/

#include<iostream>
#include<conio.h>


using namespace std;

void main()
{
	int i;
	i = 10;
	cout << "los caracteres ASCII son:  \n";
	for (i = 32; i <= 164; i = i++)
	{
		if (i < 97 || i>122)
			cout << char(i) <<" "<<i<< "\n";
	}

	_getch();

}