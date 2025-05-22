#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "Tomate.h"

Tomate::Tomate() : Planta("Tomate", 0, 0) {}  

Tomate::Tomate(string n, float a_nece) : Planta(n, a_nece, 2.0) {}



float Tomate::calcular_tiempo(float flujo_agua) {
    if (flujo_agua <= 0) return -1;
    return (agua_necesaria / flujo_agua) * 5;  
}
