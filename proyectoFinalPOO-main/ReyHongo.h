//
// Created by ADRIANA on 3/05/2025.
//

#ifndef REYHONGO_H
#define REYHONGO_H
#include "Personaje.h"
#include "HormigaInfectada.h"
#include <vector>


class ReyHongo : public Personaje {
protected:
    std::vector<HormigaInfectada*> hormigasInfectadas;

public:
    ReyHongo();
    virtual ~ReyHongo();
    int liberarEsporas();
    void controlMental();
    int propagarEsporas();
    void robarEnergia(int vitalidad);
    void recibirDañoLuz();
    std::vector<HormigaInfectada*> getHormigasInfectadas() const;
    void setHormigasInfectadas(const std::vector<HormigaInfectada*>& hormigasInfectadas);
    void agregarHormigaInfectada(HormigaInfectada* hormiga);
    void eliminarHormigaInfectada(HormigaInfectada* hormiga);
};




#endif //REYHONGO_H
