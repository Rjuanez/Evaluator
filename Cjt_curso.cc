#include <iostream>
#include <string>
#include <vector>

#include "Curso.hh"
#include "Cjt_curso.hh"

using namespace std;

Cjt_curso::Cjt_curso() {
  //para que empieze en el 1
  Curso c;
  cursos.push_back(c);
}

Cjt_curso::~Cjt_curso() {}

void Cjt_curso::leer_cursos(int n, const Cjt_sesion& sesiones) {
  while(n > 0) {
   Curso curso;
   curso.leer_sesiones(sesiones);
   cursos.push_back(curso);
   --n;
 }
}

vector<string> Cjt_curso::listar_sesiones(int curso) {
  if (curso < cursos.size()) {
    return cursos[curso].listar_sesiones();
  }
  else {
    throw "El curso al que se esta intentando acceder no existe.";
  }
}

void Cjt_curso::inscribir_usuario(int c) {
  if (c < cursos.size()) {
    cursos[c].inscribir_usuario();
  }
  else {
    throw "El curso al que se esta intentando acceder no existe.";
  }
}

int Cjt_curso::num_inscritos(int c) {
  if (c < cursos.size()) {
     return cursos[c].num_inscritos();
  }
  else {
    throw "El curso al que se esta intentando acceder no existe.";
  }
}

string Cjt_curso::consultar_sesion_problema(string problema, int curso) {
  if (curso < cursos.size()) {
    try {
     return cursos[curso].consultar_sesion_problema(problema);
   } catch (const char* msg) {
       throw msg;
   }
  }
  else {
    throw "El curso al que se esta intentando acceder no existe.";
  }
}
