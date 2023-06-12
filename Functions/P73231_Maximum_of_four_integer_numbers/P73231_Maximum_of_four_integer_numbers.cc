/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 23 2023
 * @brief Programa que
 * @bug No hay errores conocidos
 * @see
 */

#include <iostream>

int max4(int a, int b, int c, int d) {
  int max{a};
  if (b > max) max = b;
  if (c > max) max = c;
  if (d > max) max = d;
  return max;
}

int main() {
  std::cout << max4(10, 20, 5, 8) << std::endl;
  std::cout << max4(0, -2, 15, 15) << std::endl;
  std::cout << max4(-1, -2, -3, -4) << std::endl;
  std::cout << max4(-1000000, 1000000, 1000000, -1000000) << std::endl;
  return 0;
}