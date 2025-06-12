/*
 *
 * Proyecto Simulacion de Granja - Definición de clase Hectarea
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * 
 * Este archivo define la clase Hectarea que representa una unidad de terreno agrícola.
 * Contiene las declaraciones de los atributos y métodos para gestionar:
 * - Tipo de tierra
 * - Identificación única
 * - Flujo de agua
 * - Estado de siembra
 * - Plantas cultivadas
 * Es parte fundamental del sistema de simulación de granja.
 */

#ifndef HECTAREA_H
#define HECTAREA_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Tomate.h"  
#include "Maiz.h"    
#include "Planta.h"   

using namespace std;

class Hectarea {
private:
    // Atributos privados
    string tipo_de_tierra;  
    int id;                 
    float flujo_agua;       
    bool sembrado;          // Estado de siembra (true = con planta, false = vacía)
    Planta* planta;         
    int tipo;              // Tipo de planta sembrada (1 = Tomate, 2 = Maíz)

public:
    // Constructores
    
    
    Hectarea();

    
    Hectarea(string tipo, int _id, float flujo);

    // Getters

    string get_tipo_de_tierra();

    int get_id();

    float get_flujo_agua();

    // Setters


    void set_tipo_de_tierra(string _tipo);

    void set_id(int _id_);

    void set_flujo_agua(float _flujo);

    // Funciones 

    /**
     * Siembra una planta en la hectárea
     * entero que especifica el tipo de planta (1 = Tomate, 2 = Maíz)
     */
    void plantar_planta(int tipo); 

    /**
     * Calcula el tiempo estimado para cosecha
     * @return float con el tiempo de cosecha
     *         -1 si no hay planta sembrada
     */
    float calcular_tiempo_cosecha();

    /**
     * Verifica el estado de siembra
     * @return bool true si está sembrada, false si está vacía
     */
    bool esta_sembrado();
};

#endif