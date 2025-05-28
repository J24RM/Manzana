#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Hectarea.h"

#ifndef TERRENO_H
#define TERRENO_H

using namespace std;

class Terreno{
private:
	static const int MAX_HECTAREAS = 10;
	int contador;
	string nombre;
	Hectarea hectareas[MAX_HECTAREAS];

public:
	//Constructores
	Terreno(string N);

	Terreno();

	//Getters
	string get_Nombre();

	Hectarea& get_hectareas(int ind);


	//Setters

	void set_Nombre(string _N);


	//Funciones

	void agregar_Hectarea(string tierra, int cap_plantas, int id, float f_agua);

	void mostrar_Hectareas();


};

#endif