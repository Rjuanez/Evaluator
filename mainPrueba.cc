#include <iostream>
#include <vector>
using namespace std;

#include "Cjt_problema.hh"
#include "Cjt_sesion.hh"
#include "Cjt_curso.hh"
#include "Cjt_usuario.hh"
#include "Problema.hh"


int main() {
    Cjt_problema lista_problemas;
    //leemos y guardamos todos los problemas
    int n;
    //leemos y añadimos la cantidad de problemas a añadir a lista_problemas
    cin >> n;
    lista_problemas.leer_problemas(n);

    Cjt_sesion lista_sesiones;
    //leemos y añadimos la cantidad de sesiones a añadir a lista_sesones
    cin >> n;
    lista_sesiones.leer_sesiones(n);

    Cjt_curso lista_cursos;
    //leemos y añadimos la cantidad de cursos a añadir a lista_cursos
    cin >> n;
    lista_cursos.leer_cursos(n, lista_sesiones);


    Cjt_usuario lista_usuarios;
    //leemos y añadimos la cantidad de cursos a añadir a lista_usuarios
    cin >> n;
    lista_usuarios.leer_usuarios(n);

    string comando;
    //leemos el primer comando
    cin >> comando;
    while (comando != "fin") {
      if (comando == "nuevo_problema" or comando == "np") {
          string p; cin >> p;
          try {
              lista_problemas.anadir_problema(p);
              cout << lista_problemas.num_problemas() << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "nueva_sesion" or comando == "ns") {
          string s; cin >> s;
          try {
              lista_sesiones.anadir_sesion(s);
              cout << lista_sesiones.num_sesiones() << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "alta_usuario" or comando == "a") {
          string u; cin >> u;
          try {
              lista_usuarios.anadir_usuario(u);
              cout << lista_usuarios.num_usuarios() << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "baja_usuario" or comando == "b") {
          string u; cin >> u;
          try {
              lista_usuarios.eliminar_usuario(u);
              cout << lista_usuarios.num_usuarios() << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "inscribir_curso" or comando == "i") {
          string u; int c; cin >> u >> c;
          try {
               vector<string> s;
               s = lista_cursos.listar_sesiones(c);
               lista_sesiones.listar_primer_problema(s);
               lista_usuarios.inscribir_curso(u, c, s);
               lista_cursos.inscribir_usuario(c);
               cout << lista_cursos.num_inscritos(c) << endl;

          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "curso_usuario" or comando == "cu") {
          string u; cin >> u;
          try {
               cout << lista_usuarios.curso_actual(u) << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "curso_usuario" or comando == "cu") {
          string u; cin >> u;
          try {
               cout << lista_usuarios.curso_actual(u) << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "sesion_problema" or comando == "sp") {
          string p; int c; cin >> c >> p;
          try {
               cout << lista_cursos.consultar_sesion_problema(p, c) << endl;
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "problemas_resueltos" or comando == "pr") {
          string u;cin >> u;
          try {
               //no hace falta
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "problemas_enviables" or comando == "pe") {
          string u; cin >> u;
          try {
               lista_usuarios.problemas_enviables(u);
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "listar_problemas" or comando == "lp") {
          try {
            lista_problemas.listar_problemas();
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "escribir_problema" or comando == "ep") {
          string p; cin >> p;
          try {
            lista_problemas.listar_problema(p);
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "listar_sesiones" or comando == "ls") {
          try {
              lista_sesiones.listar_sesiones();
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      if (comando == "escribir_sesion" or comando == "es") {
          string s; cin >> s;
          try {
            lista_sesiones.listar_sesion(s);
          } catch (const char* msg) {
              cerr << msg << endl;
          }
      }
      cin >> comando;
    }
}
