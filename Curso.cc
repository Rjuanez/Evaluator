#include <iostream>
#include <string>
#include <set>
#include <list>

#include "Curso.hh"

using namespace std;

Curso::Curso() {
  usuarios_completados = 0;
  usuarios_inscritos = 0;
}

Curso::~Curso() {}
//posible problema de rendimiento
void Curso::leer_sesiones(Cjt_sesion sesiones) {
  int n;
  cin >> n;
  while (n > 0){
    string s;
    cin >> s;
    this->sesiones.push_back(s);
    list<string> l;
    l = sesiones.consultar_problemas(s);
    //recorrer la lista mirando la sesion
    for( auto it = l.begin(); it != l.end(); ++it ) {
      lista_problemas_sesiones.insert(make_pair(*it, s));
    }
    --n;
  }

}

vector<string> Curso::listar_sesiones() {
  return sesiones;
}

void Curso::inscribir_usuario() {
  ++usuarios_inscritos;
}

int Curso::num_inscritos() {
  return usuarios_inscritos;
}

string Curso::consultar_sesion_problema(string problema) {
  if (existe_problema(problema)) {
    return lista_problemas_sesiones.find(problema)->second;
  }
  else {
    throw "Problema no pertenece al curso";
  }
}

bool Curso::existe_problema(string id) {
    bool existe_problema = false;
    map<string,string>::iterator it;
    it = lista_problemas_sesiones.find(id);
    if (it != lista_problemas_sesiones.end()) existe_problema = true;
    return existe_problema;
}
