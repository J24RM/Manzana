/*
 *
 * Proyecto Simulacion de Granja
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * Clase llamada terreno que esta compuesta por hectares, desde esta clase se gestiona todo lo que tiene 
 * que ver con las hectareas.
 */


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
/**
     * Funcion que se encarga de agregar las hectareas al terreno atraves de la composicion
     * recibe los valores para crear la hectarea dentro de esta clase
     */
	void agregar_Hectarea(string tierra, int id, float f_agua);


	/**
     * Funcion que muestra los datos de las hectareas existentes dentro del terreno
     * Muestra el Id, Tipo de Tierra y Flujo de agua
     */
	void mostrar_Hectareas();


};

#endif