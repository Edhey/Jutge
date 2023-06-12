/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
* @date May 23 2023
* @brief Function that returns the maximum of two given integer numbers a and b.
* @bug No hay errores conocidos
* @see https://jutge.org/problems/P57846_en
*/

#include <iostream>

/**
 * @brief Función que devuelve el máximo de dos números enteros.
 * @param a número que se compara.
 * @param b número que se compara.
 * @return número entero.
 */
int max2(int a, int b) {
  return a < b ? b : a;
}

int main() {
  std::cout << max2(123, 666) << std::endl;
  std::cout << max2(3, 4) << std::endl;
  std::cout << max2(2, 2) << std::endl;
  std::cout << max2(-1, 0) << std::endl;
  return 0;
}