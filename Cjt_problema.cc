#include <iostream>
#include <string>

#include "Problema.hh"
#include "Cjt_problema.hh"

using namespace std;

Cjt_problema::Cjt_problema() {}

void Cjt_problema::leer_problemas(int n) {
    while (n > 0) {
        string id;
        cin >> id;
        problemas.insert(pair<string, Problema>(id, Problema p(id)));
    }
}
