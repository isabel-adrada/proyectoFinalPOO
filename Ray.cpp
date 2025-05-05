#include "Ray.h"
#include <iostream>

Ray::Ray() {
    // Cargar texturas derecha
    sf::Texture texD1, texD2;
    if (!texD1.loadFromFile("ant_right_1.png") || !texD2.loadFromFile("ant_right_2.png")) {
        std::cerr << "Error cargando imágenes derecha" << std::endl;
    }
    texturasDerecha.push_back(texD1);
    texturasDerecha.push_back(texD2);

    // Cargar texturas izquierda
    sf::Texture texI1, texI2;
    if (!texI1.loadFromFile("ant_left_1.png") || !texI2.loadFromFile("ant_left_2.png")) {
        std::cerr << "Error cargando imágenes izquierda" << std::endl;
    }
    texturasIzquierda.push_back(texI1);
    texturasIzquierda.push_back(texI2);

    sprite.setTexture(texturasDerecha[0]);
    sprite.setPosition(100.f, 100.f);
    sprite.setScale(2.0f, 2.0f); // escalar si es muy pequeño

    this -> luz = 0;
}

Ray::~Ray() {
    std::cout << "Ray gone" << std::endl;
};

void Ray::moverDerecha() {
    moviendoDerecha = true;
    enMovimiento = true;
    sprite.move(0.1, 0.f);
}

void Ray::moverIzquierda() {
    moviendoDerecha = false;
    enMovimiento = true;
    sprite.move(-0.1, 0.f);
}

void Ray::detener() {
    enMovimiento = false;
}

void Ray::actualizar() {
    if (enMovimiento) {
        // Cambiar frame cada 0.25 segundos (4fps)
        if (relojAnimacion.getElapsedTime().asSeconds() >= 0.15f) {
            frameActual = (frameActual + 1) % 2;

            if (moviendoDerecha) {
                sprite.setTexture(texturasDerecha[frameActual]);
            } else {
                sprite.setTexture(texturasIzquierda[frameActual]);
            }

            relojAnimacion.restart();
        }
    }
    // Si no se mueve, mantener la textura actual
}

void Ray::dibujar(sf::RenderWindow& ventana) {
    ventana.draw(sprite);
}
