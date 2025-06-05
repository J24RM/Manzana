#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Planta.h"

Planta::Planta() {
    nombre = "";
    agua_necesaria = 0.0;
}

Planta::Planta(string n, float a_nece, float T_cosecha, int _tipo) {
    nombre = n;
    agua_necesaria = a_nece;
    tiempo_cosecha = T_cosecha;
    tipo = _tipo;
}


string Planta::get_Nombre() {
    return nombre;
}

float Planta::get_Agua_Necesaria() {
    return agua_necesaria;
}

void Planta::set_Nombre(string _N) {
    nombre = _N;
}

void Planta::set_Agua_Necesaria(float _a_nece) {
    agua_necesaria = _a_nece;
}

