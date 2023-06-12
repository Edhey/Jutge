/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 26 2023
 * @brief Programa que calcula el máximo común divisor de dos números naturales
 * a y b utilizando la versión rápida del algoritmo euclidiano.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P88790_en/submissions/S001
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que calcula el máximo común divisor de dos números "
               "naturales a y b utilizando la versión rápida del algoritmo "
               "euclidiano."
            << std::endl;
  // std::cout << "Introduzca dos números enteros: " << std::endl;
}

/**
 * @brief Función que calcula el máximo común divisor de dos números naturales a
 * y b utilizando la versión rápida del algoritmo euclidiano.
 * @param a entero del que se calcula el máximo común divisor.
 * @param b entero del que se calcula el máximo común divisor.
 * @return máximo común divisor de los dos números.
 */
int gcd(int a, int b) {
  while (b != 0) {
    int aux{b};
    b = a % b;
    a = aux;
  }
  return a;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << gcd(66, 12) << std::endl;
  std::cout << gcd(100, 21) << std::endl;
  std::cout << gcd(0, 10) << std::endl;
  return 0;
}