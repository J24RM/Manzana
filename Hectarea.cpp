/*
 *
 * Proyecto Simulacion de Granja - Implementación de Hectarea
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * 
 * Este archivo implementa la clase Hectarea que representa una unidad de terreno
 * agrícola. Gestiona el estado de siembra, tipo de tierra, flujo de agua y las
 * operaciones relacionadas con las plantas que pueden cultivarse en ella.
 * La clase permite sembrar plantas específicas y calcular su tiempo de cosecha.
 */

#include "Hectarea.h"

Hectarea::Hectarea() {
    tipo_de_tierra = "";
    id = 0;
    flujo_agua = 0;
    sembrado = false;
    tipo = 0;  
}

Hectarea::Hectarea(string tipoTierra, int _id, float flujo) {
    tipo_de_tierra = tipoTierra;
    id = _id;
    flujo_agua = flujo;
    sembrado = false;
    tipo = 0;
}

// Getters


string Hectarea::get_tipo_de_tierra() {
    return tipo_de_tierra;
}


int Hectarea::get_id() {
    return id;
}


float Hectarea::get_flujo_agua() {
    return flujo_agua;
}

// Setters


void Hectarea::set_tipo_de_tierra(string _tipo) {
    tipo_de_tierra = _tipo;
}

void Hectarea::set_id(int _id_) {
    id = _id_;
}


void Hectarea::set_flujo_agua(float _flujo) {
    flujo_agua = _flujo;
}

// Funciones de operación

/**
 * Siembra una planta en la hectárea según el tipo especificado
 * 
 * entero que representa el tipo de planta a sembrar
 *              1 = Tomate
 *              2 = Maíz
 * Muestra mensajes de error si la hectárea ya está sembrada
 */
void Hectarea::plantar_planta(int tipo) {
    if (sembrado) {
        cout << "Ya hay una planta en esta hectárea.\n";
        return;
    }
    else if(tipo == 1){
        Planta* tomate = new Tomate("Tomatillo", 10.0,1);
        planta = tomate;
        sembrado = true;
        cout << "Tomatillo sembrado exitosamente.\n";
    }
    else if (tipo == 2){
        Planta* maiz = new Maiz("Maicito", 8.0, 1.2,2);
        planta = maiz;
        sembrado = true;
        cout << "Maicito sembrado exitosamente.\n";
    }
}

/**
 * Calcula el tiempo de cosecha para la planta sembrada
 * 
 * float con el tiempo de cosecha calculado
 *         -1 si no hay planta sembrada
 * El cálculo utiliza el flujo de agua de la hectárea
 */
float Hectarea::calcular_tiempo_cosecha() {
    if (!sembrado) {
        cout << "No hay planta sembrada para calcular el tiempo.\n";
        return -1;
    }

    return planta->calcular_tiempo(flujo_agua);
}

/**
 * Verifica si la hectárea tiene una planta sembrada
 * 
 * @return bool true si hay planta sembrada, false en caso contrario
 */
bool Hectarea::esta_sembrado() {
    return sembrado;
}


