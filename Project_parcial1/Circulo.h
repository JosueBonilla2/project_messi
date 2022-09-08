#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<math.h>
#include<conio.h>
#include"Formas.h"

using namespace std;

class Circulo : public Formas
{
private:

	int radio = 0;
	int posicion_y, posicion_x;
	int repetir = 0;

public:

	void gotoxy(int x, int y) {

		HANDLE ventana;
		ventana = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD cordenadas;

		cordenadas.X = posicion_x;


		SetConsoleCursorPosition(ventana, cordenadas);
	}

	void mover_circulo() {
		int x = 1, y = 1;
		char opcion;
		opcion = _getch();

		while (opcion != 'z')
		{
			system("cls");
			cout << "\t\tIngrese (z) para salir del modo mover figura";
			gotoxy(x, y);

			craer_circulo();

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

	void craer_circulo() {
		for (int c = 0; c < posicion_y; c++) {
			cout << endl;
		}
		for (int x = 0; x <= radio * 2; x++)
		{
			for (int c = 0; c <= posicion_x; c++) {
				cout << " ";
			}
			for (int y = 0; y <= radio * 2; y++)
			{
				if (pow(y - radio, 2.0) + pow(x - radio, 2.0) <= pow(radio, 2)) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

	void setRadio(int r) {
		radio = r;
	};

	int getRadio() {
		if (radio > 1) {
			return radio;
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

