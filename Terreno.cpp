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

#include "Terreno.h"

//Constructores
Terreno::Terreno() : nombre(""), contador(0) {}

Terreno::Terreno(string N){
	nombre = N;
	contador = 0;
}

//Getters
string Terreno::get_Nombre(){
	return nombre;
}

Hectarea& Terreno::get_hectareas(int ind){
	return hectareas[ind];
}


//Setters

void Terreno::set_Nombre(string _N){
	nombre = _N;
}


//Funciones

 /**
     * Funcion que se encarga de agregar las hectareas al terreno atraves de la composicion
     * recibe los valores para crear la hectarea dentro de esta clase
     */
void Terreno::agregar_Hectarea(string tierra, int id, float f_agua){
	if (contador < MAX_HECTAREAS){
		Hectarea hectarea(tierra, id, f_agua);
		hectareas[contador] = hectarea;
		contador++;
	}
}
	
/**
     * Funcion que muestra los datos de las hectareas existentes dentro del terreno
     * Muestra el Id, Tipo de Tierra y Flujo de agua
     */
void Terreno::mostrar_Hectareas(){
	for (int i = 0; i < contador; i++){
		cout << i << ".- Id: " << hectareas[i].get_id() << "  Tipo de tierra:"  << hectareas[i].get_tipo_de_tierra() << "  Flujo de agua:" << hectareas[i].get_flujo_agua() << "\n";
	}
}


