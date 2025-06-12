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

#include "Tomate.h"

// Constructores

Tomate::Tomate() : Planta("Tomate", 0, 5,1) {}  

Tomate::Tomate(string n, float a_nece,int _tipo) : Planta(n, a_nece, 5.0, _tipo) {}



/**
 * Calcula el tiempo estimado de cosecha para el Tomate
 * 
 * @return float con el tiempo estimado de cosecha
 *         -1 si el flujo de agua es inválido (<= 0)
 * 
 * El cálculo considera:
 * - Agua necesaria (heredado de Planta)
 * - Flujo de agua disponible
 * 
 * Fórmula: (agua_necesaria / flujo_agua) * 5
 */

float Tomate::calcular_tiempo(float flujo_agua) {
    if (flujo_agua <= 0) return -1;
    return (agua_necesaria / flujo_agua) * 5;  
}
