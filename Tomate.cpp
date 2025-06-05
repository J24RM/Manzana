#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Tomate.h"

Tomate::Tomate() : Planta("Tomate", 0, 5,1) {}  

Tomate::Tomate(string n, float a_nece,int _tipo) : Planta(n, a_nece, 5.0, _tipo) {}



float Tomate::calcular_tiempo(float flujo_agua) {
    if (flujo_agua <= 0) return -1;
    return (agua_necesaria / flujo_agua) * 5;  
}
