#include <iostream>
#include <string>

#include "Problema.hh"
#include "Cjt_problema.hh"

using namespace std;

Cjt_problema::Cjt_problema() {}

Cjt_problema::~Cjt_problema() {}

void Cjt_problema::leer_problemas(int n) {
    while (n > 0) {
        string id;
        cin >> id;
        Problema p(id);
        problemas.insert(make_pair(id, p));
        --n;
    }
}
