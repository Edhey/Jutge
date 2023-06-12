/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 1 2023
 * @brief Programa que para imprimir una cruz n × n con el carácter c . Por
 * ejemplo, la llamada cruz (5, 'X'); produce esta salida:
 *   X
 *   X
 * XXXXX
 *   X
 *   X
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P24381_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "para imprimir una cruz n × n con el carácter c . Por ejemplo, la "
         "llamada cruz (5, 'X'); produce esta salida:\n   X\n   X\n XXXXX\n   "
         "X\n   X"
      << std::endl;
  std::cout << "Introduzca número entero y un carácter:" << std::endl;
}

void cross(int n, char c) {
  for (int i{0}; i < n; ++i) {
    if (i == n / 2) {
      for (int j{0}; j < n; ++j) {
        std::cout << c;
      }
      std::cout << std::endl;
    } else {
      for (int k{0}; k < n / 2; ++k) {
        std::cout << " ";
      }
      std::cout << c << std::endl;
    }
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  cross(5, 'X');
  cross(7, 'X');
  return 0;
}