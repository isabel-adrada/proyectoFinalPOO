//
// Created by María Antonia Gil on 21/04/25.
//

#ifndef RAY_H
#define RAY_H

#include <SFML/Graphics.hpp>
#include <vector>

class Ray {
private:
    sf::Sprite sprite;
    std::vector<sf::Texture> texturasDerecha;
    std::vector<sf::Texture> texturasIzquierda;
    int frameActual = 0;
    bool moviendoDerecha = true;
    bool enMovimiento = false;

    sf::Clock relojAnimacion;

public:
    Ray();

    void moverDerecha();
    void moverIzquierda();
    void actualizar();  // se llama cada frame
    void detener();     // se llama si no se mueve
    void dibujar(sf::RenderWindow& ventana);
};

#endif
