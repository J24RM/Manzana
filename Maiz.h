#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef MAIZ_H
#define MAIZ_H

#include "Planta.h"

class Maiz : public Planta {
private:
    float tamanio; 

public:
    Maiz();
    Maiz(string n, float a_nece, float t);

    float calcular_tiempo(float flujo_agua);  

    void set_Tamanio(float t);
    float get_Tamanio();
};

#endif
