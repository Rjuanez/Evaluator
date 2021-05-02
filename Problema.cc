#include <iostream>
#include <string>

#include "Problema.hh"

using namespace std;

Problema::Problema() {
    envios = 0;
    envios_exitosos = 0;
    ratio = 1;
    identificador = "";
}

Problema::~Problema(){}

Problema::Problema(string identificador) {
    envios = 0;
    envios_exitosos = 0;
    ratio = 1;
    this->identificador = identificador;
}
