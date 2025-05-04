#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>


class Jugador {
protected:
    std::string nombre;
    int puntaje;

public:
    Jugador(std::string* nombre);
    virtual ~Jugador();
    std::string getNombre();
    int getPuntaje();
    void setNombre(std::string* nombre);
    void setPuntaje(int puntaje);
};



#endif //JUGADOR_H
