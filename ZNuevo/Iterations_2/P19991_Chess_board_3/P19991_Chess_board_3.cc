/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que considere un tablero de ajedrez cuadrado con n filas y n
 * columnas, donde cada cuadrado contiene entre 0 y 9 monedas. Tal que, dado un
 * tablero de ajedrez, calcule el número total de monedas en sus dos diagonales.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P19991_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que considera un tablero de ajedrez cuadrado con n "
               "filas y n columnas, donde cada cuadrado contiene entre 0 y 9 "
               "monedas. Dado un tablero de ajedrez, calcule el número total "
               "de monedas en sus dos diagonales."
            << std::endl;
  std::cout << "Introduzca las filas/columnas y las cantidades de monedas:"
            << std::endl;
}

/**
 * @brief Función que considera un tablero de ajedrez cuadrado con n filas y n
 * columnas, donde cada cuadrado contiene entre 0 y 9 monedas. Tal que, dado un
 * tablero de ajedrez, calcula el número total de monedas en sus dos diagonales.
 * @return número total de monedas de las dos diagonales del tablero.
 */
int CountDiagonalsChessMoney() {
  std::string monedas_str;
  char monedas_char;
  int total_monedas{0}, monedas_num, filas_columnas;
  std::cin >> filas_columnas;
  for (int i{0}; i < filas_columnas; ++i) {
    std::cin >> monedas_str;
    for (int j{0}; j < filas_columnas; ++j) {
      if ((i == j) || (j == ((filas_columnas - 1) - i))) {
        monedas_char = monedas_str.at(j);
        monedas_num = monedas_char - '0';
        total_monedas += monedas_num;
      }
    }
  }
  return total_monedas;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << CountDiagonalsChessMoney() << std::endl;
  return 0;
}