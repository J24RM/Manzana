/*
 *
 * Proyecto Simulacion de Granja
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * Este archivo define la clase Tomate que hereda de Planta.
 * Representa el cultivo de Tomate en el sistema de simulación,
 * con atributos y métodos específicos para modelar su crecimiento
 * y necesidades particulares dentro de la granja virtual.
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#ifndef TOMATE_H
#define TOMATE_H

#include "Planta.h"

class Tomate : public Planta {
public:

    //Constructores
    Tomate();
    Tomate(string n, float a_nece, int _tipo);



    /**
     * Calcula el tiempo estimado de cosecha
     * @return tiempo estimado o -1 si flujo es inválido
     */
    float calcular_tiempo(float flujo_agua); 



};

#endif
