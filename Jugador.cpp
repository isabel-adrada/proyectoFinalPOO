#include "Jugador.h"

Jugador::Jugador(std::string nombre) {
    this -> nombre = nombre;
    this -> puntaje = 0;
};

Jugador::Jugador() {
};

Jugador::~Jugador() {
};

std::string Jugador::getNombre() {
    return nombre;
};

int Jugador::getPuntaje() {
    return puntaje;
};

void Jugador::setNombre(std::string nombre) {
    this -> nombre = nombre;
};

void Jugador::setPuntaje(int puntaje) {
    this -> puntaje = puntaje;
};