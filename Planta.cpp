/*
 *
 * Proyecto Simulacion de Granja - Implementación de Planta
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * 
 * Este archivo implementa la clase base Planta que contiene la funcionalidad
 * común para todos los tipos de plantas en la simulación (Maiz y Tomate).
 * Gestiona los atributos básicos y operaciones fundamentales para modelar
 * el crecimiento de plantas en el sistema de granja virtual.
 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Planta.h"


Planta::Planta() {
    nombre = "";
    agua_necesaria = 0.0;
    tiempo_cosecha = 0.0;
    tipo = 0;
}


Planta::Planta(string n, float a_nece, float T_cosecha, int _tipo) {
    nombre = n;
    agua_necesaria = a_nece;
    tiempo_cosecha = T_cosecha;
    tipo = _tipo;
}

// Getters


string Planta::get_Nombre() {
    return nombre;
}


float Planta::get_Agua_Necesaria() {
    return agua_necesaria;
}

// Setters


void Planta::set_Nombre(string _N) {
    nombre = _N;
}


void Planta::set_Agua_Necesaria(float _a_nece) {
    agua_necesaria = _a_nece;
}