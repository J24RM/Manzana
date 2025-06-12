/*
 *
 * Proyecto Simulacion de Granja - Implementación de Maiz
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * 
 * Este archivo implementa la clase Maiz que hereda de Planta.
 * Representa el cultivo de maíz en la simulación de granja, con características
 * específicas como tamaño y cálculo especializado de tiempo de cosecha.
 * Incluye métodos para gestionar el crecimiento del maíz y su interacción
 * con el flujo de agua disponible.
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Maiz.h"


Maiz::Maiz() : Planta("Maiz", 8.0, 0, 2) {
    tamanio = 1;
}


Maiz::Maiz(string n, float a_nece, float t, int _tipo) : Planta(n, a_nece, 1.0, _tipo) {
    tamanio = t;
}

// Setters
void Maiz::set_Tamanio(float t) {
    tamanio = t;
}

// Getters
float Maiz::get_Tamanio() {
    return tamanio;
}

/**
 * Calcula el tiempo estimado de cosecha para el maíz
 * 
 * @return float con el tiempo estimado de cosecha
 *         -1 si el flujo de agua es inválido (<= 0)
 * 
 * El cálculo considera:
 * - Agua necesaria (heredado de Planta)
 * - Flujo de agua disponible
 * - Tamaño actual de la planta
 * 
 * Fórmula: (agua_necesaria / flujo_agua) * tamanio
 */
float Maiz::calcular_tiempo(float flujo_agua) {
    if (flujo_agua <= 0) return -1;
    return (agua_necesaria / flujo_agua) * tamanio;
}