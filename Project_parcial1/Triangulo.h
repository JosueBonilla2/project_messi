#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

class Triangulo
{
private:

	int altura;
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

	void mover_triangulo() {
		int x = 1, y = 1;
		char opcion;
		opcion = _getch();

		while (opcion != 'z')
		{
			system("cls");
			cout << "\t\tIngrese (z) para salir del modo mover figura";
			gotoxy(x, y);
			crear_triangulo();
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

	void crear_triangulo() {
		for (int c = 0; c < posicion_y; c++) {
			cout << endl;
		}
		for (int x = 1; x <= altura; x++)
		{
			for (int c = 0; c < posicion_x; c++) {
				cout << " ";
			}
			for (int y = 1; y <= x; y++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}

	void setAltura(int a) {
		altura = a;
	}

	int getAltura() {
		if (altura > 1) {
			return altura;
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