// practico 3.cpp : Defines the entry point for the console application.
//


#include "stdlib.h"
#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<vector>
#include<iostream>
using namespace std;


int main()
{
	int resp = 1;
	do {
		cout << "\nMENU";
		cout << "\n1.Mostrar sizeof de los distintos tipos de datos";
		cout << "\n2.Mostrar mostrar el valor de una variable en decimal, hexa, octal y caracter";
		cout << "\n3.Mostrar limites numericos para los diferentes tipos de datos";
		cout << "\n4.Mostrar el resultado de las variables a y b";
		cout << "\n5.Array";
		cout << "\ningrese una opcion\n";

		cin >> resp;

		switch (resp) {
		case 1:
		{
			cout << "\nel valor de la variable short es de " << sizeof(short) << " bytes" << endl;
			cout << "\nel valor de la variable int es de " << sizeof(int) << " bytes" << endl;
			cout << "\nel valor de la variable float es de " << sizeof(float) << " bytes" << endl;
			cout << "\nel valor de la variable double es de " << sizeof(double) << " bytes" << endl;
			cout << "\nel valor de la variable long es de " << sizeof(long) << " bytes" << endl;
			cout << "\nel valor de la variable long long es de " << sizeof(long long) << " bytes" << endl;
			cout << "\nel valor de la variable size_t es de " << sizeof(size_t) << " bytes" << endl;
			cout << "\nLos tamaños varían dependiendo de la arquitectura de la computadora en la que se ejecuta el programa.";
			break;
		}
		case 2:
		{
			char a = 65;
			printf("\nDecimal: %d", a);
			printf("\nHexadecimal: %x", a);
			printf("\nOctal: %o", a);
			printf("\nChar: %c", a);
			break;
		}
		case 3:
		{
			cout << "short max: " << numeric_limits<short>::max << endl;
			cout << "short min: " << numeric_limits<short>::min << endl;
			cout << "int max: " << numeric_limits<int>::max << endl;
			cout << "int min: " << numeric_limits<int>::min << endl;
			cout << "float max: " << numeric_limits<float>::max << endl;
			cout << "float min: " << numeric_limits<float>::min << endl;
			cout << "double max: " << numeric_limits<double>::max << endl;
			cout << "double min: " << numeric_limits<double>::min << endl;
			cout << "long max: " << numeric_limits<long>::max << endl;
			cout << "long min: " << numeric_limits<long>::min << endl;
			cout << "long long max: " << numeric_limits<long long>::max << endl;
			cout << "long long min: " << numeric_limits<long long>::min << endl;
			break;
		}
		case 4:
		{
			int a = 0xFFFFFFFF;
			unsigned int b = 0xFFFFFFFF;
			cout << a << endl;
			cout << b << endl;
			cout << "\nLa diferencia es que al tomar los signos se interpretan muchos mas valores, por lo que el valor de la variable cambia.";
			break;
		}
		case 5:
		{
			std::vector<int> v = { };
			int res;

			do {

				cout << "\n1.Ingresar un valor";
				cout << "\n2.Mostrar el arreglo";
				cout << "\n0.Volver atras\n";
				cin >> res;

				switch (res)
				{
				case 1:
				{
					int c;
					cout << "ingrese el valor que desea agregar";
					cin >> c;
					v.push_back(c);
					break;
				}
				case 2:
				{
					for (int n : v) {
						cout << n << '\n';
					}
					break;
				}
				}
			} while (res != 0);
			break;
		}
		case 0:
		{
			cout << "Gracias por utilizar la aplicacion!";
			break;
		}
		default:
			cout << "La opcion ingresada es incorrecta";
			break;
		}
	} while (true);

	system("PAUSE");

	return 0;
}