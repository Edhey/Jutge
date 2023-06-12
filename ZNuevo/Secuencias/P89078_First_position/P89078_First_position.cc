/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 03 2023
 * @brief Programa que lea una secuencia de números naturales e imprima la
 * posición del primer número par.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P89078_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lea una secuencia de números naturales e imprima "
               "la posición del primer número par."
            << std::endl;
  std::cout << "Introduzca una secuencia de números naturales:" << std::endl;
}

/**
 * @brief Función que lee una secuencia de números naturales e imprima la
 * posición del primer número par.
 */
int FirstParPosition() {
  int numero{}, contador{0};
  while (std::cin >> numero) {
    ++contador;
    if (numero % 2 == 0)
      return contador;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << FirstParPosition() << std::endl;
  return 0;
}