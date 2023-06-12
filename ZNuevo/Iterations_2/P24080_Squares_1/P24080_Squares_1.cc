/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que imprime cuadrados con n^2 n.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P24080_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que imprime cuadrados con n^2 n." << std::endl;
  std::cout << "Introduzca un numero natural entre 1 y 9:" << std::endl;
}

/**
 * @brief Función que dado un número entero imprime cuadrados con n^2 n.
 * @param numero es el número del que se obtiene el cuadrado.
 */
void Square(int numero) {
  for (int i{0}; i < numero; ++i) {
    for (int j{0}; j < numero; ++j) {
      std::cout << numero;
    }
    std::cout << std::endl;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  Square(numero);
  while (std::cin >> numero) {
    std::cout << std::endl;
    Square(numero);
  }
  return 0;
}