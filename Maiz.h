/*
 *
 * Proyecto Simulacion de Granja - Definición de clase Maiz
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 *
 * Este archivo define la clase Maiz que hereda de Planta.
 * Representa el cultivo de maíz en el sistema de simulación,
 * con atributos y métodos específicos para modelar su crecimiento
 * y necesidades particulares dentro de la granja virtual.
 */

#ifndef MAIZ_H
#define MAIZ_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Planta.h" 

class Maiz : public Planta {
private:
    float tamanio;  

public:
    Maiz();
    
    Maiz(string n, float a_nece, float t, int _tipo);

    /**
     * Calcula el tiempo estimado de cosecha
     * @return tiempo estimado o -1 si flujo es inválido
     */
    float calcular_tiempo(float flujo_agua);

    //Setters
    void set_Tamanio(float t);
    
    //Getters
    float get_Tamanio();
};

#endif 