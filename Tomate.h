#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef TOMATE_H
#define TOMATE_H

#include "Planta.h"

class Tomate : public Planta {
public:
    Tomate();
    Tomate(string n, float a_nece);

    float calcular_tiempo(float flujo_agua); 

    void set_Tamanio(float t);
    float get_Tamanio();

};

#endif
