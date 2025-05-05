#include "HormigaNormal.h"
#include <iostream>

HormigaNormal::HormigaNormal() {
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
};

HormigaNormal::~HormigaNormal() {

};

void HormigaNormal::caminarAdelante() {
    moviendoDerecha = true;
    enMovimiento = true;
    sprite.move(0.1, 0.f);
};

void HormigaNormal::caminarAtras() {
    moviendoDerecha = false;
    enMovimiento = true;
    sprite.move(-0.1, 0.f);
};

void HormigaNormal::detener() {
    enMovimiento = false;
};

void HormigaNormal::saltar() {

};

void HormigaNormal::recibirDañoEsporas(int esporas) {

};