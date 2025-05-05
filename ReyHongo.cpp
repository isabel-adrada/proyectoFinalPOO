#include "ReyHongo.h"

ReyHongo::ReyHongo() {
  
};

ReyHongo::~ReyHongo() {
};

int ReyHongo::liberarEsporas() {

};

void ReyHongo::controlMental() {

};

int ReyHongo::propagarEsporas() {

};

void ReyHongo::robarEnergia(int vitalidad) {

};

void ReyHongo::recibirDañoLuz(int luz) {

};

void ReyHongo::setHormigasInfectadas(std::vector<HormigaInfectada*>& hormigasInfectadas) {
    this -> hormigasInfectadas = hormigasInfectadas;
};

std::vector<HormigaInfectada*> ReyHongo::getHormigasInfectadas() {
    return hormigasInfectadas;
};

void ReyHongo::agregarHormigaInfectada(HormigaInfectada* hormiga) {

};

void ReyHongo::eliminarHormigaInfectada(HormigaInfectada* hormiga) {

};