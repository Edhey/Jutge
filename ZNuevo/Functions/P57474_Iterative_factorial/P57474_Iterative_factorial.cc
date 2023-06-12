/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 26 2023
 * @brief Programa que, dado un n natural, devuelve su factorial n!.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P57474_en
 */

#include <iostream>

/**
 * @brief Función que, dado un n natural, devuelve su factorial n!
 * @param n número del cual se da el factorial.
 * @return devuelve el factorial de n.
 */
int factorial(int n) {
  int factorial{1};
  for (int i{1}; i <= n; ++i) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  std::cout << factorial(1) << std::endl;
  std::cout << factorial(0) << std::endl;
  std::cout << factorial(4) << std::endl;
  return 0; 
}