#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<set>
#include<math.h>
#include"Circulo.h"
#include"Cuadrado.h"
#include"Triangulo.h"
#include"Formas.h"

class Programa
{
public:
	void menu() {
		int repetir = 0;

		do {
			cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;



			int tipo;
			int figura;
			int radio, altura, dimencion, posicion_y, posicion_x;

			Cuadrado cuadro;
			Triangulo triangulo;
			Circulo circulo;


			cout << "\n\tBienvenido!!\n\n" << endl;

			cout << "Que figura desea imprimir?" << endl;
			cout << "\n\tCuadrado(1)\n\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *\n* * * * * * * *" << endl;
			cout << "\n\tTriangulo(2)\n\n*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * *\n* * * * * * *\n* * * * * * * *" << endl;
			cout << "\n\tCirculo(3)\n\n       *****\n    ***********\n   *************\n  ***************\n  ***************\n  ***************\n   *************\n    ***********\n       *****\n" << endl;
			cout << "\nSalir del programa(4)\n" << endl;
			cin >> figura;

			switch (figura) {
			case 1:

				cout << "Ingresa la dimencion del cuadrado: " << endl;
				cin >> dimencion;
				cuadro.setDimencion(dimencion);
				cout << endl;

				cuadro.getDimenciones();

				cout << "Que tipo de cuadrado decea imprimir?" << endl;
				cout << "\n\tLleno(1)\n\n* * * * \n* * * *\n* * * *\n* * * *" << endl;
				cout << "\n\tVacio(2)\n\n* * * * \n*     *\n*     *\n* * * *" << endl;
				cin >> tipo;
				cout << endl;

				cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
				cin >> posicion_y;
				cuadro.setY(posicion_y);

				cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
				cin >> posicion_x;
				cuadro.setX(posicion_x);



				if (tipo == 1) {

					cuadro.mover_lleno();
					cout << "\n\nQuieres regresar al menu(1) o salir del programa?(0)";
					cin >> repetir;
					if (repetir == 1) { system("cls"); }
				}
				else {
					if (tipo == 2) {

						cuadro.mover_vacio();
						cout << "\n\nQuieres regresar al menu(1) o salir del programa?(0)";
						cin >> repetir;
						if (repetir == 1) { system("cls"); }
					}
					else {
						cout << "El tipo ingresado no esta dentor de las opciones" << endl;
					}
				}

				break;

			case 2:

				cout << "Ingrese la altura del triangulo: " << endl;
				cin >> altura;
				triangulo.setAltura(altura);
				cout << endl;

				triangulo.getAltura();

				cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
				cin >> posicion_y;
				triangulo.setY(posicion_y);

				cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
				cin >> posicion_x;
				triangulo.setX(posicion_x);

				triangulo.mover_triangulo();
				cout << "\n\nQuieres regresar al menu(1) o salir del programa?(0)";
				cin >> repetir;
				if (repetir == 1) { system("cls"); }

				break;

			case 3:

				cout << "Introduce el radio del circulo: " << endl;
				cin >> radio;
				circulo.setRadio(radio);
				cout << endl;

				circulo.getRadio();

				cout << "Introduse la altura en Y donde quieres que se muestre: " << endl;
				cin >> posicion_y;
				circulo.setY(posicion_y);

				cout << "Introduse la altura en x donde quieres que se muestre: " << endl;
				cin >> posicion_x;
				circulo.setX(posicion_x);


				circulo.mover_circulo();

				cout << "\n\nQuieres regresar al menu(1) o salir del programa?(0)";
				cin >> repetir;
				if (repetir == 1) { system("cls"); }

				break;

			case 4:
				repetir = 0;
			break;

			default:
				cout << "\n\nOpcion no valida\n" << endl;
				break;
			}
		} while (repetir != 0);
	}

	void correr_programa() {
		menu();
	}
};
