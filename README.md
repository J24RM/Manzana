# Simulador de Sembrado
Este proyecto es una simulación de cultivo en la que deberás tomar decisiones para observar el crecimiento de las plantas y experimentar los distintos procesos necesarios hasta llegar a la cosecha.

El simulador funciona de la siguiente manera: cuentas con un terreno al cual puedes añadir más hectáreas, cada una con diferentes características como capacidad, tipo de tierra, etc.
En las hectáreas puedes sembrar dos tipos de cultivos: Tomate y Maíz. Cada uno tiene distintos tiempos de crecimiento, necesidades de riego y requisitos específicos de suelo.


# Consideraciones

El juego esta hecho para que funcione desde la consola, esta hecho en c++, para poder jugarlo tienes que tener instalado un compilador de c++ en tu ordenador

compilar el juego: g++ main.cpp Terreno.cpp Hectarea.cpp Maiz.cpp Tomate.cpp Planta.cpp -o programa

correr en linux: "/a.out"

correr en windows: "a.exe"

correr en mac: abrir el archivo que se creo en la misma carpeta del archivo .cpp

#Casos de Fallo

-Si el usuario ingresa letras cuando se esperan números (ej. flujo de agua), el programa puede fallar.

-Si el flujo de agua es 0, el cálculo del tiempo de cosecha falla (división por cero).

-Si el usuario al elegir el tipo de tierra pone un string, el programa fallara y si ingresa un float el programa empezara a funcionar raro

-Si el usuario en cualquiera de los dos menus ingresa un string o float , el programa fallara

-Si el usuario al ingresar a una hectarea en ves de poner un int cuando te piden el id, pone otra cosa, el programa fallara


