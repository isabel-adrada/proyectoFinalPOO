//
// Created by ADRIANA on 3/05/2025.
//

#ifndef HORMIGAINFECTADA_H
#define HORMIGAINFECTADA_H
#include "Personaje.h"


class HormigaInfectada : public Personaje {
public:
    HormigaInfectada();
    virtual ~HormigaInfectada();
    int liberarEsporas();
    void caminarErraticamente();
};



#endif //HORMIGAINFECTADA_H
