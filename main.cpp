#include "Hectarea.h"

int main() {
    Hectarea h("Arcillosa", 100, 1, 2.5);

    int opcion;
    do {
        cout << "\n--- Simulador de Siembra ---\n";
        cout << "1. Plantar Tomate\n";
        cout << "2. Plantar Maíz\n";
        cout << "3. Calcular tiempo de cosecha\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            h.plantar_tomate("Tomatillo", 10.0, "Rojo");
        } else if (opcion == 2) {
            h.plantar_maiz("Maicito", 8.0, 1.2);
        } else if (opcion == 3) {
            float tiempo = h.calcular_tiempo_cosecha();
            if (tiempo != -1)
                cout << "Tiempo estimado de cosecha: " << tiempo << " días\n";
        }
    } while (opcion != 4);

    return 0;
}
