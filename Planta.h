/*
 *
 * Proyecto Simulacion de Granja - Definición de clase Planta
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 *
 * Este archivo define la clase base abstracta Planta que representa
 * la estructura común para todos los tipos de plantas en el sistema.
 * Contiene los atributos básicos y métodos virtuales puros que deben
 * ser implementados por las clases hijas (Maiz y Tomate).
 */

#ifndef PLANTA_H
#define PLANTA_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Planta {
protected:
    // Atributos protegidos (accesibles por clases hijas)
    string nombre;          
    float agua_necesaria;   
    float tiempo_cosecha;   
    int tipo;              // Identificador de tipo de planta

public:
    // Constructores
    
    Planta(string n, float a_nece, float T_cosecha, int _tipo);

    Planta();

    // Getters

    string get_Nombre();

    float get_Agua_Necesaria();

    float get_Tiempo_De_Cosecha();

    // Setters

    void set_Nombre(string _N);


    void set_Agua_Necesaria(float _a_nece);

    void set_Tiempo_De_Cosecha(float T_cosecha);

    // Método virtual 

    /**
     * Método virtual para calcular tiempo de cosecha
     * @return tiempo estimado de cosecha
     * 
     * Debe ser implementado por clases hijas con la lógica específica
     * para cada tipo de planta
     */
    virtual float calcular_tiempo(float agua_necesaria) = 0;
};

#endif // PLANTA_H