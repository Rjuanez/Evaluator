#include <iostream>
#include <string>
#include <vector>

#include "Curso.hh"
#include "Cjt_curso.hh"

using namespace std;

Cjt_curso::Cjt_curso() {}

Cjt_curso::~Cjt_curso() {}

void Cjt_curso::leer_cursos(int n) {
  while(n > 0) {
   Curso curso;
   curso.leer_sesiones();
   cursos.push_back(curso);
   --n;
 }
}
