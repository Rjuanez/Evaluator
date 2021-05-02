#include <iostream>
#include <string>
#include <set>

#include "Curso.hh"

using namespace std;

Curso::Curso() {}

Curso::~Curso() {}

void Curso::leer_sesiones() {
  int n;
  cin >> n;
  while (n > 0){
    string s;
    cin >> s;
    sesiones.insert(s);
    --n;
  }

}
