/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 26 2023
 * @brief Programa que devuelve el factorial doble n!! para un n natural.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P17913_en
 */

#include <iostream>

/**
 * @brief Función iterativa que devuelva el factorial doble n!! para un n
 * natural.
 * @param x número del que se obtiene el doble factorial.
 * @return el doble factorial de n.
 */
int double_factorial(int x) {
  int double_factorial{1};
  for (int i{x}; i > 0; i = i - 2) {
    double_factorial *= i;
  }
  return double_factorial;
}

int main() { 
  std::cout << double_factorial(9) << std::endl;
  std::cout << double_factorial(8) << std::endl;
  std::cout << double_factorial(1) << std::endl;
  std::cout << double_factorial(0) << std::endl;
  std::cout << double_factorial(19) << std::endl;
  std::cout << double_factorial(20) << std::endl;
  return 0; 
}