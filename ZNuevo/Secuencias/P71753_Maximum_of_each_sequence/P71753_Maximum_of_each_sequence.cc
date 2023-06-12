/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 06 2023
 * @brief Programa que lee secuencias de números enteros e imprima el valor
 * máximo de cada secuencia.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P71753_en
 */

#include <iostream>
#include <cmath>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que lee secuencias de números enteros e imprima el "
               "valor máximo de cada secuencia."
            << std::endl;
  std::cout << "La entrada contiene varias secuencias. Cada secuencia comienza "
               "con su número de elementos n > 0, seguido de n números enteros."
            << std::endl;
}

/**
 * @brief Función que dado un número con los elementos de la secuencia lee dicha
 * secuencia de números enteros e imprime el valor máximo de la secuencia.
 * @param elementos_de_la_secuencia es la cantidad de elementos a leer.
 * @return valor máximo de una secuencia.
 */
int MaximumOfEachSequence(int elementos_de_la_secuencia) {
  int elemento{}, mayor_elemento{};
  std::cin >> mayor_elemento;
  for (int i{1}; i < elementos_de_la_secuencia; ++i) {
    std::cin >> elemento;
    if (elemento > mayor_elemento)
      mayor_elemento = elemento;
  }
  return mayor_elemento;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int elementos_de_la_secuencia{};
  while (std::cin >> elementos_de_la_secuencia) {
    std::cout << MaximumOfEachSequence(elementos_de_la_secuencia) << std::endl;
  }
  return 0;
}