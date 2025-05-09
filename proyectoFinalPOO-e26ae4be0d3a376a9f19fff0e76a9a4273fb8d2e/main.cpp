#include <SFML/Graphics.hpp>
#include "Ray.h"
#include <iostream>

int main() {
    sf::RenderWindow ventana(sf::VideoMode(240, 180), "MiJuego");

    Ray ray;
    std::cout << "Ejecutando Juego..." << std::endl;
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
        ray.detener();

        // Movimiento con teclas
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            ray.moverIzquierda();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            ray.moverDerecha();

        // Actualiza animación si está en movimiento
        ray.actualizar();

        ventana.clear();
        ray.dibujar(ventana);
        ventana.display();
    }

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.