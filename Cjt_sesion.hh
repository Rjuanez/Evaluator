/** @file Cjt_sesion.hh
 * @brief Especificacion de un conjunto de Cjt_sesion
 */

#ifndef _CJT_SESION_HH
#define _CJT_SESION_HH

#ifndef NO_DIAGRAM
#include <map>
#endif

#include "Sesion.hh"

/** @class Cjt_sesion
 *  @brief 
 * 
 */

class Cjt_sesion {
    
private:
    map <string, Sesion> sesiones;
    
public:
    
    /** @brief Creadora por defecto.

      Se ejecuta automáticamente al declarar un probelma.
      \pre 
      \post El resultado es un mapa de sesiones vacio
    */
    Cjt_sesion();
    
    //Lectura y escritura
    
    /** @brief Añade sesiones
        \pre n > 0
        \post Se le añaden al parametro implicito un numero n de sesiones
    */
    void leer_sesiones (int n);
    
};
#endif
