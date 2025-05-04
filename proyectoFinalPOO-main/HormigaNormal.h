//
// Created by ADRIANA on 3/05/2025.
//

#ifndef HORMIGANORMAL_H
#define HORMIGANORMAL_H
#include "Personaje.h"



class HormigaNormal : public Personaje {
public:
    HormigaNormal();
    virtual ~HormigaNormal();
    void CaminarAdelante();
    void CaminarAtras();
    void Saltar();
    void RecibirDañoEsporas(int daño);
};



#endif //HORMIGANORMAL_H
