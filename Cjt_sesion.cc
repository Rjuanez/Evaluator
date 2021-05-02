#include <iostream>
#include <string>

#include "Sesion.hh"
#include "Cjt_sesion.hh"
#include "BinTree.hh"

using namespace std;

Cjt_sesion::Cjt_sesion() { }

void Cjt_sesion::leer_sesiones(int n) {
    while (n > 0) {
        string id;
        cin >> id;
        Sesion s(id);
        s.construir_arbol();
        this->sesiones.insert(pair<string, Sesion>(id, s));
    
    }

}
