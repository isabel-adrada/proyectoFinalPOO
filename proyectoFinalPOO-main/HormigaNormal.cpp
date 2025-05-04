#include "HormigaNormal.h"

HormigaNormal::HormigaNormal() {

};

virtual HormigaNormal::~HormigaNormal() {

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