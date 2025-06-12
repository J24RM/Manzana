/*
 *
 * Proyecto Simulacion de Granja - Main
 * Jesus Rodriguez Mendoza
 * A01713550
 * 11/06/2025
 * 
 * Este archivo implementa el menú principal del sistema de simulación de granja.
 * Permite gestionar terrenos y hectáreas, con opciones para crear, visualizar
 * y manipular las parcelas de cultivo.
 */

#include "Terreno.h"

int main() {
    int opcion;
    int i;
    int id = 0;
    Terreno t("RANCHO PAVOREAL");
    cout << "Instrucciones, primero crea una hectarea y luego ya vas a poder ingresar a una hectarea";

    // Bucle principal del menú
    do{
        cout << "\n Elije \n";
        cout << "1.- Mostrar Hectareas \n";
        cout << "2.- Crea hectarea\n";
        cout << "3.- Ingresar a Hectarea  \n";
        cout << "4.- SALIR\n"; 

        cin >> opcion;

        // Opción 1: Mostrar hectáreas existentes
        if (opcion == 1){
            if (id != 0){
                t.mostrar_Hectareas();
            }
        else {
            cout << "\nPrimero Crea una Hectarea\n";
        }
            
        }

        // Opción 3: Acceder a una hectárea específica
        else if (opcion == 3){
            if (id != 0){
                cout << "\n Elije id de la hectarea \n";
                cin >> i;
                if (i <= id){
                    i = i - 1;
                    int opcion2;
                    do {
                        cout << "\n--- Simulador de Siembra ---\n";
                        cout << "1. Plantar Tomate\n";
                        cout << "2. Plantar Maíz\n";
                        cout << "3. Calcular tiempo de cosecha\n";
                        cout << "4. Salir\n";
                        cout << "Opción: ";
                        cin >> opcion2;

                        // Opción 1: Plantar tomate
                        if (opcion2 == 1) {
                            t.get_hectareas(i).plantar_planta(1);

                        // Opción 2: Plantar maíz
                        } else if (opcion2 == 2) {
                            t.get_hectareas(i).plantar_planta(2);

                        // Opción 3: Calcular tiempo de cosecha
                        } else if (opcion2 == 3) {
                            float tiempo = t.get_hectareas(i).calcular_tiempo_cosecha();
                            if (tiempo != -1)
                                cout << "Tiempo estimado de cosecha: " << tiempo << " días\n";
                        }
                    } while (opcion2 != 4); // Salir
                }
                else {
                    cout << "\nNo existe\n";
                }
            }   
            else {
                cout << "\nPrimero Crea una Hectarea\n";
            }
    }
            
        
        // Opción 2: Crear nueva hectárea
        else if (opcion == 2){
            string tierra;
            int opc3;

            // Menú para seleccionar tipo de tierra
            cout << "\n1.- Arenoso";
            cout << "\n2.- Limonoso";
            cout << "\nSolo introduccir numeros enteros";
            cout << "\nTipo de tierra:";
            cin >> opc3;
            if (opc3 == 1){
                tierra = "Arenoso";
                cout << "\nTipo de Tierra: Arenoso\n";
            }
            if (opc3 == 2){
                tierra = "Limonoso";
                cout << "\nTipo de Tierra: Limonoso\n";
            }
            if (opc3 != 1 && opc3 != 2){
                cout << "\nSe asigno un tipo de tierra unico";
                tierra = "Caramelo";
                cout << "\nTipo de Tierra: Caramelo\n";
            }
            id++;
            cout << "\nEl Flujo de agua tiene que ser un numero, ejemplo 15.4 o 20\n";
            cout << "Flujo de agua: ";
            float f_agua;
            cin >> f_agua;
            t.agregar_Hectarea(tierra,id,f_agua);
            cout << "\nSe agrego la hectarea con exito\n";
        }

        
    }while(opcion != 4);

    cout << "\nSaliendo.......\n"; // Salir del programa



    return 0;
}
