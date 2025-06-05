#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Maiz.h"

Maiz::Maiz() : Planta("Maiz", 8.0,0,2){
    tamanio = 1;
}

Maiz::Maiz(string n, float a_nece, float t, int _tipo) : Planta(n, a_nece, 1.0, _tipo){
    tamanio = t;
}


void Maiz::set_Tamanio(float t) {
    tamanio = t;
}

float Maiz::get_Tamanio() {
    return tamanio;
}

float Maiz::calcular_tiempo(float flujo_agua) {
    if (flujo_agua <= 0) return -1;
    return (agua_necesaria / flujo_agua) * tamanio;
}

