/** @file Cjt_curso.hh
 * @brief Especificacion de un conjunto de Cjt_curso
 */

#ifndef _CJT_CURSO_HH
#define _CJT_CURSO_HH

#ifndef NO_DIAGRAM
#include <vector>
#endif

#include "Curso.hh"


/** @class Cjt_curso
 *  @brief
 *
 */

class Cjt_curso {

private:

std::vector <Curso> cursos;


public:

    /** @brief Creadora por defecto.

      Se ejecuta automáticamente al declarar un probelma.
      \pre
      \post El resultado es un mapa de sesiones vacio
    */
    Cjt_curso();

    ~Cjt_curso();
    //Lectura y escritura

    /** @brief Añade sesiones
        \pre n > 0
        \post Se le añaden al parametro implicito un numero n de sesiones
    */
    void leer_cursos(int n);

};
#endif
