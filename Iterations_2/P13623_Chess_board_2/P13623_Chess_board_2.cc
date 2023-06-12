/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May XX 2023
 * @brief Considerando un tablero de ajedrez con r filas y c columnas, donde
 * cada cuadrado contiene entre 0 y 9 monedas. Suponemos que el cuadrado
 * superior izquierdo es blanco. Por ejemplo, este es un tablero vacío con
 * cuatro filas y cinco columnas:
 * showmover=falso, etiqueta=falso, maxfield=e4
 * Este programa, dado un tablero de ajedrez, calcua el número total de monedas
 * en sus cuadrados blancos.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P13623_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Considere un tablero de ajedrez con r filas y c columnas, "
               "donde cada cuadrado contiene entre 0 y 9 monedas. Supongamos "
               "que el cuadrado superior izquierdo es blanco. Por ejemplo, "
               "este es un tablero vacío con cuatro filas y cinco columnas: "
               "\nshowmover=falso, etiqueta=falso, maxfield=e4 \nEscriba un "
               "programa tal que, dado un tablero de ajedrez, calcule el "
               "número total de monedas en sus cuadrados blancos."
            << std::endl;
  std::cout << "Introduzca las filas, columnas y las monedas del tablero: "
            << std::endl;
}

/**
 * @brief Función que dado un tablero de ajedrez dado calcule el número de
 * monedas que hay en los cuadrados blancos.
 * @return devuelve la canritidad total de monedas.
 */
int CountWhiteChessMoney() {
  std::string monedas_str;
  char monedas_char;
  int total_monedas{0}, monedas_num, filas, columnas;
  std::cin >> filas >> columnas;
  for (int i{0}; i < filas; ++i) {
    std::cin >> monedas_str;
    for (int j{0}; j < columnas; ++j) {
      if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) {
        monedas_char = monedas_str.at(0);
        monedas_str.erase(0, 1);
        monedas_num = monedas_char - '0';
        total_monedas += monedas_num;
      } else
        monedas_str.erase(0, 1);
    }
  }
  return total_monedas;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << CountWhiteChessMoney() << std::endl;
  return 0;
}