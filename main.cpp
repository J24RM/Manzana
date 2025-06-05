#include "Terreno.h"

int main() {
    int opcion;
    int i;
    int id = 0;
    Terreno t("RANCHO PAVOREAL");
    do{
        cout << "\n Elije \n";
        cout << "1.- Mostrar Hectareas \n";
        cout << "2.- Ingresar a Hectarea \n";
        cout << "3.- Agregar hectarea \n";

        cin >> opcion;

        if (opcion == 1){
            t.mostrar_Hectareas();
        }

        else if (opcion == 2){
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

                    if (opcion2 == 1) {
                        t.get_hectareas(i).plantar_planta(1);
                    } else if (opcion2 == 2) {
                        t.get_hectareas(i).plantar_planta(2);
                    } else if (opcion2 == 3) {
                        float tiempo = t.get_hectareas(i).calcular_tiempo_cosecha();
                        if (tiempo != -1)
                            cout << "Tiempo estimado de cosecha: " << tiempo << " días\n";
                    }
                } while (opcion2 != 4);
            }
            else {
                cout << "No existe";
            }   
        }

        else if(opcion == 3){
            cout << "\n Tipo de tierra:\n";
            string tierra;
            cin >> tierra;
            int cap_plantas = 2;
            id++;
            cout << "\n Flujo de agua: \n";
            float f_agua;
            cin >> f_agua;
            t.agregar_Hectarea(tierra,cap_plantas,id,f_agua);
        }

        
    }while(opcion != 100);




    return 0;
}
