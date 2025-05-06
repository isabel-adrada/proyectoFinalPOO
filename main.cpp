#include <SFML/Graphics.hpp>
#include "Ray.h"
#include <iostream>

int main() {
    sf::RenderWindow ventana(sf::VideoMode(240, 180), "MiJuego");

    Ray *ray = new Ray("Nombre");


    while (ventana.isOpen()) {
        sf::Event evento;
        while (ventana.pollEvent(evento)) {
            if (evento.type == sf::Event::Closed)
                ventana.close();

            // 🔧 Ajustar la vista al nuevo tamaño
            if (evento.type == sf::Event::Resized) {
                sf::FloatRect visibleArea(0, 0, evento.size.width, evento.size.height);
                ventana.setView(sf::View(visibleArea));
            }
        }
        // Por defecto está quieto, a menos que se mueva
        ray -> detener();

        // Movimiento con teclas
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            ray -> caminarAtras();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            ray -> caminarAdelante();

        // Actualiza animación si está en movimiento
        ray -> actualizar();

        ventana.clear();
        ray -> dibujar(ventana);
        ventana.display();
    }


    return 0;
}
