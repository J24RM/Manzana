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

void Terreno::agregar_Hectarea(string tierra, int cap_plantas, int id, float f_agua){
	if (contador < MAX_HECTAREAS){
		Hectarea hectarea(tierra, cap_plantas, id, f_agua);
		hectareas[contador] = hectarea;
		contador++;
	}
}
	
void Terreno::mostrar_Hectareas(){
	for (int i = 0; i < contador; i++){
		cout << i << ".- Id: " << hectareas[i].get_id() << endl;
	}
}


