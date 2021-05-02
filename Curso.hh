/** @file Curso.hh
 * @brief Especificacion de curso
 */

#ifndef _CURSO_HH
#define _CURSO_HH

#ifndef NO_DIAGRAM
#include <string>
#include <map>
#endif


/** @class Curso
 *  @brief
 *
 */

class Curso {

private:


public:
    /** @file Sesion.hh
 * @brief Especificacion de sesion
 */

    /** @brief Creadora por defecto.

      Se ejecuta automáticamente al declarar un probelma.
      \pre id > 0
      \post El resultado es un problema con identificador "id"
    */
    Curso();


    //Destructora

    /** @brief Destructora por defecto.

      Se ejecuta automáticamente al destruir un problema.
      \pre id > 0
      \post El problema ya no existe
    */
    ~Curso();


};
#endif
