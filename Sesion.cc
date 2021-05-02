#include <iostream>
#include <string>

#include "Sesion.hh"
#include "BinTree.hh"

using namespace std;

Sesion::Sesion(string identificador) {
    this->identificador = identificador;
}

void Sesion::leer_arbol(BinTree<string>& a) {
  string x;
  cin >> x;
  if (x!="0"){
	BinTree<string> l;
	leer_arbol(l);
	BinTree<string> r;
	leer_arbol(r);
	a = BinTree<string>(x,l,r);
  }
}

void Sesion::construir_arbol() {
    leer_arbol(prerequisitos);
}
