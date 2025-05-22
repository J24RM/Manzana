#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Tomate.h"
#include "Maiz.h"


#ifndef HECTAREA_H
#define HECTAREA_H

using namespace std;

class Hectarea {
private:
    string tipo_de_tierra;
    int capacidad_plantas;
    int id;
    float flujo_agua;
    bool sembrado;
    Tomate tomate;
    Maiz maiz;
    int tipo; // 1 = Tomate, 2 = Maiz, 0 = ninguna

public:
    Hectarea();

    Hectarea(string tipo, int cap_plantas, int _id, float flujo);

	//Getters

	string get_tipo_de_tierra();

	int get_capacidad_plantas();

	int get_id();

	float get_flujo_agua();

	//Setters

	void set_tipo_de_tierra(string _tipo);

	void set_capacidad_plantas(int _cap_plantas);

	void set_id(int _id_);

	void set_flujo_agua(float _flujo);

	//Funciones

	void plantar_tomate(string nombre, float agua_necesaria, string color);

	void plantar_maiz(string nombre, float agua_necesaria, float tamanio);

	float calcular_tiempo_cosecha();

	bool esta_sembrado();

	
};

#endif