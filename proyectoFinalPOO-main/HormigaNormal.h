#ifndef HORMIGANORMAL_H
#define HORMIGANORMAL_H
#include "Personaje.h"

class HormigaNormal : public Personaje {
public:
    HormigaNormal();
    virtual ~HormigaNormal();
    void caminarAdelante();
    void caminarAtras();
    void detener ();
    void saltar();
    void recibirDañoEsporas(int esporas);
};
#endif //HORMIGANORMAL_H
