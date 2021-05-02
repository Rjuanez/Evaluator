#include <iostream>
#include <vector>
using namespace std;

#include "Cjt_problema.hh"
#include "Cjt_sesion.hh"

int main() {
    Cjt_problema lista_problemas;
    //leemos y guardamos todos los problemas
    int n;
    //leemos y añadimos la cantidad de problemas a añadir a lista_problemas
    cin >> n;
    lista_problemas.leer_problemas(n);

}