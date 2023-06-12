/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 28 2023
 * @brief Programa que imprime n cuadrados n × n. Dibuja cada cuadrado de forma
 * independiente y comienza a llenarlo con 0, 1, …, 9, 0, etc.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P35080_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que imprima n cuadrados n x n . Dibuja cada cuadrado de "
         "forma independiente y comienza a llenarlo con 0, 1, …, 9, 0, etc."
      << std::endl;
  std::cout << "Introduzca un número entre 1 y 9:" << std::endl;
}

/**
 * @brief Función que imprime n cuadrados n × n . Para llenar todos los
 * cuadrados, comience usando 0, 1, …, 9, 0, etc.
 * @param numero es el número del que se obtiene el cuadrado.
 */
void Square(int numero) {
  for (int k{0}; k < numero; ++k) {
    int contador{0};
    for (int i{0}; i < numero; ++i) {
      for (int j{0}; j < numero; ++j) {
        std::cout << contador++ % 10;
      }
      std::cout << std::endl;
    }
    if (k != numero - 1)
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