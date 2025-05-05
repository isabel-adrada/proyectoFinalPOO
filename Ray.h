#ifndef RAY_H
#define RAY_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Jugador.h"
#include "HormigaNormal.h"


class Ray : public HormigaNormal, public Jugador {
private:
    sf::Sprite sprite;
    std::vector<sf::Texture> texturasDerecha;
    std::vector<sf::Texture> texturasIzquierda;
    int frameActual = 0;
    bool moviendoDerecha = true;
    bool enMovimiento = false;
    sf::Clock relojAnimacion;
    int luz;

public:
    Ray();
    Ray(std::string nombre);
    ~Ray();
    void moverDerecha();
    void moverIzquierda();
    void actualizar();  // se llama cada frame
    void detener();     // se llama si no se mueve
    void dibujar(sf::RenderWindow& ventana);
};

#endif
