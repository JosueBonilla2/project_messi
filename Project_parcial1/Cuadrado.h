#pragma once
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

class Cuadrado
{
	//atributos

private:
	int dimencion;
	int posicion_y, posicion_x;
	int repetir = 0;

	//metodos

public:


	void gotoxy(int x, int y) {

		HANDLE ventana;
		ventana = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD cordenadas;

		cordenadas.X = posicion_x;

		SetConsoleCursorPosition(ventana, cordenadas);
	}

	void mover_lleno() {
		int x = 1, y = 1;
		char opcion;
		opcion = _getch();

		while (opcion != 'z' && opcion != 'x')
		{
			system("cls");
			cout << "\t\tIngrese (z) para salir del modo mover figura";
			gotoxy(x, y);

			crear_cuadrado_lleno();

			opcion = _getch();
			switch (opcion)
			{
			case 'w': posicion_y--; break;
			case 's': posicion_y++; break;
			case 'a': posicion_x--; break;
			case 'd': posicion_x++; break;
			}
		}
	}

	void mover_vacio() {
		int x = 1, y = 1;
		char opcion;
		opcion = _getch();

		while (opcion != 'z')
		{
			system("cls");
			cout << "\t\tIngrese (z) para salir del modo mover figura";

			gotoxy(x, y);

			crear_cuadrado_vacio();

			opcion = _getch();
			switch (opcion)
			{
			case 'w': posicion_y--; break;
			case 's': posicion_y++; break;
			case 'a': posicion_x--; break;
			case 'd': posicion_x++; break;
			}
		}
	}

	void crear_cuadrado_lleno() {
		for (int c = 0; c < posicion_y; c++) {
			cout << endl;
		}
		for (int x = 1; x <= dimencion; x++)
		{
			for (int c = 0; c < posicion_x; c++) {
				cout << " ";
			}
			for (int y = 1; y <= dimencion; y++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}

	void crear_cuadrado_vacio() {
		for (int c = 0; c < posicion_y; c++) {
			cout << endl;
		}
		for (int x = 1; x <= dimencion; x++)
		{
			for (int c = 0; c < posicion_x; c++) {
				cout << " ";
			}
			for (int y = 1; y <= dimencion; y++)
			{
				if (x == 1 || y == 1 || y == dimencion || x == dimencion)
				{
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}


	}

	void setDimencion(int d) {
		dimencion = d;
	}

	int getDimenciones() {
		if (dimencion > 1) {
			return dimencion;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
			system("cls");
		}
	}

	void setY(int y_) {
		posicion_y = y_;
	}

	int getY() {
		return posicion_y;
	}

	void setX(int x_) {
		posicion_x = x_;
	}

	int getX() {
		return posicion_x;
	}
};

