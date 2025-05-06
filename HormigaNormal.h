#ifndef HORMIGANORMAL_H
#define HORMIGANORMAL_H
#include "Personaje.h"
#include <SFML/Graphics.hpp>
#include <vector>

class HormigaNormal : public Personaje {
protected:
    sf::Sprite sprite;
    std::vector<sf::Texture> texturasDerecha;
    std::vector<sf::Texture> texturasIzquierda;
    int frameActual = 0;
    bool moviendoDerecha = true;
    bool enMovimiento = false;
    sf::Clock relojAnimacion;
public:
    HormigaNormal();
    HormigaNormal(std::string nombre, int vitalidad, int alimento, std::vector<int> posicion);
    virtual ~HormigaNormal();
    void caminarAdelante();
    void caminarAtras();
    void detener ();
    void saltar();
    void recibirDañoEsporas(int esporas);
    void actualizar();
    void dibujar(sf::RenderWindow& ventana);
};
#endif //HORMIGANORMAL_H
