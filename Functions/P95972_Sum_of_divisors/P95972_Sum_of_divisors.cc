/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que devuelva la suma de los divisores de un número n.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P95972_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que devuelva la suma de los divisores de un número n."
            << std::endl;
  std::cout << "Introduzca un número entero:" << std::endl;
}

/**
 * @brief Función que devuelva la suma de los divisores de un número n.
 * @param x número del que se devuelve la suma de los divisores.
 * @return la suma de los divisores del número pasado.
 */
int sum_divisors(int x) {
  int suma_divisores{0};
  for (int i{1}; i <= x; ++i) {
    if (x % i == 0)
      suma_divisores += i;
  }
  return suma_divisores;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero;
  while (std::cin >> numero) {
    std::cout << sum_divisors(numero) << std::endl;
  }
  return 0;
}