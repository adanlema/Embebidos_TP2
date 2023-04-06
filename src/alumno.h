/* Copyright 2023 - Lema, Adan
 *
 * This file is from Adan Lema, whose purpose is for learning.
 *
 */

#ifndef ALUMNO_H
#define ALUMNO_H

/** \brief TP2
 **
 ** Resolucion del Trabajo Practico Nº2.
 **
 **/

/*==================[inclusions]=============================================*/
#include <stdint.h>

/*==================[macros]=================================================*/
#define SIZE_DATA 50
/*==================[typedef]================================================*/

typedef struct alumno_s {
    char nombre[SIZE_DATA];
    char apellido[SIZE_DATA];
    uint32_t dni;
} * alumno_pt;

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

int Serializar(const struct alumno_s * estructura, char cadena[], uint8_t tamaño);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif