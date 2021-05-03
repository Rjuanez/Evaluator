#include <iostream>
#include <string>

#include "Usuario.hh"
#include "Cjt_usuario.hh"

using namespace std;


Cjt_usuario::Cjt_usuario() {}

Cjt_usuario::~Cjt_usuario() {}

void Cjt_usuario::leer_usuarios(int n) {
    while (n > 0) {
        string id;
        cin >> id;
        Usuario u(id);
        this->usuarios.insert(pair<string, Usuario>(id, u));
        --n;

    }
}

bool Cjt_usuario::existe_usuario(string id) {
    bool existe_usuario = false;
    map<string,Usuario>::iterator it;
    it = usuarios.find(id);
    if (it != usuarios.end())
        existe_usuario = true;

    return existe_usuario;
}

int Cjt_usuario::num_usuarios() {
    return usuarios.size();
}

void Cjt_usuario::anadir_usuario(string id) {
  if (not existe_usuario(id)) {
    Usuario u(id);
    this->usuarios.insert(pair<string, Usuario>(id, u));
  }
  else {
    throw "User already exist";
  }
}

void Cjt_usuario::eliminar_usuario(string id) {
  if (existe_usuario(id)) {
    map<string,Usuario>::iterator it;
    it = usuarios.find(id);
    usuarios.erase(it);
  }
  else {
    throw "User not found";
  }
}

void Cjt_usuario::inscribir_curso(string id, int c, vector<std::string> vec_p) {
  if (existe_usuario(id)) {
    try {
      usuarios[id].inscribir_curso(c, vec_p);
    } catch (const char* msg) {
      throw msg;
    }
  }
  else {
    throw "User not found";
  }
}

int Cjt_usuario::curso_actual(string id) {
  if (existe_usuario(id)) {
    return usuarios.find(id)->second.curso_actual();

  }
  else {
    throw "User not found";
  }
}

void Cjt_usuario::problemas_enviables(string id) {
  if (existe_usuario(id)) {
    try {
    usuarios.find(id)->second.f_problemas_enviables();
  } catch (const char* msg) {
      throw msg;
  }
  }
  else {
    throw "User not found";
  }
}
