#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef PLANTA_H
#define PLANTA_H

using namespace std;

class Planta{
protected:
	string nombre;
	float agua_necesaria;
	float tiempo_cosecha;

public:

	//Constructor
	Planta(string n, float a_nece, float T_cosecha);

	Planta();

	//Getters

	string get_Nombre();

	float get_Agua_Necesaria();

	float get_Tiempo_De_Cosecha();

	//Setters

	void set_Nombre(string _N);

	void set_Agua_Necesaria(float _a_nece);

	void set_Tiempo_De_Cosecha(float T_cosecha);

	//Funcion

	float calcular_tiempo(float agua_necesaria);


};

#endif