#include "Hectarea.h"

Hectarea::Hectarea() {
    tipo_de_tierra = "";
    capacidad_plantas = 0;
    id = 0;
    flujo_agua = 0;
    sembrado = false;
    tipo = 0;  
}

Hectarea::Hectarea(string tipoTierra, int cap_plantas, int _id, float flujo) {
    tipo_de_tierra = tipoTierra;
    capacidad_plantas = cap_plantas;
    id = _id;
    flujo_agua = flujo;
    sembrado = false;
    tipo = 0;
}

// Getters
string Hectarea::get_tipo_de_tierra() {
    return tipo_de_tierra;
}

int Hectarea::get_capacidad_plantas() {
    return capacidad_plantas;
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

void Hectarea::set_capacidad_plantas(int _cap_plantas) {
    capacidad_plantas = _cap_plantas;
}

void Hectarea::set_id(int _id_) {
    id = _id_;
}

void Hectarea::set_flujo_agua(float _flujo) {
    flujo_agua = _flujo;
}

// Funciones
void Hectarea::plantar_planta(Planta* plt) {
    if (sembrado) {
        cout << "Ya hay una planta en esta hectárea.\n";
        return;
    }
    else{
        planta = plt;
        sembrado = true;
        cout << "Planta sembrado exitosamente.\n";
    }
}



float Hectarea::calcular_tiempo_cosecha() {
    if (!sembrado) {
        cout << "No hay planta sembrada para calcular el tiempo.\n";
        return -1;
    }

        return planta->calcular_tiempo(flujo_agua);
    
}

bool Hectarea::esta_sembrado() {
    return sembrado;
}


